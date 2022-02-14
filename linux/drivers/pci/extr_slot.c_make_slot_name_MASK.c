
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kobject*) ;
 struct kobject* FUNC_3 (int ,char*) ;
 char* FUNC_4 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,char const*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_4(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);






 VAR_4 = FUNC_6(VAR_2) + 2;
 VAR_5 = 1;
 VAR_6 = 1;

 for (;;) {
  struct kobject *VAR_7;
  VAR_7 = FUNC_3(VAR_1, VAR_3);
  if (!VAR_7)
   break;
  FUNC_2(VAR_7);
  if (VAR_6 == VAR_5) {
   VAR_4++;
   VAR_5 *= 10;
   FUNC_0(VAR_3);
   VAR_3 = FUNC_1(VAR_4, VAR_0);
   if (!VAR_3)
    break;
  }
  FUNC_5(VAR_3, "%s-%d", VAR_2, VAR_6++);
 }

 return VAR_3;
}
