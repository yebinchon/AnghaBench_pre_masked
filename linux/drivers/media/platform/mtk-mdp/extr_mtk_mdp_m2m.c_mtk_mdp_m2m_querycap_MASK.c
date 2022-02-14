
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct mtk_mdp_dev {TYPE_1__* pdev; } ;
struct mtk_mdp_ctx {struct mtk_mdp_dev* mdp_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 char* VAR_0 ;
 struct mtk_mdp_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_capability *VAR_3)
{
 struct mtk_mdp_ctx *VAR_4 = FUNC_0(VAR_2);
 struct mtk_mdp_dev *VAR_5 = VAR_4->mdp_dev;

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, VAR_5->pdev->name, sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, "platform:mt8173", sizeof(VAR_3->bus_info));

 return 0;
}
