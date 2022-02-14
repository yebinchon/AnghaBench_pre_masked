
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uvc_urb {TYPE_1__* stream; } ;
struct TYPE_2__ {struct uvc_urb const* uvc_urb; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct uvc_urb *VAR_0)
{
 return VAR_0 - &VAR_0->stream->uvc_urb[0];
}
