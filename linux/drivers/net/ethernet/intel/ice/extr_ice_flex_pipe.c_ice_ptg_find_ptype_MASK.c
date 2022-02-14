
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct ice_hw {TYPE_3__* blk; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_5__ {TYPE_1__* ptypes; } ;
struct TYPE_6__ {TYPE_2__ xlt1; } ;
struct TYPE_4__ {int ptg; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static enum ice_status
FUNC_0(struct ice_hw *VAR_2, enum ice_block VAR_3, u16 VAR_4, u8 *VAR_5)
{
 if (VAR_4 >= VAR_1 || !VAR_5)
  return VAR_0;

 *VAR_5 = VAR_2->blk[VAR_3].xlt1.ptypes[VAR_4].ptg;
 return 0;
}
