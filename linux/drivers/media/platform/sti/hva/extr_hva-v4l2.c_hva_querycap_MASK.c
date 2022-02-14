
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct hva_dev {TYPE_1__* pdev; TYPE_2__* vdev; } ;
struct hva_ctx {int dummy; } ;
struct file {int private_data; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 struct hva_dev* FUNC_0 (struct hva_ctx*) ;
 struct hva_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
   struct v4l2_capability *VAR_3)
{
 struct hva_ctx *VAR_4 = FUNC_1(VAR_1->private_data);
 struct hva_dev *VAR_5 = FUNC_0(VAR_4);

 FUNC_3(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->card, VAR_5->vdev->name, sizeof(VAR_3->card));
 FUNC_2(VAR_3->bus_info, sizeof(VAR_3->bus_info), "platform:%s",
   VAR_5->pdev->name);

 return 0;
}
