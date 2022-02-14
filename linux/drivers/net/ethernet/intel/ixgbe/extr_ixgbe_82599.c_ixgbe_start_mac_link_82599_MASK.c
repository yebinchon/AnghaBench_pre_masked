
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_10,
          bool VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 s32 VAR_15 = 0;
 bool VAR_16 = 0;

 if (FUNC_3(VAR_10)) {
  VAR_15 = VAR_10->mac.ops.acquire_swfw_sync(VAR_10,
      VAR_7);
  if (VAR_15)
   return VAR_15;

  VAR_16 = 1;
 }


 FUNC_2(VAR_10);

 if (VAR_16)
  VAR_10->mac.ops.release_swfw_sync(VAR_10, VAR_7);


 if (VAR_11) {
  VAR_12 = FUNC_0(VAR_10, VAR_0);
  if ((VAR_12 & VAR_4) ==
       VAR_1 ||
      (VAR_12 & VAR_4) ==
       VAR_2 ||
      (VAR_12 & VAR_4) ==
       VAR_3) {
   VAR_13 = 0;
   for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
    VAR_13 = FUNC_0(VAR_10, VAR_8);
    if (VAR_13 & VAR_9)
     break;
    FUNC_4(100);
   }
   if (!(VAR_13 & VAR_9)) {
    VAR_15 = VAR_6;
    FUNC_1(VAR_10, "Autoneg did not complete.\n");
   }
  }
 }


 FUNC_4(50);

 return VAR_15;
}
