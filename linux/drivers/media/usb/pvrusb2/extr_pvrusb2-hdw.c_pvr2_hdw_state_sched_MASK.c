
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int state_stale; int workpoll; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct pvr2_hdw *VAR_0)
{
 if (VAR_0->state_stale) return;
 VAR_0->state_stale = !0;
 FUNC_1("state_stale",VAR_0->state_stale);
 FUNC_0(&VAR_0->workpoll);
}
