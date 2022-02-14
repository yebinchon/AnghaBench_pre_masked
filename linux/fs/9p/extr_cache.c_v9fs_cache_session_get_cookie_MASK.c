
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int * fscache; int * cachetag; } ;
struct TYPE_2__ {int primary_index; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *,int ,int *,int ,struct v9fs_session_info*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct v9fs_session_info*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct v9fs_session_info*) ;

void FUNC_5(struct v9fs_session_info *VAR_3)
{

 if (!VAR_3->cachetag) {
  if (FUNC_4(VAR_3) < 0) {
   VAR_3->fscache = ((void*)0);
   FUNC_1(VAR_3->cachetag);
   VAR_3->cachetag = ((void*)0);
   return;
  }
 }

 VAR_3->fscache = FUNC_0(VAR_1.primary_index,
      &VAR_2,
      VAR_3->cachetag,
      FUNC_3(VAR_3->cachetag),
      ((void*)0), 0,
      VAR_3, 0, 1);
 FUNC_2(VAR_0, "session %p get cookie %p\n",
   VAR_3, VAR_3->fscache);
}
