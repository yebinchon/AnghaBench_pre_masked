
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ns {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nvmet_ns*) ;
 int FUNC_1 (struct nvmet_ns*) ;
 scalar_t__ FUNC_2 (char const*,int*) ;
 struct nvmet_ns* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct nvmet_ns *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_2, &VAR_5))
  return -VAR_0;

 if (VAR_5)
  VAR_6 = FUNC_1(VAR_4);
 else
  FUNC_0(VAR_4);

 return VAR_6 ? VAR_6 : VAR_3;
}
