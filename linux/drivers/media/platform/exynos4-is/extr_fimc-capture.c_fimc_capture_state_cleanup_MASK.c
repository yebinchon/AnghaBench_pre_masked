
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_vid_cap {int ve; scalar_t__ buf_index; int active_buf_q; int pending_buf_q; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct fimc_vid_buffer {TYPE_1__ vb; } ;
struct fimc_dev {int state; int slock; struct fimc_vid_cap vid_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fimc_vid_buffer* FUNC_0 (struct fimc_vid_cap*) ;
 int FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (struct fimc_vid_cap*,struct fimc_vid_buffer*) ;
 struct fimc_vid_buffer* FUNC_3 (struct fimc_vid_cap*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct fimc_dev *VAR_8, bool VAR_9)
{
 struct fimc_vid_cap *VAR_10 = &VAR_8->vid_cap;
 struct fimc_vid_buffer *VAR_11;
 unsigned long VAR_12;
 bool VAR_13;

 FUNC_6(&VAR_8->slock, VAR_12);
 VAR_13 = VAR_8->state & (1 << VAR_0);

 VAR_8->state &= ~(1 << VAR_2 | 1 << VAR_3 |
    1 << VAR_4 | 1 << VAR_0);
 if (VAR_9)
  VAR_8->state |= (1 << VAR_5);
 else
  VAR_8->state &= ~(1 << VAR_1 | 1 << VAR_5);


 while (!VAR_9 && !FUNC_5(&VAR_10->pending_buf_q)) {
  VAR_11 = FUNC_3(VAR_10);
  FUNC_8(&VAR_11->vb.vb2_buf, VAR_6);
 }

 while (!FUNC_5(&VAR_10->active_buf_q)) {
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_9)
   FUNC_2(VAR_10, VAR_11);
  else
   FUNC_8(&VAR_11->vb.vb2_buf, VAR_6);
 }

 FUNC_1(VAR_8);
 VAR_10->buf_index = 0;

 FUNC_7(&VAR_8->slock, VAR_12);

 if (VAR_13)
  return FUNC_4(&VAR_10->ve, VAR_7, 0);
 else
  return 0;
}
