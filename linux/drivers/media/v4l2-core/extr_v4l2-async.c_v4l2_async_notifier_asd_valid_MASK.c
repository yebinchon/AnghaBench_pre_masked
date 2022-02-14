
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_async_subdev {int match_type; } ;
struct v4l2_async_notifier {TYPE_1__* v4l2_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int,struct v4l2_async_subdev*) ;
 int FUNC_2 (struct v4l2_async_notifier*,struct v4l2_async_subdev*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_async_notifier *VAR_2,
      struct v4l2_async_subdev *VAR_3,
      int VAR_4)
{
 struct device *VAR_5 =
  VAR_2->v4l2_dev ? VAR_2->v4l2_dev->dev : ((void*)0);

 if (!VAR_3)
  return -VAR_1;

 switch (VAR_3->match_type) {
 case 131:
 case 130:
 case 128:
 case 129:
  if (FUNC_2(VAR_2, VAR_3,
        VAR_4)) {
   FUNC_0(VAR_5, "subdev descriptor already listed in this or other notifiers\n");
   return -VAR_0;
  }
  break;
 default:
  FUNC_1(VAR_5, "Invalid match type %u on %p\n",
   VAR_3->match_type, VAR_3);
  return -VAR_1;
 }

 return 0;
}
