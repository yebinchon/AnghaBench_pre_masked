
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union v4l2_ctrl_ptr {size_t p_char; size_t p; int * p_s32; int * p_u32; int * p_u16; int * p_u8; int * p_s64; } ;
typedef size_t u32 ;
struct v4l2_ctrl {int type; size_t elem_size; int is_int; } ;
 int FUNC_0 (size_t,size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static bool FUNC_2(const struct v4l2_ctrl *VAR_0, u32 VAR_1,
        union v4l2_ctrl_ptr VAR_2,
        union v4l2_ctrl_ptr VAR_3)
{
 switch (VAR_0->type) {
 case 133:
  return 0;
 case 131:
  VAR_1 *= VAR_0->elem_size;

  return !FUNC_1(VAR_2 + VAR_1, VAR_3 + VAR_1);
 case 132:
  return VAR_2[VAR_1] == VAR_3[VAR_1];
 case 128:
  return VAR_2[VAR_1] == VAR_3[VAR_1];
 case 130:
  return VAR_2[VAR_1] == VAR_3[VAR_1];
 case 129:
  return VAR_2[VAR_1] == VAR_3[VAR_1];
 default:
  if (VAR_0->is_int)
   return VAR_2[VAR_1] == VAR_3[VAR_1];
  VAR_1 *= VAR_0->elem_size;
  return !FUNC_0(VAR_2 + VAR_1, VAR_3 + VAR_1, VAR_0->elem_size);
 }
}
