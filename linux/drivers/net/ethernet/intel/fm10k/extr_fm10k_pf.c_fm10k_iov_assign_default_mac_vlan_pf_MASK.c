
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ (* enqueue_tx ) (struct fm10k_hw*,TYPE_4__*,scalar_t__*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct fm10k_vf_info {scalar_t__ vf_idx; int pf_vid; scalar_t__ sw_vid; scalar_t__* mac; TYPE_4__ mbx; } ;
struct TYPE_7__ {scalar_t__ itr_scale; } ;
struct TYPE_5__ {scalar_t__ num_vfs; } ;
struct fm10k_hw {TYPE_3__ mac; TYPE_1__ iov; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (struct fm10k_hw*) ;
 scalar_t__ FUNC_7 (struct fm10k_hw*,int ) ;
 int FUNC_8 (scalar_t__*,int ,scalar_t__*,scalar_t__) ;
 int FUNC_9 (scalar_t__*,int ) ;
 scalar_t__ FUNC_10 (struct fm10k_hw*,scalar_t__) ;
 int FUNC_11 (struct fm10k_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__*) ;
 scalar_t__ FUNC_13 (struct fm10k_hw*,TYPE_4__*,scalar_t__*) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static s32 FUNC_15(struct fm10k_hw *VAR_12,
      struct fm10k_vf_info *VAR_13)
{
 u16 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20[4], VAR_21, VAR_22, VAR_23 = 0, VAR_24 = 0;
 s32 VAR_25 = 0;
 u16 VAR_26, VAR_27;


 if (!VAR_13 || VAR_13->vf_idx >= VAR_12->iov.num_vfs)
  return VAR_1;


 VAR_14 = (VAR_12->iov.num_vfs > 8) ? 32 : 256;
 VAR_15 = FUNC_6(VAR_12);


 VAR_26 = VAR_13->vf_idx;
 VAR_16 = FUNC_10(VAR_12, VAR_26);
 VAR_18 = VAR_14 * VAR_26;






 if (VAR_13->pf_vid)
  VAR_27 = VAR_13->pf_vid | VAR_11;
 else
  VAR_27 = VAR_13->sw_vid;


 FUNC_9(VAR_20, VAR_10);
 FUNC_8(VAR_20, VAR_2,
        VAR_13->mac, VAR_27);





 VAR_22 = ((u32)VAR_27 << VAR_9) &
   VAR_8;
 VAR_22 |= (VAR_26 << VAR_6) |
    VAR_7 | VAR_26;

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
  FUNC_11(VAR_12, FUNC_5(VAR_16 + VAR_19), VAR_22);


 if (VAR_13->mbx.ops.enqueue_tx) {
  VAR_25 = VAR_13->mbx.ops.enqueue_tx(VAR_12, &VAR_13->mbx, VAR_20);
  if (VAR_25 != VAR_3)
   return VAR_25;
  VAR_25 = 0;
 }
 FUNC_11(VAR_12, FUNC_3(VAR_18), 0);
 FUNC_11(VAR_12, FUNC_4(VAR_16), 0);


 VAR_21 = FUNC_7(VAR_12, FUNC_4(VAR_16));
 for (VAR_17 = 0; VAR_21 & VAR_5; VAR_17++) {

  if (VAR_17 == 10) {
   VAR_25 = VAR_0;
   goto err_out;
  }

  FUNC_14(100, 200);
  VAR_21 = FUNC_7(VAR_12, FUNC_4(VAR_16));
 }


 if (FUNC_12(VAR_13->mac)) {
  VAR_23 = (((u32)VAR_13->mac[3]) << 24) |
   (((u32)VAR_13->mac[4]) << 16) |
   (((u32)VAR_13->mac[5]) << 8);

  VAR_24 = (((u32)0xFF) << 24) |
   (((u32)VAR_13->mac[0]) << 16) |
   (((u32)VAR_13->mac[1]) << 8) |
   ((u32)VAR_13->mac[2]);
 }


 FUNC_11(VAR_12, FUNC_1(VAR_16), VAR_23);
 FUNC_11(VAR_12, FUNC_0(VAR_16), VAR_24);





 FUNC_11(VAR_12, FUNC_2(VAR_16), VAR_12->mac.itr_scale <<
         VAR_4);

err_out:

 FUNC_11(VAR_12, FUNC_3(VAR_18), VAR_16);
 return VAR_25;
}
