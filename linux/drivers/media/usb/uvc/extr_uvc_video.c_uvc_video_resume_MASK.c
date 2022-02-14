
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int ctrl; int queue; scalar_t__ frozen; int intfnum; TYPE_1__* dev; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uvc_streaming*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uvc_streaming*) ;
 int FUNC_4 (struct uvc_streaming*,int ) ;

int FUNC_5(struct uvc_streaming *VAR_1, int VAR_2)
{
 int VAR_3;






 if (VAR_2)
  FUNC_0(VAR_1->dev->udev, VAR_1->intfnum, 0);

 VAR_1->frozen = 0;

 FUNC_3(VAR_1);

 if (!FUNC_2(&VAR_1->queue))
  return 0;

 VAR_3 = FUNC_1(VAR_1, &VAR_1->ctrl);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_4(VAR_1, VAR_0);
}
