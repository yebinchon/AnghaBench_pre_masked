
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct xvip_dma {int port; TYPE_3__* xdev; TYPE_1__ video; } ;
struct v4l2_fh {int vdev; } ;
struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_6__ {int v4l2_caps; TYPE_2__* dev; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct xvip_dma* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_capability *VAR_4)
{
 struct v4l2_fh *VAR_5 = VAR_2->private_data;
 struct xvip_dma *VAR_6 = FUNC_2(VAR_5->vdev);

 VAR_4->capabilities = VAR_6->xdev->v4l2_caps | VAR_1 |
       VAR_0;

 FUNC_1(VAR_4->driver, "xilinx-vipp", sizeof(VAR_4->driver));
 FUNC_1(VAR_4->card, VAR_6->video.name, sizeof(VAR_4->card));
 FUNC_0(VAR_4->bus_info, sizeof(VAR_4->bus_info), "platform:%pOFn:%u",
   VAR_6->xdev->dev->of_node, VAR_6->port);

 return 0;
}
