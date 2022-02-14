
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ kobj; } ;
struct iscsi_bus_flash_session {TYPE_2__ dev; } ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3(struct iscsi_bus_flash_session *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->dev, ((void*)0),
        VAR_0);
 if (VAR_2)
  FUNC_2("Could not delete all connections for %s. Error %d.\n",
         VAR_1->dev.kobj.name, VAR_2);

 FUNC_1(&VAR_1->dev);
}
