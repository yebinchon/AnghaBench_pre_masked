
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vb2_buf; } ;
struct flite_buffer {TYPE_1__ vb; } ;
struct fimc_lite {int state; int ve; int slock; int active_buf_q; int pending_buf_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct flite_buffer* FUNC_0 (struct fimc_lite*) ;
 int FUNC_1 (struct fimc_lite*,struct flite_buffer*) ;
 struct flite_buffer* FUNC_2 (struct fimc_lite*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct fimc_lite*) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct fimc_lite *VAR_8, bool VAR_9)
{
 struct flite_buffer *VAR_10;
 unsigned long VAR_11;
 bool VAR_12;

 FUNC_6(&VAR_8->slock, VAR_11);
 VAR_12 = VAR_8->state & (1 << VAR_5);

 VAR_8->state &= ~(1 << VAR_2 | 1 << VAR_0 |
    1 << VAR_3 | 1 << VAR_5);
 if (VAR_9)
  VAR_8->state |= (1 << VAR_4);
 else
  VAR_8->state &= ~(1 << VAR_1 |
     1 << VAR_4);


 while (!VAR_9 && !FUNC_5(&VAR_8->pending_buf_q)) {
  VAR_10 = FUNC_2(VAR_8);
  FUNC_8(&VAR_10->vb.vb2_buf, VAR_6);
 }

 while (!FUNC_5(&VAR_8->active_buf_q)) {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_9)
   FUNC_1(VAR_8, VAR_10);
  else
   FUNC_8(&VAR_10->vb.vb2_buf, VAR_6);
 }

 FUNC_7(&VAR_8->slock, VAR_11);

 FUNC_4(VAR_8);

 if (!VAR_12)
  return 0;

 return FUNC_3(&VAR_8->ve, VAR_7, 0);
}
