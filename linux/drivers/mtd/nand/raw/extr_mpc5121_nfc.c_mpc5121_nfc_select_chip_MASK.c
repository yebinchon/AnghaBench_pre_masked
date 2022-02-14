
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtd_info*,int ,int) ;
 int FUNC_2 (struct mtd_info*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_0(VAR_5);

 if (VAR_6 < 0) {
  FUNC_1(VAR_7, VAR_4, VAR_3);
  return;
 }

 FUNC_1(VAR_7, VAR_2, VAR_0);
 FUNC_2(VAR_7, VAR_2, (VAR_6 << VAR_1) &
       VAR_0);
 FUNC_2(VAR_7, VAR_4, VAR_3);
}
