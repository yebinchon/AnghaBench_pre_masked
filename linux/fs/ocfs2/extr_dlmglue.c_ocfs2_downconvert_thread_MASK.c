
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int * dc_task; int dc_event; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct ocfs2_super *VAR_1 = VAR_0;



 while (!(FUNC_0() &&
  FUNC_3(VAR_1))) {

  FUNC_5(VAR_1->dc_event,
      FUNC_4(VAR_1) ||
      FUNC_0());

  FUNC_1(0, "downconvert_thread: awoken\n");

  FUNC_2(VAR_1);
 }

 VAR_1->dc_task = ((void*)0);
 return 0;
}
