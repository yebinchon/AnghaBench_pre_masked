
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int lock; } ;
struct nvmet_ns {int device_path; scalar_t__ enabled; struct nvmet_subsys* subsys; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (char const*,char*) ;
 struct nvmet_ns* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct nvmet_ns *VAR_7 = FUNC_5(VAR_4);
 struct nvmet_subsys *VAR_8 = VAR_7->subsys;
 size_t VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8->lock);
 VAR_10 = -VAR_0;
 if (VAR_7->enabled)
  goto out_unlock;

 VAR_10 = -VAR_1;
 VAR_9 = FUNC_4(VAR_5, "\n");
 if (!VAR_9)
  goto out_unlock;

 FUNC_0(VAR_7->device_path);
 VAR_10 = -VAR_2;
 VAR_7->device_path = FUNC_1(VAR_5, VAR_9, VAR_3);
 if (!VAR_7->device_path)
  goto out_unlock;

 FUNC_3(&VAR_8->lock);
 return VAR_6;

out_unlock:
 FUNC_3(&VAR_8->lock);
 return VAR_10;
}
