
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int name; } ;
struct saa7134_go7007 {int * bottom; int * top; int status; int vdev; int v4l2_dev; TYPE_1__* board_info; struct v4l2_subdev sd; struct saa7134_dev* dev; struct saa7134_go7007* hpi_context; int * hpi_ops; int name; int bus_info; int board_id; } ;
struct saa7134_dev {size_t board; int * empress_dev; TYPE_3__* pci; } ;
struct go7007 {int * bottom; int * top; int status; int vdev; int v4l2_dev; TYPE_1__* board_info; struct v4l2_subdev sd; struct saa7134_dev* dev; struct go7007* hpi_context; int * hpi_ops; int name; int bus_info; int board_id; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int flags; int num_i2c_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 struct saa7134_go7007* FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct saa7134_go7007*,int) ;
 scalar_t__ FUNC_4 (struct saa7134_go7007*,int ) ;
 int FUNC_5 (struct saa7134_go7007*) ;
 struct saa7134_go7007* FUNC_6 (int,int ) ;
 char* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,int,char*,char*) ;
 int FUNC_11 (int ,char*,int) ;
 scalar_t__ FUNC_12 (int *,struct v4l2_subdev*) ;
 int FUNC_13 (struct v4l2_subdev*,struct saa7134_go7007*) ;
 int FUNC_14 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_15(struct saa7134_dev *VAR_9)
{
 struct go7007 *VAR_10;
 struct saa7134_go7007 *VAR_11;
 struct v4l2_subdev *VAR_12;

 FUNC_8("saa7134-go7007: probing new SAA713X board\n");

 VAR_10 = FUNC_2(&VAR_5, &VAR_9->pci->dev);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_6(sizeof(struct saa7134_go7007), VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_10);
  return -VAR_0;
 }

 VAR_10->board_id = VAR_2;
 FUNC_10(VAR_10->bus_info, sizeof(VAR_10->bus_info), "PCI:%s", FUNC_7(VAR_9->pci));
 FUNC_11(VAR_10->name, VAR_6[VAR_9->board].name, sizeof(VAR_10->name));
 VAR_10->hpi_ops = &VAR_7;
 VAR_10->hpi_context = VAR_11;
 VAR_11->dev = VAR_9;


 VAR_12 = &VAR_11->sd;
 FUNC_14(VAR_12, &VAR_8);
 FUNC_13(VAR_12, VAR_11);
 FUNC_11(VAR_12->name, "saa7134-go7007", sizeof(VAR_12->name));


 VAR_11->top = (u8 *)FUNC_1(VAR_1);
 if (!VAR_11->top)
  goto allocfail;
 VAR_11->bottom = (u8 *)FUNC_1(VAR_1);
 if (!VAR_11->bottom)
  goto allocfail;


 if (FUNC_3(VAR_10, VAR_10->board_info->flags &
     VAR_3) < 0)
  goto allocfail;



 if (FUNC_4(VAR_10, VAR_10->board_info->num_i2c_devs) < 0)
  goto allocfail;


 if (FUNC_12(&VAR_10->v4l2_dev, VAR_12) < 0)
  FUNC_9("saa7134-go7007: register subdev failed\n");

 VAR_9->empress_dev = &VAR_10->vdev;

 VAR_10->status = VAR_4;
 return 0;

allocfail:
 if (VAR_11->top)
  FUNC_0((unsigned long)VAR_11->top);
 if (VAR_11->bottom)
  FUNC_0((unsigned long)VAR_11->bottom);
 FUNC_5(VAR_11);
 FUNC_5(VAR_10);
 return -VAR_0;
}
