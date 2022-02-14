
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct camif_vp {int state; int frame_sequence; int active_buf_q; int pending_buf_q; int irq_queue; struct camif_dev* camif; } ;
struct camif_dev {int slock; int colorfx_cb; int colorfx_cr; int colorfx; TYPE_2__* variant; int test_pattern; } ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; scalar_t__ sequence; } ;
struct camif_buffer {unsigned int index; int paddr; TYPE_1__ vb; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {unsigned int ip_revision; scalar_t__ has_img_effect; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct camif_vp*,struct camif_buffer*) ;
 struct camif_buffer* FUNC_3 (struct camif_vp*,unsigned int) ;
 int FUNC_4 (struct camif_vp*) ;
 int FUNC_5 (struct camif_vp*) ;
 int FUNC_6 (struct camif_vp*) ;
 int FUNC_7 (struct camif_vp*,int) ;
 unsigned int FUNC_8 (struct camif_vp*) ;
 int FUNC_9 (struct camif_dev*) ;
 int FUNC_10 (struct camif_dev*,int ,int ,int ) ;
 int FUNC_11 (struct camif_vp*) ;
 int FUNC_12 (struct camif_vp*,int) ;
 int FUNC_13 (struct camif_vp*,int *,unsigned int) ;
 int FUNC_14 (struct camif_vp*) ;
 int FUNC_15 (struct camif_dev*,int ) ;
 struct camif_buffer* FUNC_16 (struct camif_vp*) ;
 int FUNC_17 (struct camif_vp*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (int *) ;

irqreturn_t FUNC_24(int VAR_11, void *VAR_12)
{
 struct camif_vp *VAR_13 = VAR_12;
 struct camif_dev *VAR_14 = VAR_13->camif;
 unsigned int VAR_15 = VAR_14->variant->ip_revision;
 unsigned int VAR_16;

 FUNC_20(&VAR_14->slock);

 if (VAR_15 == VAR_3)
  FUNC_5(VAR_13);

 VAR_16 = FUNC_8(VAR_13);

 if (VAR_15 == VAR_2 && (VAR_16 & VAR_0)) {
  FUNC_4(VAR_13);
  goto unlock;
 }

 if (VAR_13->state & VAR_4) {
  if (VAR_13->state & VAR_7) {

   VAR_13->state &= ~(VAR_7 | VAR_4 |
           VAR_6);
   FUNC_23(&VAR_13->irq_queue);
   goto unlock;
  } else if (VAR_13->state & VAR_6) {
   FUNC_6(VAR_13);
   FUNC_7(VAR_13, 0);
   FUNC_12(VAR_13, 0);
   VAR_13->state |= VAR_7;
  } else {

   FUNC_12(VAR_13, 1);
   VAR_13->state |= VAR_6;
  }
 }

 if (!FUNC_19(&VAR_13->pending_buf_q) && (VAR_13->state & VAR_9) &&
     !FUNC_19(&VAR_13->active_buf_q)) {
  unsigned int VAR_17;
  struct camif_buffer *VAR_18;





  VAR_17 = (FUNC_0(VAR_16) + 2) & 1;
  VAR_18 = FUNC_3(VAR_13, VAR_17);

  if (!FUNC_1(VAR_18 == ((void*)0))) {

   VAR_18->vb.vb2_buf.timestamp = FUNC_18();
   VAR_18->vb.sequence = VAR_13->frame_sequence++;
   FUNC_22(&VAR_18->vb.vb2_buf, VAR_10);


   VAR_18 = FUNC_16(VAR_13);
   VAR_18->index = VAR_17;
   FUNC_13(VAR_13, &VAR_18->paddr, VAR_17);
   FUNC_13(VAR_13, &VAR_18->paddr, VAR_17 + 2);


   FUNC_2(VAR_13, VAR_18);
  }
 } else if (!(VAR_13->state & VAR_4) &&
     (VAR_13->state & VAR_8)) {
  VAR_13->state |= VAR_9;
 }

 if (VAR_13->state & VAR_5) {
  FUNC_17(VAR_13);
  FUNC_9(VAR_14);
  FUNC_14(VAR_13);
  FUNC_11(VAR_13);
  FUNC_15(VAR_14, VAR_14->test_pattern);
  if (VAR_14->variant->has_img_effect)
   FUNC_10(VAR_14, VAR_14->colorfx,
        VAR_14->colorfx_cr, VAR_14->colorfx_cb);
  VAR_13->state &= ~VAR_5;
 }
unlock:
 FUNC_21(&VAR_14->slock);
 return VAR_1;
}
