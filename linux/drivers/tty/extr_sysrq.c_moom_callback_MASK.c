
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct oom_control {int order; int const gfp_mask; int * memcg; int * nodemask; int zonelist; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int const) ;
 int VAR_2 ;
 int FUNC_3 (struct oom_control*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_3)
{
 const gfp_t VAR_4 = VAR_0;
 struct oom_control VAR_5 = {
  .zonelist = FUNC_2(VAR_1, VAR_4),
  .nodemask = ((void*)0),
  .memcg = ((void*)0),
  .gfp_mask = VAR_4,
  .order = -1,
 };

 FUNC_0(&VAR_2);
 if (!FUNC_3(&VAR_5))
  FUNC_4("OOM request ignored. No task eligible\n");
 FUNC_1(&VAR_2);
}
