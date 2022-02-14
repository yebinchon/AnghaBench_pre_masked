
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_ccw_private {int state; int * completion; } ;
struct TYPE_6__ {int sch_no; int ssid; } ;
struct TYPE_4__ {int ena; } ;
struct TYPE_5__ {TYPE_1__ pmcw; } ;
struct subchannel {int lock; TYPE_3__ schid; TYPE_2__ schib; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct subchannel*,int*) ;
 int FUNC_2 (struct subchannel*) ;
 int VAR_4 ;
 struct vfio_ccw_private* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int *,int) ;

int FUNC_9(struct subchannel *VAR_6)
{
 struct vfio_ccw_private *VAR_7 = FUNC_3(&VAR_6->dev);
 FUNC_0(VAR_4);
 int VAR_8, VAR_9 = 0;

 FUNC_6(VAR_6->lock);
 if (!VAR_6->schib.pmcw.ena)
  goto out_unlock;
 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 != -VAR_0)
  goto out_unlock;

 VAR_8 = 255;
 do {

  VAR_9 = FUNC_1(VAR_6, &VAR_8);

  if (VAR_9 == -VAR_1) {
   FUNC_5("vfio_ccw: could not quiesce subchannel 0.%x.%04x!\n",
          VAR_6->schid.ssid, VAR_6->schid.sch_no);
   break;
  }





  VAR_7->completion = &VAR_4;
  FUNC_7(VAR_6->lock);

  if (VAR_9 == -VAR_0)
   FUNC_8(&VAR_4, 3*VAR_2);

  VAR_7->completion = ((void*)0);
  FUNC_4(VAR_5);
  FUNC_6(VAR_6->lock);
  VAR_9 = FUNC_2(VAR_6);
 } while (VAR_9 == -VAR_0);
out_unlock:
 VAR_7->state = VAR_3;
 FUNC_7(VAR_6->lock);
 return VAR_9;
}
