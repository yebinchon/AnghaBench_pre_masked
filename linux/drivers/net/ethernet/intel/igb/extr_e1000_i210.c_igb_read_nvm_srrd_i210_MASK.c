
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2, u16 VAR_3, u16 VAR_4,
      u16 *VAR_5)
{
 s32 VAR_6 = 0;
 u16 VAR_7, VAR_8;





 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += VAR_0) {
  VAR_8 = (VAR_4 - VAR_7) / VAR_0 > 0 ?
   VAR_0 : (VAR_4 - VAR_7);
  if (!(VAR_2->nvm.ops.acquire(VAR_2))) {
   VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_8,
           VAR_5 + VAR_7);
   VAR_2->nvm.ops.release(VAR_2);
  } else {
   VAR_6 = VAR_1;
  }

  if (VAR_6)
   break;
 }

 return VAR_6;
}
