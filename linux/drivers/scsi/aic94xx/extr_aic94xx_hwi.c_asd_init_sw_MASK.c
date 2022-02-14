
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct pci_dev {int dummy; } ;
struct asd_ha_struct {int iolock; TYPE_1__* io_handle; int iospace; struct pci_dev* pcidev; } ;
struct TYPE_2__ {void* swa_base; scalar_t__ len; void* swc_base; void* swb_base; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,void**) ;
 int FUNC_3 (struct pci_dev*,int ,void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct asd_ha_struct *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->pcidev;
 int VAR_12;
 u32 VAR_13;


 VAR_12 = FUNC_2(VAR_11, VAR_6, &VAR_13);
 if (VAR_12) {
  FUNC_0("couldn't access conf. space of %s\n",
      FUNC_1(VAR_11));
  goto Err;
 }
 if (VAR_13)
  VAR_12 = FUNC_3(VAR_11, VAR_6, VAR_13);
 if (VAR_12) {
  FUNC_0("couldn't write to MBAR_KEY of %s\n",
      FUNC_1(VAR_11));
  goto Err;
 }




 FUNC_3(VAR_11, VAR_2, VAR_7);
 FUNC_3(VAR_11, VAR_3,
          VAR_8);
 FUNC_3(VAR_11, VAR_4, VAR_9);
 VAR_10->io_handle[0].swa_base = VAR_7;
 VAR_10->io_handle[0].swb_base = VAR_8;
 VAR_10->io_handle[0].swc_base = VAR_9;
 VAR_0 = VAR_10->io_handle[0].len - 0x80;
 if (!VAR_10->iospace) {

  FUNC_3(VAR_11, VAR_5, VAR_1);
  VAR_10->io_handle[1].swa_base = VAR_1;
 }
 FUNC_4(&VAR_10->iolock);
Err:
 return VAR_12;
}
