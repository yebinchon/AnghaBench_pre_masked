
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xway_nand_data {int csflags; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 struct xway_nand_data* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_4, int VAR_5)
{
 struct xway_nand_data *VAR_6 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case -1:
  FUNC_1(VAR_1, 0, VAR_0);
  FUNC_1(VAR_2, 0, VAR_0);
  FUNC_4(&VAR_3, VAR_6->csflags);
  break;
 case 0:
  FUNC_3(&VAR_3, VAR_6->csflags);
  FUNC_1(0, VAR_2, VAR_0);
  FUNC_1(0, VAR_1, VAR_0);
  break;
 default:
  FUNC_0();
 }
}
