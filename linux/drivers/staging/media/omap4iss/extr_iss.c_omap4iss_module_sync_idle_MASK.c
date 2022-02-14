
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct media_entity {int dummy; } ;
struct iss_video {int dmaqueue_flags; int qlock; } ;
struct iss_pipeline {scalar_t__ stream_state; struct iss_video* output; } ;
typedef int atomic_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct iss_pipeline*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct iss_pipeline* FUNC_8 (struct media_entity*) ;
 int FUNC_9 (int ,int,int ) ;

int FUNC_10(struct media_entity *VAR_4, wait_queue_head_t *VAR_5,
         atomic_t *VAR_6)
{
 struct iss_pipeline *VAR_7 = FUNC_8(VAR_4);
 struct iss_video *VAR_8 = VAR_7->output;
 unsigned long VAR_9;

 if (VAR_7->stream_state == VAR_2 ||
     (VAR_7->stream_state == VAR_1 &&
      !FUNC_3(VAR_7)))
  return 0;





 FUNC_1(VAR_6, 1);
 FUNC_5();
 if (!FUNC_2(VAR_4))
  return 0;

 FUNC_6(&VAR_8->qlock, VAR_9);
 if (VAR_8->dmaqueue_flags & VAR_3) {
  FUNC_7(&VAR_8->qlock, VAR_9);
  FUNC_1(VAR_6, 0);
  FUNC_5();
  return 0;
 }
 FUNC_7(&VAR_8->qlock, VAR_9);
 if (!FUNC_9(*VAR_5, !FUNC_0(VAR_6),
    FUNC_4(1000))) {
  FUNC_1(VAR_6, 0);
  FUNC_5();
  return -VAR_0;
 }

 return 0;
}
