
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {scalar_t__ type; int flags; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fscache_cookie*) ;
 int FUNC_1 (char*,struct fscache_cookie*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct fscache_cookie*,int ) ;
 int FUNC_4 (struct fscache_cookie*,void const*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct fscache_cookie*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;

void FUNC_10(struct fscache_cookie *VAR_4,
        const void *VAR_5,
        loff_t VAR_6,
        bool (*VAR_7)(void *VAR_8),
        void *VAR_9)
{
 FUNC_1("%p", VAR_4);

 FUNC_7(VAR_4);

 FUNC_8(&VAR_4->flags, VAR_1,
    VAR_3);

 FUNC_4(VAR_4, VAR_5);

 if (FUNC_6(VAR_0, &VAR_4->flags))
  goto out_unlock;

 if (VAR_7 && !VAR_7(VAR_9)) {

 } else if (VAR_4->type != VAR_2) {

  FUNC_0(VAR_4);

  if (FUNC_3(VAR_4, VAR_6) == 0)
   FUNC_5(VAR_0, &VAR_4->flags);
 } else {
  FUNC_5(VAR_0, &VAR_4->flags);
 }

out_unlock:
 FUNC_2(VAR_1, &VAR_4->flags);
 FUNC_9(&VAR_4->flags, VAR_1);
}
