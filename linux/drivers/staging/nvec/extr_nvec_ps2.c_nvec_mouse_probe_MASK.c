
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct serio {int phys; int name; int stop; int start; int write; TYPE_1__ id; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct nvec_chip {int dummy; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_7__ {TYPE_4__ notifier; struct nvec_chip* nvec; struct serio* ser_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvec_chip* FUNC_0 (int ) ;
 struct serio* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct nvec_chip*,TYPE_4__*,int ) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct serio*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_8)
{
 struct nvec_chip *VAR_9 = FUNC_0(VAR_8->dev.parent);
 struct serio *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->id.type = VAR_2;
 VAR_10->write = VAR_5;
 VAR_10->start = VAR_6;
 VAR_10->stop = VAR_7;

 FUNC_4(VAR_10->name, "nvec mouse", sizeof(VAR_10->name));
 FUNC_4(VAR_10->phys, "nvec", sizeof(VAR_10->phys));

 VAR_4.ser_dev = VAR_10;
 VAR_4.notifier.notifier_call = VAR_3;
 VAR_4.nvec = VAR_9;
 FUNC_2(VAR_9, &VAR_4.notifier, 0);

 FUNC_3(VAR_10);

 return 0;
}
