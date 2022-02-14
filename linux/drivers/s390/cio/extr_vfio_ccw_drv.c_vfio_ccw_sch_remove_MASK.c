
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vfio_ccw_private* guest_cp; } ;
struct vfio_ccw_private {TYPE_1__ cp; int io_region; int cmd_region; } ;
struct TYPE_4__ {int sch_no; int ssid; int cssid; } ;
struct subchannel {TYPE_2__ schid; int dev; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 struct vfio_ccw_private* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct vfio_ccw_private*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct subchannel*) ;
 int FUNC_6 (struct subchannel*) ;

__attribute__((used)) static int FUNC_7(struct subchannel *VAR_2)
{
 struct vfio_ccw_private *VAR_3 = FUNC_1(&VAR_2->dev);

 FUNC_6(VAR_2);

 FUNC_5(VAR_2);

 FUNC_2(&VAR_2->dev, ((void*)0));

 FUNC_4(VAR_0, VAR_3->cmd_region);
 FUNC_4(VAR_1, VAR_3->io_region);
 FUNC_3(VAR_3->cp.guest_cp);
 FUNC_3(VAR_3);

 FUNC_0(4, "unbound from subchannel %x.%x.%04x\n",
      VAR_2->schid.cssid, VAR_2->schid.ssid,
      VAR_2->schid.sch_no);
 return 0;
}
