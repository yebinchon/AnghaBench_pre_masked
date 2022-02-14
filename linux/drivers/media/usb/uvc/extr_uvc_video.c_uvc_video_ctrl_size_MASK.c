
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {TYPE_1__* dev; } ;
struct TYPE_2__ {int uvc_version; } ;



__attribute__((used)) static size_t FUNC_0(struct uvc_streaming *VAR_0)
{




 if (VAR_0->dev->uvc_version < 0x0110)
  return 26;
 else if (VAR_0->dev->uvc_version < 0x0150)
  return 34;
 else
  return 48;
}
