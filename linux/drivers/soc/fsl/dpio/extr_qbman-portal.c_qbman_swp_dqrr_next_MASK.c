
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int next_idx; int dqrr_size; int valid_bit; scalar_t__ reset_bug; } ;
struct TYPE_7__ {int available; } ;
struct qbman_swp {TYPE_4__ dqrr; TYPE_3__ vdq; TYPE_1__* desc; } ;
struct TYPE_6__ {int verb; int stat; } ;
typedef struct dpaa2_dq {TYPE_2__ dq; } const dpaa2_dq ;
struct TYPE_5__ {int qman_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct dpaa2_dq const*) ;
 struct dpaa2_dq const* FUNC_5 (struct qbman_swp*,int ) ;
 int FUNC_6 (struct qbman_swp*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

const struct dpaa2_dq *FUNC_8(struct qbman_swp *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 struct dpaa2_dq *VAR_13;




 if (FUNC_7(VAR_9->dqrr.reset_bug)) {
  u8 VAR_14 = FUNC_6(VAR_9, VAR_2) &
   VAR_6;


  if (VAR_14 == VAR_9->dqrr.next_idx)
   return ((void*)0);
  if (VAR_9->dqrr.next_idx == (VAR_9->dqrr.dqrr_size - 1)) {
   FUNC_3("next_idx=%d, pi=%d, clear reset bug\n",
     VAR_9->dqrr.next_idx, VAR_14);
   VAR_9->dqrr.reset_bug = 0;
  }
  FUNC_4(FUNC_5(VAR_9,
           FUNC_0(VAR_9->dqrr.next_idx)));
 }

 if ((VAR_9->desc->qman_version & VAR_8) < VAR_7)
  VAR_13 = FUNC_5(VAR_9, FUNC_0(VAR_9->dqrr.next_idx));
 else
  VAR_13 = FUNC_5(VAR_9, FUNC_1(VAR_9->dqrr.next_idx));
 VAR_10 = VAR_13->dq.verb;
 if ((VAR_10 & VAR_5) != VAR_9->dqrr.valid_bit) {
  FUNC_4(FUNC_5(VAR_9,
           FUNC_0(VAR_9->dqrr.next_idx)));
  return ((void*)0);
 }




 VAR_9->dqrr.next_idx++;
 VAR_9->dqrr.next_idx &= VAR_9->dqrr.dqrr_size - 1;
 if (!VAR_9->dqrr.next_idx)
  VAR_9->dqrr.valid_bit ^= VAR_5;





 VAR_12 = VAR_13->dq.stat;
 VAR_11 = VAR_10 & VAR_4;
 if ((VAR_11 == VAR_3) &&
     (VAR_12 & VAR_1) &&
     (VAR_12 & VAR_0))
  FUNC_2(&VAR_9->vdq.available);

 FUNC_4(FUNC_5(VAR_9, FUNC_0(VAR_9->dqrr.next_idx)));

 return VAR_13;
}
