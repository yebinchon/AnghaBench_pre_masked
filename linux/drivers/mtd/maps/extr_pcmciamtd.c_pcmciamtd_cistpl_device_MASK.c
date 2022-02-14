
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuple_t ;
struct TYPE_6__ {int size; } ;
struct pcmciamtd_dev {TYPE_1__ pcmcia_map; } ;
struct pcmcia_device {int dummy; } ;
struct TYPE_8__ {int ndev; TYPE_2__* dev; } ;
typedef TYPE_3__ cistpl_device_t ;
struct TYPE_9__ {TYPE_3__ device; } ;
typedef TYPE_4__ cisparse_t ;
struct TYPE_7__ {int size; int speed; int wp; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1,
    tuple_t *VAR_2,
    void *VAR_3)
{
 struct pcmciamtd_dev *VAR_4 = VAR_3;
 cisparse_t VAR_5;
 cistpl_device_t *VAR_6 = &VAR_5.device;
 int VAR_7;

 if (FUNC_0(VAR_2, &VAR_5))
  return -VAR_0;

 FUNC_1("Common memory:\n");
 VAR_4->pcmcia_map.size = VAR_6->dev[0].size;

 for (VAR_7 = 0; VAR_7 < VAR_6->ndev; VAR_7++) {
  FUNC_1("Region %d, type = %u\n", VAR_7, VAR_6->dev[VAR_7].type);
  FUNC_1("Region %d, wp = %u\n", VAR_7, VAR_6->dev[VAR_7].wp);
  FUNC_1("Region %d, speed = %u ns\n", VAR_7, VAR_6->dev[VAR_7].speed);
  FUNC_1("Region %d, size = %u bytes\n", VAR_7, VAR_6->dev[VAR_7].size);
 }
 return 0;
}
