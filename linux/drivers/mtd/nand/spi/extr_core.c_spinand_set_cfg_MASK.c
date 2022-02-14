
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spinand_device {scalar_t__ cur_target; scalar_t__* cfg_cache; } ;
struct TYPE_2__ {scalar_t__ ntargets; } ;
struct nand_device {TYPE_1__ memorg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct nand_device* FUNC_1 (struct spinand_device*) ;
 int FUNC_2 (struct spinand_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spinand_device *VAR_2, u8 VAR_3)
{
 struct nand_device *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (FUNC_0(VAR_2->cur_target < 0 ||
      VAR_2->cur_target >= VAR_4->memorg.ntargets))
  return -VAR_0;

 if (VAR_2->cfg_cache[VAR_2->cur_target] == VAR_3)
  return 0;

 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_2->cfg_cache[VAR_2->cur_target] = VAR_3;
 return 0;
}
