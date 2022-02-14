
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smtcfb_info {int fb; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct smtcfb_info* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct smtcfb_info*) ;
 int FUNC_5 (struct smtcfb_info*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct smtcfb_info *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_6(VAR_1->fb);
 FUNC_0(VAR_1->fb);
 FUNC_3(VAR_0, 0);
 FUNC_1(VAR_0);
}
