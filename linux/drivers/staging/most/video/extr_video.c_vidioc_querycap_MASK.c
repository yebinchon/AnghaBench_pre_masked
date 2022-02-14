
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct most_video_dev {TYPE_1__* iface; } ;
struct file {int dummy; } ;
struct comp_fh {struct most_video_dev* mdev; } ;
struct TYPE_2__ {char* description; } ;


 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct comp_fh *VAR_3 = VAR_1;
 struct most_video_dev *VAR_4 = VAR_3->mdev;

 FUNC_1(VAR_2->driver, "v4l2_component", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, "MOST", sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, sizeof(VAR_2->bus_info),
   "%s", VAR_4->iface->description);
 return 0;
}
