
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spinand_device {scalar_t__ cur_target; int * cfg_cache; } ;
struct TYPE_2__ {scalar_t__ ntargets; } ;
struct nand_device {TYPE_1__ memorg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct nand_device* FUNC_1 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_1, u8 *VAR_2)
{
 struct nand_device *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_1->cur_target < 0 ||
      VAR_1->cur_target >= VAR_3->memorg.ntargets))
  return -VAR_0;

 *VAR_2 = VAR_1->cfg_cache[VAR_1->cur_target];
 return 0;
}
