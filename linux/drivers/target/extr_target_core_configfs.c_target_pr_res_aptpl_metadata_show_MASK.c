
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int emulate_pr; } ;
struct se_device {TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int transport_flags; } ;


 int VAR_0 ;
 struct se_device* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->dev_attrib.emulate_pr ||
     (VAR_3->transport->transport_flags & VAR_0))
  return 0;

 return FUNC_1(VAR_2, "Ready to process PR APTPL metadata..\n");
}
