
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int allow_any_host; int hosts; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct nvmet_subsys*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,int*) ;
 struct nvmet_subsys* FUNC_5 (struct config_item*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nvmet_subsys *VAR_5 = FUNC_5(VAR_2);
 bool VAR_6;
 int VAR_7 = 0;

 if (FUNC_4(VAR_3, &VAR_6))
  return -VAR_0;

 FUNC_0(&VAR_1);
 if (VAR_6 && !FUNC_1(&VAR_5->hosts)) {
  FUNC_3("Can't set allow_any_host when explicit hosts are set!\n");
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_5->allow_any_host != VAR_6) {
  VAR_5->allow_any_host = VAR_6;
  FUNC_2(VAR_5, ((void*)0));
 }

out_unlock:
 FUNC_6(&VAR_1);
 return VAR_7 ? VAR_7 : VAR_4;
}
