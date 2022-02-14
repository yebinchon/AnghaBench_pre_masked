
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;

int FUNC_8(struct fscache_cookie *VAR_7)
{
 unsigned long VAR_8;

 FUNC_1("");

 if (!FUNC_6(VAR_1, &VAR_7->flags)) {
  FUNC_2(" = 0 [imm]");
  return 0;
 }

 FUNC_4(&VAR_4);

 VAR_8 = VAR_6;
 if (FUNC_7(&VAR_7->flags, VAR_1,
   VAR_2) != 0) {
  FUNC_4(&VAR_3);
  FUNC_2(" = -ERESTARTSYS");
  return -VAR_0;
 }

 FUNC_0(!FUNC_6(VAR_1, &VAR_7->flags));

 FUNC_5();
 FUNC_3(VAR_5, VAR_8);
 FUNC_2(" = 0 [dly]");
 return 0;
}
