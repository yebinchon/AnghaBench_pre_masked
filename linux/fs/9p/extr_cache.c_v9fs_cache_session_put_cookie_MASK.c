
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int * fscache; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,char*,struct v9fs_session_info*,int *) ;

void FUNC_2(struct v9fs_session_info *VAR_1)
{
 FUNC_1(VAR_0, "session %p put cookie %p\n",
   VAR_1, VAR_1->fscache);
 FUNC_0(VAR_1->fscache, ((void*)0), 0);
 VAR_1->fscache = ((void*)0);
}
