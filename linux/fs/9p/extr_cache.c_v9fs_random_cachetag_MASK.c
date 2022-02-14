
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int cachetag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static
int FUNC_2(struct v9fs_session_info *VAR_4)
{
 VAR_4->cachetag = FUNC_0(VAR_0, VAR_2);
 if (!VAR_4->cachetag)
  return -VAR_1;

 return FUNC_1(VAR_4->cachetag, VAR_0, "%lu", VAR_3);
}
