
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsi_thread {int task; int thread_done; int completion; } ;
struct rsi_common {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,struct rsi_common*,char*,int *) ;

__attribute__((used)) static inline int FUNC_5(struct rsi_common *VAR_0,
         struct rsi_thread *VAR_1,
         void *VAR_2,
         u8 *VAR_3)
{
 FUNC_3(&VAR_1->completion);
 FUNC_2(&VAR_1->thread_done, 0);
 VAR_1->task = FUNC_4(VAR_2, VAR_0, "%s", VAR_3);
 if (FUNC_0(VAR_1->task))
  return (int)FUNC_1(VAR_1->task);

 return 0;
}
