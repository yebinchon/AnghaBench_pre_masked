
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (char*,char**) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_7;


 char *VAR_8 = ((void*)0);

 if (FUNC_3("uvesafb", &VAR_8))
  return -VAR_0;
 FUNC_10(VAR_8);

 VAR_7 = FUNC_0(&VAR_4, "uvesafb", VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_7(&VAR_6);

 if (!VAR_7) {
  VAR_5 = FUNC_5("uvesafb", 0);
  if (VAR_5)
   VAR_7 = FUNC_4(VAR_5);
  else
   VAR_7 = -VAR_1;

  if (VAR_7) {
   FUNC_6(VAR_5);
   FUNC_8(&VAR_6);
   FUNC_1(&VAR_4);
   return VAR_7;
  }

  VAR_7 = FUNC_2(&VAR_6.driver,
    &VAR_2);
  if (VAR_7) {
   FUNC_9("failed to register attributes\n");
   VAR_7 = 0;
  }
 }
 return VAR_7;
}
