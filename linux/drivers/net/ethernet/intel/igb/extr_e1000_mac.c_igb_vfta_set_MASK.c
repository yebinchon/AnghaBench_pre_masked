
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igb_adapter {int* shadow_vfta; int vfs_allocated_count; } ;
struct TYPE_3__ {int (* write_vfta ) (struct e1000_hw*,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; struct igb_adapter* back; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct e1000_hw*,int,int) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 int FUNC_6 (int ,int) ;

s32 FUNC_7(struct e1000_hw *VAR_4, u32 VAR_5, u32 VAR_6,
   bool VAR_7, bool VAR_8)
{
 struct igb_adapter *VAR_9 = VAR_4->back;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 s32 VAR_14;

 if ((VAR_5 > 4095) || (VAR_6 > 7))
  return -VAR_0;
 VAR_10 = VAR_5 / 32;
 VAR_11 = FUNC_0(VAR_5 % 32);
 VAR_12 = VAR_9->shadow_vfta[VAR_10];





 VAR_11 &= VAR_7 ? ~VAR_12 : VAR_12;
 VAR_12 ^= VAR_11;
 if (!VAR_9->vfs_allocated_count)
  goto vfta_update;

 VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_8);
 if (VAR_14 < 0) {
  if (VAR_8)
   goto vfta_update;
  return VAR_14;
 }

 VAR_13 = FUNC_3(FUNC_1(VAR_14));


 VAR_13 |= FUNC_0(VAR_2 + VAR_6);
 if (VAR_7)
  goto vlvf_update;


 VAR_13 ^= FUNC_0(VAR_2 + VAR_6);

 if (!(VAR_13 & VAR_1)) {




  if (VAR_11)
   VAR_4->mac.ops.write_vfta(VAR_4, VAR_10, VAR_12);


  FUNC_6(FUNC_1(VAR_14), 0);

  return 0;
 }
 VAR_11 = 0;

vlvf_update:

 FUNC_6(FUNC_1(VAR_14), VAR_13 | VAR_5 | VAR_3);

vfta_update:

 if (VAR_11)
  VAR_4->mac.ops.write_vfta(VAR_4, VAR_10, VAR_12);

 return 0;
}
