
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct uvc_streaming* bmaControls; } ;
struct uvc_streaming {TYPE_1__ header; struct uvc_streaming* format; int intf; int mutex; scalar_t__ async_wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uvc_streaming*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct uvc_streaming *VAR_0)
{
 if (VAR_0->async_wq)
  FUNC_0(VAR_0->async_wq);

 FUNC_2(&VAR_0->mutex);

 FUNC_3(VAR_0->intf);

 FUNC_1(VAR_0->format);
 FUNC_1(VAR_0->header.bmaControls);
 FUNC_1(VAR_0);
}
