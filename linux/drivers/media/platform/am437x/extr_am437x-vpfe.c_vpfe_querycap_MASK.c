
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct vpfe_device {TYPE_1__ v4l2_dev; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct vpfe_device* FUNC_2 (struct file*) ;
 int FUNC_3 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_capability *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(2, VAR_4, "vpfe_querycap\n");

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, "TI AM437x VPFE", sizeof(VAR_3->card));
 FUNC_0(VAR_3->bus_info, sizeof(VAR_3->bus_info),
   "platform:%s", VAR_4->v4l2_dev.name);
 return 0;
}
