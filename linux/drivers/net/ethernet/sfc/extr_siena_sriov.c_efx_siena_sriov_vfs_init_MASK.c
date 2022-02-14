
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct siena_vf {unsigned int buftbl_base; unsigned int pci_rid; int buf; int pci_name; } ;
struct siena_nic_data {unsigned int vf_buftbl_base; struct siena_vf* vf; } ;
struct pci_dev {unsigned int devfn; TYPE_1__* bus; } ;
struct efx_nic {unsigned int vf_count; struct siena_nic_data* nic_data; struct pci_dev* pci_dev; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct efx_nic*,int *,int ,int ) ;
 int FUNC_3 (struct efx_nic*) ;
 unsigned int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,unsigned int*) ;
 int FUNC_8 (int ,int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pci_dev;
 struct siena_nic_data *VAR_9 = VAR_7->nic_data;
 unsigned VAR_10, VAR_11, VAR_12, VAR_13;
 u16 VAR_14, VAR_15;
 struct siena_vf *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_6(VAR_8, VAR_4);
 if (!VAR_12)
  return -VAR_2;

 FUNC_7(VAR_8, VAR_12 + VAR_5, &VAR_14);
 FUNC_7(VAR_8, VAR_12 + VAR_6, &VAR_15);

 VAR_13 = VAR_9->vf_buftbl_base;
 VAR_11 = VAR_8->devfn + VAR_14;
 for (VAR_10 = 0; VAR_10 < VAR_7->vf_count; ++VAR_10) {
  VAR_16 = VAR_9->vf + VAR_10;


  VAR_16->buftbl_base = VAR_13;
  VAR_13 += VAR_1 * FUNC_4(VAR_7);

  VAR_16->pci_rid = VAR_11;
  FUNC_8(VAR_16->pci_name, sizeof(VAR_16->pci_name),
    "%04x:%02x:%02x.%d",
    FUNC_5(VAR_8->bus), VAR_8->bus->number,
    FUNC_1(VAR_11), FUNC_0(VAR_11));

  VAR_17 = FUNC_2(VAR_7, &VAR_16->buf, VAR_0,
       VAR_3);
  if (VAR_17)
   goto fail;

  VAR_11 += VAR_15;
 }

 return 0;

fail:
 FUNC_3(VAR_7);
 return VAR_17;
}
