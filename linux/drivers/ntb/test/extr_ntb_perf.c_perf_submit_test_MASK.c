
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread {int work; int duration; scalar_t__ copied; int status; } ;
struct perf_peer {int sts; struct perf_ctx* perf; } ;
struct perf_ctx {int tcnt; int busy_flag; int tsync; int twait; struct perf_thread* threads; struct perf_peer* test_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct perf_ctx*) ;
 int VAR_7 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct perf_peer *VAR_8)
{
 struct perf_ctx *VAR_9 = VAR_8->perf;
 struct perf_thread *VAR_10;
 int VAR_11, VAR_12;

 if (!FUNC_7(VAR_6, &VAR_8->sts))
  return -VAR_3;

 if (FUNC_6(0, &VAR_9->busy_flag))
  return -VAR_0;

 VAR_9->test_peer = VAR_8;
 FUNC_1(&VAR_9->tsync, VAR_9->tcnt);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_10 = &VAR_9->threads[VAR_11];

  VAR_10->status = -VAR_2;
  VAR_10->copied = 0;
  VAR_10->duration = FUNC_3(0, 0);
  if (VAR_11 < VAR_9->tcnt)
   (void)FUNC_5(VAR_7, &VAR_10->work);
 }

 VAR_12 = FUNC_8(VAR_9->twait,
           FUNC_0(&VAR_9->tsync) <= 0);
 if (VAR_12 == -VAR_4) {
  FUNC_4(VAR_9);
  VAR_12 = -VAR_1;
 }

 FUNC_2(0, &VAR_9->busy_flag);

 return VAR_12;
}
