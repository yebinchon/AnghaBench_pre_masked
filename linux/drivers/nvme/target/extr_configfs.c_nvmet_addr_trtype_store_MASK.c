
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ trtype; int tsas; } ;
struct nvmet_port {TYPE_1__ disc_addr; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {scalar_t__ type; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct nvmet_port*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 struct nvmet_port* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct nvmet_port *VAR_8 = FUNC_5(VAR_5);
 int VAR_9;

 if (VAR_8->enabled) {
  FUNC_3("Cannot modify address while enabled\n");
  FUNC_3("Disable the address before modifying\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if (FUNC_4(VAR_6, VAR_4[VAR_9].name))
   goto found;
 }

 FUNC_3("Invalid value '%s' for trtype\n", VAR_6);
 return -VAR_1;
found:
 FUNC_1(&VAR_8->disc_addr.tsas, 0, VAR_3);
 VAR_8->disc_addr.trtype = VAR_4[VAR_9].type;
 if (VAR_8->disc_addr.trtype == VAR_2)
  FUNC_2(VAR_8);
 return VAR_7;
}
