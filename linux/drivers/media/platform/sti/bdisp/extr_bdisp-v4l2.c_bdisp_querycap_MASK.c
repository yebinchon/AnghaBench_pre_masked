
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct bdisp_dev {int id; TYPE_1__* pdev; } ;
struct bdisp_ctx {struct bdisp_dev* bdisp_dev; } ;
struct TYPE_2__ {int name; } ;


 char* VAR_0 ;
 struct bdisp_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int ,int,char*,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_capability *VAR_3)
{
 struct bdisp_ctx *VAR_4 = FUNC_0(VAR_2);
 struct bdisp_dev *VAR_5 = VAR_4->bdisp_dev;

 FUNC_2(VAR_3->driver, VAR_5->pdev->name, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->card, VAR_5->pdev->name, sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info), "platform:%s%d",
   VAR_0, VAR_5->id);
 return 0;
}
