
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pr_aptpl_active; } ;
struct TYPE_4__ {int emulate_pr; } ;
struct se_device {TYPE_3__ t10_pr; TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int transport_flags; } ;


 int VAR_0 ;
 struct se_device* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->dev_attrib.emulate_pr ||
     (VAR_3->transport->transport_flags & VAR_0))
  return 0;

 return FUNC_1(VAR_2, "APTPL Bit Status: %s\n",
  (VAR_3->t10_pr.pr_aptpl_active) ? "Activated" : "Disabled");
}
