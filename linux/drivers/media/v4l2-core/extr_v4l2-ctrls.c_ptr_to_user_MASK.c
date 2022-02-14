
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union v4l2_ctrl_ptr {int * p_s32; int * p_s64; int p_char; int p; } ;
typedef int u32 ;
struct v4l2_ext_control {int value; int value64; int string; int size; int ptr; } ;
struct v4l2_ctrl {int type; int elem_size; int is_string; scalar_t__ is_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ext_control *VAR_2,
         struct v4l2_ctrl *VAR_3,
         union v4l2_ctrl_ptr VAR_4)
{
 u32 VAR_5;

 if (VAR_3->is_ptr && !VAR_3->is_string)
  return FUNC_0(VAR_2->ptr, VAR_4.p, VAR_2->size) ?
         -VAR_0 : 0;

 switch (VAR_3->type) {
 case 128:
  VAR_5 = FUNC_1(VAR_4.p_char);
  if (VAR_2->size < VAR_5 + 1) {
   VAR_2->size = VAR_3->elem_size;
   return -VAR_1;
  }
  return FUNC_0(VAR_2->string, VAR_4.p_char, VAR_5 + 1) ?
         -VAR_0 : 0;
 case 129:
  VAR_2->value64 = *VAR_4.p_s64;
  break;
 default:
  VAR_2->value = *VAR_4.p_s32;
  break;
 }
 return 0;
}
