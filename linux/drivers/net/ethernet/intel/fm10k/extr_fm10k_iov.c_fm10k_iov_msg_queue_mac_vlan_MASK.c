
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fm10k_vf_info {int vf_flags; int glort; int mac; int vsi; scalar_t__ pf_vid; } ;
struct fm10k_mbx_info {int dummy; } ;
struct fm10k_intfc {int dummy; } ;
struct TYPE_3__ {int (* update_vlan ) (struct fm10k_hw*,int,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; struct fm10k_intfc* back; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct fm10k_vf_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fm10k_vf_info*,int) ;
 int FUNC_3 (struct fm10k_intfc*,int ,int *,int,int) ;
 int FUNC_4 (int*,int *,int*) ;
 int FUNC_5 (int*,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct fm10k_hw*,int,int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct fm10k_hw *VAR_7, u32 **VAR_8,
     struct fm10k_mbx_info *VAR_9)
{
 struct fm10k_vf_info *VAR_10 = (struct fm10k_vf_info *)VAR_9;
 struct fm10k_intfc *VAR_11 = VAR_7->back;
 u8 VAR_12[VAR_0];
 u32 *VAR_13;
 int VAR_14 = 0;
 bool VAR_15;
 u16 VAR_16;
 u32 VAR_17;


 if (!FUNC_0(VAR_10))
  VAR_14 = VAR_1;

 if (!VAR_14 && !!VAR_8[VAR_4]) {
  VAR_13 = VAR_8[VAR_4];


  VAR_14 = FUNC_5(VAR_13, &VAR_17);
  if (VAR_14)
   return VAR_14;

  VAR_15 = !(VAR_17 & VAR_6);
  VAR_17 &= ~VAR_6;
  if (VAR_17 >> 16) {



   if (VAR_10->pf_vid)
    return VAR_1;
  } else {
   VAR_14 = FUNC_2(VAR_10, (u16)VAR_17);
   if (VAR_14 < 0)
    return VAR_14;

   VAR_17 = VAR_14;
  }


  VAR_14 = VAR_7->mac.ops.update_vlan(VAR_7, VAR_17, VAR_10->vsi, VAR_15);
 }

 if (!VAR_14 && !!VAR_8[VAR_2]) {
  VAR_13 = VAR_8[VAR_2];


  VAR_14 = FUNC_4(VAR_13, VAR_12, &VAR_16);
  if (VAR_14)
   return VAR_14;


  if (FUNC_6(VAR_10->mac) &&
      !FUNC_1(VAR_12, VAR_10->mac))
   return VAR_1;

  VAR_15 = !(VAR_16 & VAR_6);
  VAR_16 &= ~VAR_6;

  VAR_14 = FUNC_2(VAR_10, VAR_16);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_16 = (u16)VAR_14;


  VAR_14 = FUNC_3(VAR_11, VAR_10->glort,
           VAR_12, VAR_16, VAR_15);
 }

 if (!VAR_14 && !!VAR_8[VAR_3]) {
  VAR_13 = VAR_8[VAR_3];


  VAR_14 = FUNC_4(VAR_13, VAR_12, &VAR_16);
  if (VAR_14)
   return VAR_14;


  if (!(VAR_10->vf_flags & VAR_5))
   return VAR_1;

  VAR_15 = !(VAR_16 & VAR_6);
  VAR_16 &= ~VAR_6;

  VAR_14 = FUNC_2(VAR_10, VAR_16);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_16 = (u16)VAR_14;


  VAR_14 = FUNC_3(VAR_11, VAR_10->glort,
           VAR_12, VAR_16, VAR_15);
 }

 return VAR_14;
}
