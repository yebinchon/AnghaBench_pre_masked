
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinand_device {unsigned int cur_target; int (* select_target ) (struct spinand_device*,unsigned int) ;} ;
struct TYPE_2__ {unsigned int ntargets; } ;
struct nand_device {TYPE_1__ memorg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct nand_device* FUNC_1 (struct spinand_device*) ;
 int FUNC_2 (struct spinand_device*,unsigned int) ;

int FUNC_3(struct spinand_device *VAR_1, unsigned int VAR_2)
{
 struct nand_device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (FUNC_0(VAR_2 >= VAR_3->memorg.ntargets))
  return -VAR_0;

 if (VAR_1->cur_target == VAR_2)
  return 0;

 if (VAR_3->memorg.ntargets == 1) {
  VAR_1->cur_target = VAR_2;
  return 0;
 }

 VAR_4 = VAR_1->select_target(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_1->cur_target = VAR_2;
 return 0;
}
