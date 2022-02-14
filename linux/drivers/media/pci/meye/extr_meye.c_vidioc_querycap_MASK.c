
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mchip_dev; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
    struct v4l2_capability *VAR_3)
{
 FUNC_2(VAR_3->driver, "meye", sizeof(VAR_3->driver));
 FUNC_2(VAR_3->card, "meye", sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, "PCI:%s", FUNC_0(VAR_0.mchip_dev));
 return 0;
}
