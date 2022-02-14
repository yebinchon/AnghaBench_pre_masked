
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {TYPE_1__* cfg; int v4l2_dev; } ;
struct v4l2_capability {int card; int bus_info; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* card_name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
          struct v4l2_capability *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_2(VAR_2);

 FUNC_1(1, VAR_1, &VAR_5->v4l2_dev, "vpfe_querycap\n");

 FUNC_0(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_0(VAR_4->bus_info, "VPFE", sizeof(VAR_4->bus_info));
 FUNC_0(VAR_4->card, VAR_5->cfg->card_name, sizeof(VAR_4->card));
 return 0;
}
