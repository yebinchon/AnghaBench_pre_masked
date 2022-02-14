
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int denominator; scalar_t__ numerator; } ;
struct vivid_dev {scalar_t__ field_cap; int cap_frame_eof_offset; int cap_frame_period; TYPE_1__ timeperframe_vid_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct vivid_dev *VAR_1)
{
 u64 VAR_2;

 VAR_2 = (u64)VAR_1->timeperframe_vid_cap.numerator * 1000000000;
 if (FUNC_0(VAR_1->timeperframe_vid_cap.denominator == 0))
  VAR_1->timeperframe_vid_cap.denominator = 1;
 FUNC_1(VAR_2, VAR_1->timeperframe_vid_cap.denominator);
 if (VAR_1->field_cap == VAR_0)
  VAR_2 >>= 1;




 VAR_1->cap_frame_eof_offset = VAR_2 * 9;
 FUNC_1(VAR_1->cap_frame_eof_offset, 10);
 VAR_1->cap_frame_period = VAR_2;
}
