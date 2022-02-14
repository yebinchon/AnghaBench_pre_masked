
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int ver; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,char*,int,int,...) ;
 struct nvmet_subsys* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1,
           char *VAR_2)
{
 struct nvmet_subsys *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_2(VAR_3->ver))
  return FUNC_3(VAR_2, VAR_0, "%d.%d.%d\n",
    (int)FUNC_0(VAR_3->ver),
    (int)FUNC_1(VAR_3->ver),
    (int)FUNC_2(VAR_3->ver));
 else
  return FUNC_3(VAR_2, VAR_0, "%d.%d\n",
    (int)FUNC_0(VAR_3->ver),
    (int)FUNC_1(VAR_3->ver));
}
