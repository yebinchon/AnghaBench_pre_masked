
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int dummy; } ;
typedef int pci_power_t ;


 int FUNC_0 (struct qed_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct qed_dev *VAR_2, pci_power_t VAR_3)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_1, "Omitting Power state change\n");
 return 0;
}
