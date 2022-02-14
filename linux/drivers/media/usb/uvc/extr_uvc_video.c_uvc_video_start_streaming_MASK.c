
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int intfnum; TYPE_1__* dev; int ctrl; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uvc_streaming*,int *) ;
 int FUNC_2 (struct uvc_streaming*) ;
 int FUNC_3 (struct uvc_streaming*) ;
 int FUNC_4 (struct uvc_streaming*,int ) ;

int FUNC_5(struct uvc_streaming *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_1, &VAR_1->ctrl);
 if (VAR_2 < 0)
  goto error_commit;

 VAR_2 = FUNC_4(VAR_1, VAR_0);
 if (VAR_2 < 0)
  goto error_video;

 return 0;

error_video:
 FUNC_0(VAR_1->dev->udev, VAR_1->intfnum, 0);
error_commit:
 FUNC_2(VAR_1);

 return VAR_2;
}
