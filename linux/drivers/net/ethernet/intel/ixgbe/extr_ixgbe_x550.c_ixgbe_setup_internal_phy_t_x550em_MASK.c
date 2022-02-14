
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
struct TYPE_7__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_8__ {int nw_mng_if_sel; TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_10)
{
 ixgbe_link_speed VAR_11;
 bool VAR_12;
 u32 VAR_13;
 u16 VAR_14;

 if (VAR_10->mac.ops.get_media_type(VAR_10) != VAR_9)
  return VAR_0;

 if (!(VAR_10->mac.type == VAR_8 &&
       !(VAR_10->phy.nw_mng_if_sel & VAR_6))) {
  VAR_14 = VAR_2 |
   VAR_3;
  return FUNC_2(VAR_10, VAR_14);
 }


 VAR_13 = FUNC_0(VAR_10, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (!VAR_12)
  return 0;

 VAR_13 = VAR_10->phy.ops.read_reg(VAR_10, VAR_4,
          VAR_7,
          &VAR_14);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_0(VAR_10, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (!VAR_12)
  return 0;


 VAR_14 &= VAR_5;

 switch (VAR_14) {
 case 129:
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_3;
  break;
 default:

  return VAR_1;
 }

 return FUNC_1(VAR_10, &VAR_11);
}
