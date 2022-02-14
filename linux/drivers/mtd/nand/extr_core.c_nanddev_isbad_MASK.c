
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_pos {int dummy; } ;
struct nand_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* isbad ) (struct nand_device*,struct nand_pos const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nand_device*,unsigned int) ;
 scalar_t__ FUNC_1 (struct nand_device*) ;
 unsigned int FUNC_2 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_3 (struct nand_device*,unsigned int,int) ;
 int FUNC_4 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_5 (struct nand_device*,struct nand_pos const*) ;

bool FUNC_6(struct nand_device *VAR_4, const struct nand_pos *VAR_5)
{
 if (FUNC_1(VAR_4)) {
  unsigned int VAR_6;
  int VAR_7;

  VAR_6 = FUNC_2(VAR_4, VAR_5);
  VAR_7 = FUNC_0(VAR_4, VAR_6);

  if (VAR_7 == VAR_2) {
   if (VAR_4->ops->isbad(VAR_4, VAR_5))
    VAR_7 = VAR_0;
   else
    VAR_7 = VAR_1;

   FUNC_3(VAR_4, VAR_6, VAR_7);
  }

  if (VAR_7 == VAR_3 ||
      VAR_7 == VAR_0)
   return 1;

  return 0;
 }

 return VAR_4->ops->isbad(VAR_4, VAR_5);
}
