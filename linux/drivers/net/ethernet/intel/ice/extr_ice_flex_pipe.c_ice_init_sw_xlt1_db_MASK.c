
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct ice_hw {TYPE_2__* blk; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_3__ {size_t count; scalar_t__* t; } ;
struct TYPE_4__ {TYPE_1__ xlt1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ice_hw*,int,size_t,scalar_t__) ;
 int FUNC_1 (struct ice_hw*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_1, enum ice_block VAR_2)
{
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->blk[VAR_2].xlt1.count; VAR_3++) {
  u8 VAR_4;

  VAR_4 = VAR_1->blk[VAR_2].xlt1.t[VAR_3];
  if (VAR_4 != VAR_0) {
   FUNC_1(VAR_1, VAR_2, VAR_4);
   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  }
 }
}
