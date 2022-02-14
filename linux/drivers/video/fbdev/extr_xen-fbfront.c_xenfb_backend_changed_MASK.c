
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenfb_info {int update_wanted; int feature_resize; TYPE_1__* xbdev; } ;
struct xenbus_device {int const state; int otherend; int dev; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
struct TYPE_2__ {int otherend; } ;
 struct xenfb_info* FUNC_0 (int *) ;
 int FUNC_1 (struct xenbus_device*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_4(struct xenbus_device *VAR_0,
      enum xenbus_state VAR_1)
{
 struct xenfb_info *VAR_2 = FUNC_0(&VAR_0->dev);

 switch (VAR_1) {
 case 131:
 case 132:
 case 129:
 case 130:
 case 128:
  break;

 case 133:
  FUNC_3(VAR_0, 134);
  break;

 case 134:





  if (VAR_0->state != 134)

   FUNC_3(VAR_0, 134);

  if (FUNC_2(VAR_2->xbdev->otherend,
      "request-update", 0))
   VAR_2->update_wanted = 1;

  VAR_2->feature_resize = FUNC_2(VAR_0->otherend,
       "feature-resize", 0);
  break;

 case 136:
  if (VAR_0->state == 136)
   break;

 case 135:
  FUNC_1(VAR_0);
  break;
 }
}
