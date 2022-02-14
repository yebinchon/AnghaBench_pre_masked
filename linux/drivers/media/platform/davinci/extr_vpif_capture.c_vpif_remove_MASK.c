
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct channel_obj {int video_dev; } ;
struct TYPE_2__ {struct channel_obj** dev; struct channel_obj* sd; int v4l2_dev; int notifier; } ;


 int VAR_0 ;
 int FUNC_0 (struct channel_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct channel_obj *VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1.notifier);
 FUNC_1(&VAR_1.notifier);
 FUNC_3(&VAR_1.v4l2_dev);

 FUNC_0(VAR_1.sd);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  VAR_3 = VAR_1.dev[VAR_4];

  FUNC_4(&VAR_3->video_dev);
  FUNC_0(VAR_1.dev[VAR_4]);
 }
 return 0;
}
