
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct ice_hw {TYPE_2__* blk; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_6__ {size_t count; size_t* t; TYPE_1__* vsis; } ;
struct TYPE_5__ {TYPE_3__ xlt2; } ;
struct TYPE_4__ {scalar_t__ changed; } ;


 int FUNC_0 (struct ice_hw*,int,size_t,size_t) ;
 int FUNC_1 (struct ice_hw*,int,size_t) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_0, enum ice_block VAR_1)
{
 u16 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->blk[VAR_1].xlt2.count; VAR_2++) {
  u16 VAR_3;

  VAR_3 = VAR_0->blk[VAR_1].xlt2.t[VAR_2];
  if (VAR_3) {
   FUNC_1(VAR_0, VAR_1, VAR_3);
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);



   VAR_0->blk[VAR_1].xlt2.vsis[VAR_2].changed = 0;
  }
 }
}
