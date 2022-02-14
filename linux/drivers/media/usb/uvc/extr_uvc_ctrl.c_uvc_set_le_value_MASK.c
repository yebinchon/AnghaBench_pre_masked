
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvc_control_mapping {int size; int offset; scalar_t__ v4l2_type; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct uvc_control_mapping *VAR_1,
 s32 VAR_2, u8 *VAR_3)
{
 int VAR_4 = VAR_1->size;
 int VAR_5 = VAR_1->offset;
 u8 VAR_6;






 if (VAR_1->v4l2_type == VAR_0)
  VAR_2 = -1;

 VAR_3 += VAR_5 / 8;
 VAR_5 &= 7;

 for (; VAR_4 > 0; VAR_3++) {
  VAR_6 = ((1LL << VAR_4) - 1) << VAR_5;
  *VAR_3 = (*VAR_3 & ~VAR_6) | ((VAR_2 << VAR_5) & VAR_6);
  VAR_2 >>= VAR_5 ? VAR_5 : 8;
  VAR_4 -= 8 - VAR_5;
  VAR_5 = 0;
 }
}
