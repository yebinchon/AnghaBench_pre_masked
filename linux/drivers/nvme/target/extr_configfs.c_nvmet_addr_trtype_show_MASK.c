
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ trtype; } ;
struct nvmet_port {TYPE_1__ disc_addr; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ type; char* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
  char *VAR_2)
{
 struct nvmet_port *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_3->disc_addr.trtype != VAR_0[VAR_4].type)
   continue;
  return FUNC_1(VAR_2, "%s\n", VAR_0[VAR_4].name);
 }

 return FUNC_1(VAR_2, "\n");
}
