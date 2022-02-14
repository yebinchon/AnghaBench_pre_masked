
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_pos {int dummy; } ;
struct nand_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* erase ) (struct nand_device*,struct nand_pos const*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nand_device*,struct nand_pos const*) ;
 scalar_t__ FUNC_1 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_2 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct nand_device*,struct nand_pos const*) ;

int FUNC_5(struct nand_device *VAR_1, const struct nand_pos *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) || FUNC_1(VAR_1, VAR_2)) {
  FUNC_3("attempt to erase a bad/reserved block @%llx\n",
   FUNC_2(VAR_1, VAR_2));
  return -VAR_0;
 }

 return VAR_1->ops->erase(VAR_1, VAR_2);
}
