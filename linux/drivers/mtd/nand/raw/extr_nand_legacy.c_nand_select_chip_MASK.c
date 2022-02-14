
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cmd_ctrl ) (struct nand_chip*,int ,int) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nand_chip*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case -1:
  VAR_2->legacy.cmd_ctrl(VAR_2, VAR_0,
          0 | VAR_1);
  break;
 case 0:
  break;

 default:
  FUNC_0();
 }
}
