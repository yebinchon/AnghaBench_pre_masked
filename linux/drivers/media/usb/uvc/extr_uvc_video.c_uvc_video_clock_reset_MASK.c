
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_clock {int last_sof; int sof_offset; scalar_t__ count; scalar_t__ head; } ;
struct uvc_streaming {struct uvc_clock clock; } ;



__attribute__((used)) static void FUNC_0(struct uvc_streaming *VAR_0)
{
 struct uvc_clock *VAR_1 = &VAR_0->clock;

 VAR_1->head = 0;
 VAR_1->count = 0;
 VAR_1->last_sof = -1;
 VAR_1->sof_offset = -1;
}
