
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {struct fscache_cookie* parent; int usage; } ;
typedef enum fscache_cookie_trace { ____Placeholder_fscache_cookie_trace } fscache_cookie_trace ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct fscache_cookie*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct fscache_cookie*) ;
 int FUNC_5 (struct fscache_cookie*) ;
 int FUNC_6 (struct fscache_cookie*,int,int) ;

void FUNC_7(struct fscache_cookie *VAR_1,
   enum fscache_cookie_trace VAR_2)
{
 struct fscache_cookie *VAR_3;
 int VAR_4;

 FUNC_1("%p", VAR_1);

 do {
  VAR_4 = FUNC_3(&VAR_1->usage);
  FUNC_6(VAR_1, VAR_2, VAR_4);

  if (VAR_4 > 0)
   return;
  FUNC_0(VAR_4 < 0);

  VAR_3 = VAR_1->parent;
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);

  VAR_1 = VAR_3;
  VAR_2 = VAR_0;
 } while (VAR_1);

 FUNC_2("");
}
