
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_ns {int buffered_io; TYPE_1__* subsys; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int lock; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int*) ;
 struct nvmet_ns* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct nvmet_ns *VAR_4 = FUNC_4(VAR_1);
 bool VAR_5;

 if (FUNC_3(VAR_2, &VAR_5))
  return -VAR_0;

 FUNC_0(&VAR_4->subsys->lock);
 if (VAR_4->enabled) {
  FUNC_2("disable ns before setting buffered_io value.\n");
  FUNC_1(&VAR_4->subsys->lock);
  return -VAR_0;
 }

 VAR_4->buffered_io = VAR_5;
 FUNC_1(&VAR_4->subsys->lock);
 return VAR_3;
}
