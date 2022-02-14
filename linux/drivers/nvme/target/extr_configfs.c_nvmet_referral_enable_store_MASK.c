
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_port {int dummy; } ;
struct config_item {TYPE_1__* ci_parent; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct config_item* ci_parent; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nvmet_port*,struct nvmet_port*) ;
 int FUNC_1 (struct nvmet_port*,struct nvmet_port*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int*) ;
 struct nvmet_port* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct nvmet_port *VAR_4 = FUNC_4(VAR_1->ci_parent->ci_parent);
 struct nvmet_port *VAR_5 = FUNC_4(VAR_1);
 bool VAR_6;

 if (FUNC_3(VAR_2, &VAR_6))
  goto inval;

 if (VAR_6)
  FUNC_1(VAR_4, VAR_5);
 else
  FUNC_0(VAR_4, VAR_5);

 return VAR_3;
inval:
 FUNC_2("Invalid value '%s' for enable\n", VAR_2);
 return -VAR_0;
}
