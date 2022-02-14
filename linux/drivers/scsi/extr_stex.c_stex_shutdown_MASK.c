
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_hba {int supports_pm; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct st_hba* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct st_hba*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_5)
{
 struct st_hba *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->supports_pm == 0) {
  FUNC_1(VAR_6, VAR_1);
 } else if (VAR_6->supports_pm == 1 && VAR_0) {
  FUNC_2(&VAR_4);
  FUNC_1(VAR_6, VAR_3);
 } else
  FUNC_1(VAR_6, VAR_2);
}
