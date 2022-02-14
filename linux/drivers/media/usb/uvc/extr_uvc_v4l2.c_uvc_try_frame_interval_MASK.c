
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uvc_frame {int bFrameIntervalType; scalar_t__* dwFrameInterval; } ;



__attribute__((used)) static u32 FUNC_0(struct uvc_frame *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->bFrameIntervalType) {
  u32 VAR_3 = -1, VAR_4;

  for (VAR_2 = 0; VAR_2 < VAR_0->bFrameIntervalType; ++VAR_2) {
   VAR_4 = VAR_1 > VAR_0->dwFrameInterval[VAR_2]
        ? VAR_1 - VAR_0->dwFrameInterval[VAR_2]
        : VAR_0->dwFrameInterval[VAR_2] - VAR_1;

   if (VAR_4 > VAR_3)
    break;

   VAR_3 = VAR_4;
  }

  VAR_1 = VAR_0->dwFrameInterval[VAR_2-1];
 } else {
  const u32 VAR_5 = VAR_0->dwFrameInterval[0];
  const u32 VAR_6 = VAR_0->dwFrameInterval[1];
  const u32 VAR_7 = VAR_0->dwFrameInterval[2];

  VAR_1 = VAR_5 + (VAR_1 - VAR_5 + VAR_7/2) / VAR_7 * VAR_7;
  if (VAR_1 > VAR_6)
   VAR_1 = VAR_6;
 }

 return VAR_1;
}
