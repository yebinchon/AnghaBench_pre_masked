
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt3_board {int * regs; int pdev; struct pt3_board* i2c_buf; int i2c_adap; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pt3_board*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pt3_board* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pt3_board*,int) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct pt3_board *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_6(VAR_2, VAR_3);
 FUNC_0(&VAR_2->i2c_adap);
 FUNC_1(VAR_2->i2c_buf);
 FUNC_4(VAR_2->pdev, VAR_2->regs[0]);
 FUNC_4(VAR_2->pdev, VAR_2->regs[1]);
 FUNC_5(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_2);
}
