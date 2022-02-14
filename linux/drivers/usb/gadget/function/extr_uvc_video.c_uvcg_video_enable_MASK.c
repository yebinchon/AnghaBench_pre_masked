
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_video {int encode; scalar_t__ payload_size; scalar_t__ max_payload_size; int queue; scalar_t__* req; int * ep; TYPE_1__* uvc; } ;
struct TYPE_2__ {int func; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct uvc_video*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct uvc_video*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct uvc_video*) ;

int FUNC_6(struct uvc_video *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4->ep == ((void*)0)) {
  FUNC_3(&VAR_4->uvc->func,
     "Video enable failed, device is uninitialized.\n");
  return -VAR_0;
 }

 if (!VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
   if (VAR_4->req[VAR_6])
    FUNC_0(VAR_4->ep, VAR_4->req[VAR_6]);

  FUNC_2(VAR_4);
  FUNC_4(&VAR_4->queue, 0);
  return 0;
 }

 if ((VAR_7 = FUNC_4(&VAR_4->queue, 1)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_1(VAR_4)) < 0)
  return VAR_7;

 if (VAR_4->max_payload_size) {
  VAR_4->encode = VAR_2;
  VAR_4->payload_size = 0;
 } else
  VAR_4->encode = VAR_3;

 return FUNC_5(VAR_4);
}
