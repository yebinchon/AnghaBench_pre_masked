
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int private_data; } ;
struct delta_dev {TYPE_1__* pdev; TYPE_2__* vdev; } ;
struct delta_ctx {struct delta_dev* dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct delta_ctx* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_capability *VAR_3)
{
 struct delta_ctx *VAR_4 = FUNC_2(VAR_1->private_data);
 struct delta_dev *VAR_5 = VAR_4->dev;

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, VAR_5->vdev->name, sizeof(VAR_3->card));
 FUNC_0(VAR_3->bus_info, sizeof(VAR_3->bus_info), "platform:%s",
   VAR_5->pdev->name);

 return 0;
}
