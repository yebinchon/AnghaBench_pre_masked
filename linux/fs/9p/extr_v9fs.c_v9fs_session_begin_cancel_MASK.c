
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int clnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,struct v9fs_session_info*) ;

void FUNC_2(struct v9fs_session_info *VAR_1)
{
 FUNC_1(VAR_0, "begin cancel session %p\n", VAR_1);
 FUNC_0(VAR_1->clnt);
}
