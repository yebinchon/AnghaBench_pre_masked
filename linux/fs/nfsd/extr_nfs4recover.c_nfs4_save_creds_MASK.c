
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int fsgid; int fsuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cred* FUNC_0 (struct cred*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred*) ;

__attribute__((used)) static int
FUNC_3(const struct cred **VAR_3)
{
 struct cred *VAR_4;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_0;

 VAR_4->fsuid = VAR_2;
 VAR_4->fsgid = VAR_1;
 *VAR_3 = FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 return 0;
}
