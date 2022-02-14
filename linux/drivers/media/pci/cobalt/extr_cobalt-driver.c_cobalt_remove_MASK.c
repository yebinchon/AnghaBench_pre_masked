
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cobalt {int irq_work_queues; int pci_dev; TYPE_1__* streams; } ;
struct TYPE_2__ {struct v4l2_subdev* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cobalt*) ;
 int FUNC_1 (struct cobalt*,struct pci_dev*) ;
 int FUNC_2 (struct cobalt*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cobalt*) ;
 int FUNC_5 (struct cobalt*,struct pci_dev*) ;
 int FUNC_6 (struct cobalt*,int ,int ) ;
 int FUNC_7 (struct cobalt*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (struct cobalt*) ;
 int FUNC_12 (int ) ;
 struct v4l2_device* FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ) ;
 struct cobalt* FUNC_15 (struct v4l2_device*) ;
 int FUNC_16 (struct v4l2_device*) ;
 int FUNC_17 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_18 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_19(struct pci_dev *VAR_2)
{
 struct v4l2_device *VAR_3 = FUNC_13(VAR_2);
 struct cobalt *VAR_4 = FUNC_15(VAR_3);
 int VAR_5;

 FUNC_0(VAR_4);
 FUNC_7(VAR_4, 0);
 FUNC_9(VAR_4->irq_work_queues);
 FUNC_4(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct v4l2_subdev *VAR_6 = VAR_4->streams[VAR_5].sd;
  struct i2c_client *VAR_7;

  if (VAR_6 == ((void*)0))
   continue;
  VAR_7 = FUNC_18(VAR_6);
  FUNC_17(VAR_6);
  FUNC_10(VAR_7);
 }
 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_2);
 FUNC_6(VAR_4, VAR_1, 0);
 FUNC_5(VAR_4, VAR_2);
 FUNC_14(VAR_4->pci_dev);
 FUNC_12(VAR_4->pci_dev);
 FUNC_8(VAR_4->irq_work_queues);

 FUNC_3("removed cobalt card\n");

 FUNC_16(VAR_3);
 FUNC_11(VAR_4);
}
