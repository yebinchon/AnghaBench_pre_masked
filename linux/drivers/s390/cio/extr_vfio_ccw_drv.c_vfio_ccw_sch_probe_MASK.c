
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct vfio_ccw_private* guest_cp; } ;
struct vfio_ccw_private {TYPE_3__ cp; void* io_region; void* cmd_region; int state; int avail; int io_work; int io_mutex; struct subchannel* sch; } ;
struct TYPE_5__ {int sch_no; int ssid; int cssid; } ;
struct pmcw {scalar_t__ qf; } ;
struct TYPE_4__ {struct pmcw pmcw; } ;
struct subchannel {int dev; TYPE_2__ schid; int lock; int isc; TYPE_1__ schib; } ;
struct ccw1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (struct subchannel*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct vfio_ccw_private*) ;
 int FUNC_7 (int *,char*,int ) ;
 struct vfio_ccw_private* FUNC_8 (int ,int,int) ;
 int FUNC_9 (struct vfio_ccw_private*) ;
 int FUNC_10 (int ,void*) ;
 void* FUNC_11 (int ,int) ;
 struct vfio_ccw_private* FUNC_12 (int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct subchannel*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_17(struct subchannel *VAR_11)
{
 struct pmcw *VAR_12 = &VAR_11->schib.pmcw;
 struct vfio_ccw_private *VAR_13;
 int VAR_14 = -VAR_2;

 if (VAR_12->qf) {
  FUNC_7(&VAR_11->dev, "vfio: ccw: does not support QDIO: %s\n",
    FUNC_5(&VAR_11->dev));
  return -VAR_1;
 }

 VAR_13 = FUNC_12(sizeof(*VAR_13), VAR_4 | VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->cp.guest_cp = FUNC_8(VAR_0, sizeof(struct ccw1),
           VAR_4);
 if (!VAR_13->cp.guest_cp)
  goto out_free;

 VAR_13->io_region = FUNC_11(VAR_9,
            VAR_4 | VAR_3);
 if (!VAR_13->io_region)
  goto out_free;

 VAR_13->cmd_region = FUNC_11(VAR_8,
      VAR_4 | VAR_3);
 if (!VAR_13->cmd_region)
  goto out_free;

 VAR_13->sch = VAR_11;
 FUNC_6(&VAR_11->dev, VAR_13);
 FUNC_13(&VAR_13->io_mutex);

 FUNC_14(VAR_11->lock);
 VAR_13->state = VAR_6;
 VAR_11->isc = VAR_5;
 VAR_14 = FUNC_4(VAR_11, (u32)(unsigned long)VAR_11);
 FUNC_15(VAR_11->lock);
 if (VAR_14)
  goto out_free;

 FUNC_0(&VAR_13->io_work, VAR_10);
 FUNC_2(&VAR_13->avail, 1);
 VAR_13->state = VAR_7;

 VAR_14 = FUNC_16(VAR_11);
 if (VAR_14)
  goto out_disable;

 FUNC_1(4, "bound to subchannel %x.%x.%04x\n",
      VAR_11->schid.cssid, VAR_11->schid.ssid,
      VAR_11->schid.sch_no);
 return 0;

out_disable:
 FUNC_3(VAR_11);
out_free:
 FUNC_6(&VAR_11->dev, ((void*)0));
 if (VAR_13->cmd_region)
  FUNC_10(VAR_8, VAR_13->cmd_region);
 if (VAR_13->io_region)
  FUNC_10(VAR_9, VAR_13->io_region);
 FUNC_9(VAR_13->cp.guest_cp);
 FUNC_9(VAR_13);
 return VAR_14;
}
