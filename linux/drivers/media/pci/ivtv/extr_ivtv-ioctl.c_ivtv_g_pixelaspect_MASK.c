
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {scalar_t__ is_out_50hz; scalar_t__ is_50hz; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ivtv_open_id* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
         int VAR_5, struct v4l2_fract *VAR_6)
{
 struct ivtv_open_id *VAR_7 = FUNC_0(VAR_4);
 struct ivtv *VAR_8 = VAR_7->itv;

 if (VAR_5 == VAR_1) {
  VAR_6->numerator = VAR_8->is_50hz ? 54 : 11;
  VAR_6->denominator = VAR_8->is_50hz ? 59 : 10;
 } else if (VAR_5 == VAR_2) {
  VAR_6->numerator = VAR_8->is_out_50hz ? 54 : 11;
  VAR_6->denominator = VAR_8->is_out_50hz ? 59 : 10;
 } else {
  return -VAR_0;
 }
 return 0;
}
