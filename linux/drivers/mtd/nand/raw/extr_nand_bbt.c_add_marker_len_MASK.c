
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_bbt_descr {int options; int len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct nand_bbt_descr *VAR_2)
{
 u32 VAR_3;

 if (!(VAR_2->options & VAR_0))
  return 0;

 VAR_3 = VAR_2->len;
 if (VAR_2->options & VAR_1)
  VAR_3++;
 return VAR_3;
}
