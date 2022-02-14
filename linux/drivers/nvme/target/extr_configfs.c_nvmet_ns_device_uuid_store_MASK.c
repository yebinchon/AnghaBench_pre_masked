
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int lock; } ;
struct nvmet_ns {int uuid; scalar_t__ enabled; struct nvmet_subsys* subsys; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nvmet_ns* FUNC_2 (struct config_item*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct nvmet_ns *VAR_5 = FUNC_2(VAR_2);
 struct nvmet_subsys *VAR_6 = VAR_5->subsys;
 int VAR_7 = 0;


 FUNC_0(&VAR_6->lock);
 if (VAR_5->enabled) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 }


 if (FUNC_3(VAR_3, &VAR_5->uuid))
  VAR_7 = -VAR_1;

out_unlock:
 FUNC_1(&VAR_6->lock);
 return VAR_7 ? VAR_7 : VAR_4;
}
