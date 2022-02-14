
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int target ;
struct uwb_dev_addr {int dummy; } ;
struct TYPE_8__ {scalar_t__ type; struct uwb_dev_addr devaddr; TYPE_2__* dev; } ;
struct uwb_rsv {int state; TYPE_3__ target; TYPE_1__* owner; TYPE_5__* rc; } ;
struct device {int dummy; } ;
typedef int owner ;
struct TYPE_9__ {struct device dev; } ;
struct TYPE_10__ {TYPE_4__ uwb_dev; } ;
struct TYPE_7__ {struct uwb_dev_addr dev_addr; } ;
struct TYPE_6__ {struct uwb_dev_addr dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,char*,char*,char*,int ) ;
 int FUNC_1 (char*,int,struct uwb_dev_addr*) ;
 int FUNC_2 (int ) ;

void FUNC_3(char *VAR_2, struct uwb_rsv *VAR_3)
{
 struct device *VAR_4 = &VAR_3->rc->uwb_dev.dev;
 struct uwb_dev_addr VAR_5;
 char VAR_6[VAR_0], VAR_7[VAR_0];

 FUNC_1(VAR_6, sizeof(VAR_6), &VAR_3->owner->dev_addr);
 if (VAR_3->target.type == VAR_1)
  VAR_5 = VAR_3->target.dev->dev_addr;
 else
  VAR_5 = VAR_3->target.devaddr;
 FUNC_1(VAR_7, sizeof(VAR_7), &VAR_5);

 FUNC_0(VAR_4, "rsv %s %s -> %s: %s\n",
  VAR_2, VAR_6, VAR_7, FUNC_2(VAR_3->state));
}
