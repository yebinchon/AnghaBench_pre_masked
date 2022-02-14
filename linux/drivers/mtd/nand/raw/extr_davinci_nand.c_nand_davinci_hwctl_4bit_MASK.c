
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct davinci_nand_info {int core_chipsel; int is_readmode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct davinci_nand_info*,int ) ;
 int FUNC_2 (struct davinci_nand_info*,int ,int) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct davinci_nand_info* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct nand_chip *VAR_4, int VAR_5)
{
 struct davinci_nand_info *VAR_6 = FUNC_6(FUNC_3(VAR_4));
 unsigned long VAR_7;
 u32 VAR_8;


 FUNC_1(VAR_6, VAR_1);

 FUNC_4(&VAR_3, VAR_7);


 VAR_8 = FUNC_1(VAR_6, VAR_0);
 VAR_8 &= ~(0x03 << 4);
 VAR_8 |= (VAR_6->core_chipsel << 4) | FUNC_0(12);
 FUNC_2(VAR_6, VAR_0, VAR_8);

 VAR_6->is_readmode = (VAR_5 == VAR_2);

 FUNC_5(&VAR_3, VAR_7);
}
