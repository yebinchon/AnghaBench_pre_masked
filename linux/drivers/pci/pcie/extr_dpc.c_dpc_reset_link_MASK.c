
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct dpc_dev {scalar_t__ rp_extensions; scalar_t__ cap_pos; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dpc_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;
 struct dpc_dev* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_4)
{
 struct dpc_dev *VAR_5;
 u16 VAR_6;





 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = VAR_5->cap_pos;





 FUNC_2(VAR_4, 0);

 if (VAR_5->rp_extensions && FUNC_0(VAR_5))
  return VAR_0;

 FUNC_1(VAR_4, VAR_6 + VAR_2,
         VAR_3);

 if (!FUNC_2(VAR_4, 1))
  return VAR_0;

 return VAR_1;
}
