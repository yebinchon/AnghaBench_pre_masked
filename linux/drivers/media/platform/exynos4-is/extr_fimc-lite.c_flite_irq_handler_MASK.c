
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_5__ {TYPE_3__ vb2_buf; scalar_t__ sequence; } ;
struct flite_buffer {TYPE_2__ vb; int index; } ;
struct TYPE_4__ {int data_overflow; } ;
struct fimc_lite {int slock; int state; int pending_buf_q; int frame_count; int active_buf_q; int out_path; int irq_queue; TYPE_1__ events; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fimc_lite*,struct flite_buffer*) ;
 struct flite_buffer* FUNC_3 (struct fimc_lite*) ;
 int FUNC_4 (struct fimc_lite*) ;
 struct flite_buffer* FUNC_5 (struct fimc_lite*) ;
 int FUNC_6 (struct fimc_lite*) ;
 int FUNC_7 (struct fimc_lite*) ;
 int FUNC_8 (struct fimc_lite*) ;
 int FUNC_9 (struct fimc_lite*) ;
 int FUNC_10 (struct fimc_lite*,int ) ;
 int FUNC_11 (struct fimc_lite*,struct flite_buffer*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_21(int VAR_11, void *VAR_12)
{
 struct fimc_lite *VAR_13 = VAR_12;
 struct flite_buffer *VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;

 FUNC_15(&VAR_13->slock, VAR_15);

 VAR_16 = FUNC_9(VAR_13);
 FUNC_8(VAR_13);

 if (FUNC_17(VAR_7, &VAR_13->state)) {
  FUNC_20(&VAR_13->irq_queue);
  goto done;
 }

 if (VAR_16 & VAR_4) {
  FUNC_1(VAR_8, &VAR_13->state);
  VAR_13->events.data_overflow++;
 }

 if (VAR_16 & VAR_3) {
  FUNC_7(VAR_13);
  FUNC_1(VAR_9, &VAR_13->state);
  FUNC_20(&VAR_13->irq_queue);
 }

 if (FUNC_0(&VAR_13->out_path) != VAR_0)
  goto done;

 if ((VAR_16 & VAR_2) &&
     FUNC_18(VAR_8, &VAR_13->state) &&
     !FUNC_13(&VAR_13->pending_buf_q)) {
  VAR_14 = FUNC_5(VAR_13);
  FUNC_11(VAR_13, VAR_14);
  FUNC_2(VAR_13, VAR_14);
 }

 if ((VAR_16 & VAR_1) &&
     FUNC_18(VAR_8, &VAR_13->state) &&
     !FUNC_13(&VAR_13->active_buf_q)) {
  VAR_14 = FUNC_3(VAR_13);
  VAR_14->vb.vb2_buf.timestamp = FUNC_12();
  VAR_14->vb.sequence = VAR_13->frame_count++;
  FUNC_10(VAR_13, VAR_14->index);
  FUNC_19(&VAR_14->vb.vb2_buf, VAR_10);
 }

 if (FUNC_18(VAR_6, &VAR_13->state))
  FUNC_4(VAR_13);

 if (FUNC_13(&VAR_13->pending_buf_q)) {
  FUNC_6(VAR_13);
  FUNC_1(VAR_9, &VAR_13->state);
 }
done:
 FUNC_14(VAR_8, &VAR_13->state);
 FUNC_16(&VAR_13->slock, VAR_15);
 return VAR_5;
}
