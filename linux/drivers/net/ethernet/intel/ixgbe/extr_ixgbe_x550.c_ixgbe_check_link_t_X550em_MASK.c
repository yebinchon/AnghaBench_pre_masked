
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_4__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_5,
         ixgbe_link_speed *VAR_6,
         bool *VAR_7,
         bool VAR_8)
{
 u32 VAR_9;
 u16 VAR_10, VAR_11;

 if (VAR_5->mac.ops.get_media_type(VAR_5) != VAR_4)
  return VAR_0;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7,
           VAR_8);


 if (VAR_9 || !(*VAR_7))
  return VAR_9;






 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_9 = VAR_5->phy.ops.read_reg(VAR_5, VAR_3, VAR_2,
           &VAR_11);

  if (VAR_9)
   return VAR_9;
 }


 if (!(VAR_11 & VAR_1))
  *VAR_7 = 0;

 return 0;
}
