
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* disconnect ) (struct fm10k_hw*,TYPE_6__*) ;} ;
struct TYPE_12__ {TYPE_1__ ops; scalar_t__ timeout; } ;
struct fm10k_vf_info {int vf_idx; int pf_vid; int sw_vid; scalar_t__* mac; int vsi; TYPE_6__ mbx; } ;
struct TYPE_8__ {int (* update_int_moderator ) (struct fm10k_hw*) ;} ;
struct TYPE_11__ {int itr_scale; TYPE_2__ ops; } ;
struct TYPE_9__ {int (* assign_int_moderator ) (struct fm10k_hw*,int) ;} ;
struct TYPE_10__ {int num_vfs; TYPE_3__ ops; } ;
struct fm10k_hw {TYPE_5__ mac; TYPE_4__ iov; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int) ;
 int VAR_7 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_8 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (int ,int) ;
 int VAR_13 ;
 int FUNC_20 (struct fm10k_hw*) ;
 int FUNC_21 (struct fm10k_hw*) ;
 int FUNC_22 (struct fm10k_hw*,int) ;
 int FUNC_23 (struct fm10k_hw*,int) ;
 int FUNC_24 (struct fm10k_hw*,int ,int) ;
 scalar_t__ FUNC_25 (scalar_t__*) ;
 int FUNC_26 (struct fm10k_hw*,TYPE_6__*) ;
 int FUNC_27 (struct fm10k_hw*) ;
 int FUNC_28 (struct fm10k_hw*,int) ;

__attribute__((used)) static s32 FUNC_29(struct fm10k_hw *VAR_14,
     struct fm10k_vf_info *VAR_15)
{
 u16 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = 0, VAR_21 = 0, VAR_22, VAR_23;
 u16 VAR_24, VAR_25, VAR_26;
 u8 VAR_27 = VAR_15->vf_idx;
 int VAR_28;


 if (VAR_27 >= VAR_14->iov.num_vfs)
  return VAR_0;


 FUNC_24(VAR_14, FUNC_4(VAR_27 / 32), FUNC_0(VAR_27 % 32));


 VAR_15->mbx.timeout = 0;
 if (VAR_15->mbx.ops.disconnect)
  VAR_15->mbx.ops.disconnect(VAR_14, &VAR_15->mbx);


 VAR_24 = FUNC_23(VAR_14, VAR_27);
 VAR_25 = VAR_24 + FUNC_21(VAR_14);


 VAR_16 = (VAR_14->iov.num_vfs > 8) ? 32 : 256;
 VAR_17 = FUNC_20(VAR_14);
 VAR_19 = VAR_16 * VAR_27;


 for (VAR_28 = VAR_19; VAR_28 < (VAR_19 + VAR_16); VAR_28++) {
  FUNC_24(VAR_14, FUNC_16(VAR_28), 0);
  FUNC_24(VAR_14, FUNC_6(VAR_28), 0);
 }


 VAR_18 = FUNC_22(VAR_14, VAR_27);


 if (VAR_15->pf_vid)
  VAR_26 = VAR_15->pf_vid;
 else
  VAR_26 = VAR_15->sw_vid;


 VAR_22 = ((u32)VAR_26 << VAR_11) |
   (VAR_27 << VAR_9) |
   VAR_10 | VAR_27;
 VAR_23 = (VAR_27 << VAR_6) | VAR_5;


 for (VAR_28 = VAR_18; VAR_28 < (VAR_17 + VAR_18); VAR_28++) {
  FUNC_24(VAR_14, FUNC_17(VAR_28), 0);
  FUNC_24(VAR_14, FUNC_18(VAR_28), VAR_22);
  FUNC_24(VAR_14, FUNC_8(VAR_28),
    VAR_4 |
    VAR_3);
  FUNC_24(VAR_14, FUNC_9(VAR_28), VAR_23);
 }


 FUNC_24(VAR_14, FUNC_11(VAR_27), 0);
 FUNC_24(VAR_14, FUNC_12(VAR_27), 0);
 FUNC_24(VAR_14, FUNC_10(VAR_27),
   VAR_7);


 if (!VAR_27)
  VAR_14->mac.ops.update_int_moderator(VAR_14);
 else
  VAR_14->iov.ops.assign_int_moderator(VAR_14, VAR_27 - 1);


 if (VAR_27 == (VAR_14->iov.num_vfs - 1))
  FUNC_24(VAR_14, FUNC_1(0), VAR_24);
 else
  FUNC_24(VAR_14, FUNC_1(VAR_25), VAR_24);


 for (VAR_24++; VAR_24 < VAR_25; VAR_24++)
  FUNC_24(VAR_14, FUNC_1(VAR_24), VAR_24 - 1);


 for (VAR_28 = VAR_12; VAR_28--;)
  FUNC_24(VAR_14, FUNC_2(VAR_27, VAR_28), 0);
 for (VAR_28 = VAR_13; VAR_28--;)
  FUNC_24(VAR_14, FUNC_19(VAR_15->vsi, VAR_28), 0);
 for (VAR_28 = VAR_1; VAR_28--;)
  FUNC_24(VAR_14, FUNC_5(VAR_15->vsi, VAR_28), 0);
 for (VAR_28 = VAR_2; VAR_28--;)
  FUNC_24(VAR_14, FUNC_7(VAR_15->vsi, VAR_28), 0);
 FUNC_24(VAR_14, FUNC_3(VAR_15->vsi), 0);


 if (FUNC_25(VAR_15->mac)) {
  VAR_20 = (((u32)VAR_15->mac[3]) << 24) |
   (((u32)VAR_15->mac[4]) << 16) |
   (((u32)VAR_15->mac[5]) << 8);
  VAR_21 = (((u32)0xFF) << 24) |
   (((u32)VAR_15->mac[0]) << 16) |
   (((u32)VAR_15->mac[1]) << 8) |
   ((u32)VAR_15->mac[2]);
 }


 for (VAR_28 = VAR_17; VAR_28--;) {
  FUNC_24(VAR_14, FUNC_14(VAR_18 + VAR_28), VAR_20);
  FUNC_24(VAR_14, FUNC_13(VAR_18 + VAR_28), VAR_21);



  FUNC_24(VAR_14, FUNC_15(VAR_18 + VAR_28),
    VAR_14->mac.itr_scale <<
    VAR_8);
  FUNC_24(VAR_14, FUNC_16(VAR_19 + VAR_28), VAR_18 + VAR_28);
  FUNC_24(VAR_14, FUNC_6(VAR_19 + VAR_28), VAR_18 + VAR_28);
 }


 for (VAR_28 = VAR_17; VAR_28 < VAR_16; VAR_28++) {
  FUNC_24(VAR_14, FUNC_16(VAR_19 + VAR_28), VAR_18);
  FUNC_24(VAR_14, FUNC_6(VAR_19 + VAR_28), VAR_18);
 }

 return 0;
}
