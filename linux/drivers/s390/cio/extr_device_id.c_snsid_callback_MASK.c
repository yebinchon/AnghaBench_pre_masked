
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct senseid {int dev_model; int dev_type; int cu_model; int cu_type; } ;
struct ccw_device {TYPE_2__* private; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_4__ {TYPE_1__* dma_area; struct ccw_dev_id dev_id; } ;
struct TYPE_3__ {struct senseid senseid; } ;


 int FUNC_0 (int,char*,int ,int ,int,int ,int ,int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ccw_device*,int) ;
 scalar_t__ FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_device*) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_1, void *VAR_2, int VAR_3)
{
 struct ccw_dev_id *VAR_4 = &VAR_1->private->dev_id;
 struct senseid *VAR_5 = &VAR_1->private->dma_area->senseid;
 int VAR_6 = 0;

 if (VAR_3 && VAR_0) {

  FUNC_3(VAR_1);
  if (FUNC_2(VAR_1) == 0) {
   VAR_3 = 0;
   VAR_6 = 1;
  }
 }
 FUNC_0(2, "snsid: device 0.%x.%04x: rc=%d %04x/%02x "
        "%04x/%02x%s\n", VAR_4->ssid, VAR_4->devno, VAR_3,
        VAR_5->cu_type, VAR_5->cu_model, VAR_5->dev_type,
        VAR_5->dev_model, VAR_6 ? " (diag210)" : "");
 FUNC_1(VAR_1, VAR_3);
}
