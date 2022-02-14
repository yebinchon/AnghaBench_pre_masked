
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset {int dummy; } ;
struct kobject {struct kset* kset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobject*,int *,struct kobject*,char*,char const*) ;
 int FUNC_1 (struct kobject*) ;
 struct kobject* FUNC_2 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct kobject *FUNC_3(const char *VAR_2,
  struct kset *VAR_3, struct kobject *VAR_4)
{
 struct kobject *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  VAR_5->kset = VAR_3;
  if (FUNC_0(VAR_5, &VAR_1,
     VAR_4, "%s", VAR_2) == 0)
   return VAR_5;
  FUNC_1(VAR_5);
 }
 return ((void*)0);
}
