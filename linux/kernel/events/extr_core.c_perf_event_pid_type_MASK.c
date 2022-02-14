
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct perf_event {int ns; struct perf_event* parent; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (struct task_struct*,int,int ) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static u32 FUNC_2(struct perf_event *VAR_0, struct task_struct *VAR_1,
    enum pid_type VAR_2)
{
 u32 VAR_3;



 if (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0->ns);

 if (!VAR_3 && !FUNC_1(VAR_1))
  VAR_3 = -1;
 return VAR_3;
}
