
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_hba {scalar_t__ cardtype; int supports_pm; } ;
struct pci_dev {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 struct st_hba* FUNC_0 (struct pci_dev*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct st_hba*,int ) ;
 int FUNC_2 (struct st_hba*,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, pm_message_t VAR_4)
{
 struct st_hba *VAR_5 = FUNC_0(VAR_3);

 if ((VAR_5->cardtype == VAR_2 || VAR_5->cardtype == VAR_1)
  && VAR_5->supports_pm == 1)
  FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_4));
 else
  FUNC_2(VAR_5, VAR_0);
 return 0;
}
