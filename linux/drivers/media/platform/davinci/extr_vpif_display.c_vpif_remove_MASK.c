
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct channel_obj {int video_dev; } ;
struct TYPE_4__ {struct channel_obj** dev; int sd; int v4l2_dev; int notifier; TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ asd_sizes; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct channel_obj *VAR_3;
 int VAR_4;

 if (VAR_1.config->asd_sizes) {
  FUNC_3(&VAR_1.notifier);
  FUNC_2(&VAR_1.notifier);
 }

 FUNC_4(&VAR_1.v4l2_dev);

 FUNC_1(VAR_1.sd);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  VAR_3 = VAR_1.dev[VAR_4];

  FUNC_5(&VAR_3->video_dev);
 }
 FUNC_0();

 return 0;
}
