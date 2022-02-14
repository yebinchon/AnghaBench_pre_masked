
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int link_active_reporting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;

bool FUNC_3(struct pci_dev *VAR_2, bool VAR_3)
{
 int VAR_4 = 1000;
 bool VAR_5;
 u16 VAR_6;





 if (!VAR_2->link_active_reporting) {
  FUNC_0(1100);
  return 1;
 }
 if (VAR_3)
  FUNC_0(20);
 for (;;) {
  FUNC_2(VAR_2, VAR_0, &VAR_6);
  VAR_5 = !!(VAR_6 & VAR_1);
  if (VAR_5 == VAR_3)
   break;
  if (VAR_4 <= 0)
   break;
  FUNC_0(10);
  VAR_4 -= 10;
 }
 if (VAR_3 && VAR_5)
  FUNC_0(100);
 else if (VAR_5 != VAR_3)
  FUNC_1(VAR_2, "Data Link Layer Link Active not %s in 1000 msec\n",
   VAR_3 ? "set" : "cleared");
 return VAR_5 == VAR_3;
}
