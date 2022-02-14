
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct snd_tea575x {int bus_info; scalar_t__ tea5759; int card; TYPE_1__* v4l2_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct snd_tea575x* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
     struct v4l2_capability *VAR_2)
{
 struct snd_tea575x *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->driver, VAR_3->v4l2_dev->name, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, VAR_3->card, sizeof(VAR_2->card));
 FUNC_0(VAR_2->card, VAR_3->tea5759 ? " TEA5759" : " TEA5757", sizeof(VAR_2->card));
 FUNC_1(VAR_2->bus_info, VAR_3->bus_info, sizeof(VAR_2->bus_info));
 return 0;
}
