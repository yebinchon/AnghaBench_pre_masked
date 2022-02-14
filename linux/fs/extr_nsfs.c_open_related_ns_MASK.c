
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
typedef void ns_common ;
typedef void file ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct path*,void*) ;
 int FUNC_4 () ;
 void* FUNC_5 (struct path*,int ,int ) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (int) ;

int FUNC_10(struct ns_common *VAR_3,
     struct ns_common *(*VAR_4)(struct ns_common *VAR_5))
{
 struct path VAR_6 = {};
 struct file *VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 do {
  struct ns_common *VAR_10;

  VAR_10 = VAR_4(VAR_3);
  if (FUNC_1(VAR_10)) {
   FUNC_9(VAR_9);
   return FUNC_2(VAR_10);
  }

  VAR_8 = FUNC_3(&VAR_6, VAR_10);
 } while (VAR_8 == FUNC_0(-VAR_0));

 if (FUNC_1(VAR_8)) {
  FUNC_9(VAR_9);
  return FUNC_2(VAR_8);
 }

 VAR_7 = FUNC_5(&VAR_6, VAR_2, FUNC_4());
 FUNC_8(&VAR_6);
 if (FUNC_1(VAR_7)) {
  FUNC_9(VAR_9);
  VAR_9 = FUNC_2(VAR_7);
 } else
  FUNC_6(VAR_9, VAR_7);

 return VAR_9;
}
