
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct fwnode_reference_args {int fwnode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_async_subdev*) ;
 int FUNC_1 (struct v4l2_async_subdev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int *,int ,unsigned int,struct fwnode_reference_args*) ;
 struct v4l2_async_subdev* FUNC_5 (struct v4l2_async_notifier*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
           struct v4l2_async_notifier *VAR_4,
           const char *VAR_5)
{
 struct fwnode_reference_args VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 for (VAR_7 = 0;
      !(VAR_8 = FUNC_4(FUNC_2(VAR_3),
       VAR_5, ((void*)0), 0,
       VAR_7, &VAR_6));
      VAR_7++)
  FUNC_3(VAR_6.fwnode);

 if (!VAR_7)
  return -VAR_2;





 if (VAR_8 != -VAR_2 && VAR_8 != -VAR_1)
  return VAR_8;

 for (VAR_7 = 0;
      !FUNC_4(FUNC_2(VAR_3), VAR_5, ((void*)0),
       0, VAR_7, &VAR_6);
      VAR_7++) {
  struct v4l2_async_subdev *VAR_9;

  VAR_9 = FUNC_5(VAR_4,
           VAR_6.fwnode,
           sizeof(*VAR_9));
  FUNC_3(VAR_6.fwnode);
  if (FUNC_0(VAR_9)) {

   if (FUNC_1(VAR_9) == -VAR_0)
    continue;

   return FUNC_1(VAR_9);
  }
 }

 return 0;
}
