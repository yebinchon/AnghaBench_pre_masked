
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_pos {int dummy; } ;
struct nand_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_device*,unsigned int) ;
 int FUNC_1 (struct nand_device*) ;
 unsigned int FUNC_2 (struct nand_device*,struct nand_pos const*) ;

bool FUNC_3(struct nand_device *VAR_1, const struct nand_pos *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 if (!FUNC_1(VAR_1))
  return 0;


 VAR_3 = FUNC_2(VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 return VAR_4 == VAR_0;
}
