
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct davinci_nand_info {scalar_t__ core_chipsel; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct davinci_nand_info*,int ) ;
 int FUNC_2 (struct davinci_nand_info*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct davinci_nand_info* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct nand_chip *VAR_2, int VAR_3)
{
 struct davinci_nand_info *VAR_4;
 uint32_t VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_7(FUNC_4(VAR_2));


 FUNC_3(FUNC_4(VAR_2));

 FUNC_5(&VAR_1, VAR_6);


 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 |= FUNC_0(8 + VAR_4->core_chipsel);
 FUNC_2(VAR_4, VAR_0, VAR_5);

 FUNC_6(&VAR_1, VAR_6);
}
