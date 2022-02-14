
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int *,int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_6, u32 VAR_7, u16 *VAR_8)
{
 s32 VAR_9;
 u32 VAR_10 = VAR_7 >> VAR_3;

 VAR_9 = VAR_6->phy.ops.acquire(VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_10 == VAR_1) {
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8,
        1, 0);
  goto release;
 }

 VAR_6->phy.addr = FUNC_1(VAR_10, VAR_7);

 if (VAR_7 > VAR_4) {
  u32 VAR_11, VAR_12;





  if (VAR_6->phy.addr == 1) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_2;
  } else {
   VAR_11 = 0;
   VAR_12 = VAR_0;
  }


  VAR_9 = FUNC_3(VAR_6, VAR_12,
          (VAR_10 << VAR_11));
  if (VAR_9)
   goto release;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_5 & VAR_7,
        VAR_8);
release:
 VAR_6->phy.ops.release(VAR_6);
 return VAR_9;
}
