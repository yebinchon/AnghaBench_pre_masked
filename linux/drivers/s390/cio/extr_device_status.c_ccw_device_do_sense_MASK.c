
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct irb {int scsw; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct ccw1 {int flags; int count; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ __u32 ;
struct TYPE_12__ {TYPE_2__* dma_area; } ;
struct TYPE_11__ {TYPE_4__* dma_area; } ;
struct TYPE_9__ {int ecw; } ;
struct TYPE_10__ {TYPE_3__ irb; } ;
struct TYPE_8__ {struct ccw1 sense_ccw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct subchannel*,struct ccw1*,int) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_6__* FUNC_4 (struct subchannel*) ;
 struct subchannel* FUNC_5 (int ) ;

int
FUNC_6(struct ccw_device *VAR_9, struct irb *VAR_10)
{
 struct subchannel *VAR_11;
 struct ccw1 *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_5(VAR_9->dev.parent);


 if (FUNC_3(&VAR_10->scsw) & (VAR_6 | VAR_7))






  return -VAR_4;




 VAR_12 = &FUNC_4(VAR_11)->dma_area->sense_ccw;
 VAR_12->cmd_code = VAR_0;
 VAR_12->cda = (__u32) FUNC_0(VAR_9->private->dma_area->irb.ecw);
 VAR_12->count = VAR_8;
 VAR_12->flags = VAR_1;

 VAR_13 = FUNC_1(VAR_11, VAR_12, 0xff);
 if (VAR_13 == -VAR_5 || VAR_13 == -VAR_3)
  FUNC_2(VAR_9, VAR_2);
 return VAR_13;
}
