
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int ats_enabled; int ats_stu; scalar_t__ ats_cap; int ats_ref_cnt; scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct pci_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int ) ;

int FUNC_5(struct pci_dev *VAR_5, int VAR_6)
{
 u16 VAR_7;
 struct pci_dev *VAR_8;

 if (!VAR_5->ats_cap)
  return -VAR_1;

 if (FUNC_1(VAR_5->ats_enabled))
  return -VAR_0;

 if (VAR_6 < VAR_4)
  return -VAR_1;





 VAR_7 = VAR_3;
 if (VAR_5->is_virtfn) {
  VAR_8 = FUNC_3(VAR_5);
  if (VAR_8->ats_stu != VAR_6)
   return -VAR_1;

  FUNC_2(&VAR_8->ats_ref_cnt);
 } else {
  VAR_5->ats_stu = VAR_6;
  VAR_7 |= FUNC_0(VAR_5->ats_stu - VAR_4);
 }
 FUNC_4(VAR_5, VAR_5->ats_cap + VAR_2, VAR_7);

 VAR_5->ats_enabled = 1;
 return 0;
}
