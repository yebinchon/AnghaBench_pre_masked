
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsi_event {int event_condition; int event_queue; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct rsi_event *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  VAR_2 = FUNC_1(VAR_0->event_queue,
    (FUNC_0(&VAR_0->event_condition) == 0));
 else
  VAR_2 = FUNC_2(VAR_0->event_queue,
    (FUNC_0(&VAR_0->event_condition) == 0),
    VAR_1);
 return VAR_2;
}
