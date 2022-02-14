
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_h264_dpb_entry {scalar_t__ top_field_order_cnt; scalar_t__ bottom_field_order_cnt; } ;



__attribute__((used)) static bool FUNC_0(const struct v4l2_h264_dpb_entry *VAR_0,
       const struct v4l2_h264_dpb_entry *VAR_1)
{
 return VAR_0->top_field_order_cnt == VAR_1->top_field_order_cnt &&
        VAR_0->bottom_field_order_cnt == VAR_1->bottom_field_order_cnt;
}
