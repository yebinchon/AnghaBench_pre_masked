
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union v4l2_ctrl_ptr {unsigned int* p_s32; unsigned int* p_s64; unsigned int p_char; int * p_u32; int * p_u16; int * p_u8; } ;
struct v4l2_ctrl {unsigned int nr_of_dims; unsigned int* dims; int type; unsigned int* qmenu; unsigned int* qmenu_int; scalar_t__ is_array; union v4l2_ctrl_ptr p_cur; } ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const struct v4l2_ctrl *VAR_0)
{
 union v4l2_ctrl_ptr VAR_1 = VAR_0->p_cur;

 if (VAR_0->is_array) {
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->nr_of_dims; VAR_2++)
   FUNC_0("[%u]", VAR_0->dims[VAR_2]);
  FUNC_0(" ");
 }

 switch (VAR_0->type) {
 case 135:
  FUNC_0("%d", *VAR_1.p_s32);
  break;
 case 136:
  FUNC_0("%s", *VAR_1.p_s32 ? "true" : "false");
  break;
 case 132:
  FUNC_0("%s", VAR_0->qmenu[*VAR_1.p_s32]);
  break;
 case 133:
  FUNC_0("%lld", VAR_0->qmenu_int[*VAR_1.p_s32]);
  break;
 case 137:
  FUNC_0("0x%08x", *VAR_1.p_s32);
  break;
 case 134:
  FUNC_0("%lld", *VAR_1.p_s64);
  break;
 case 131:
  FUNC_0("%s", VAR_1.p_char);
  break;
 case 128:
  FUNC_0("%u", (unsigned)*VAR_1.p_u8);
  break;
 case 130:
  FUNC_0("%u", (unsigned)*VAR_1.p_u16);
  break;
 case 129:
  FUNC_0("%u", (unsigned)*VAR_1.p_u32);
  break;
 default:
  FUNC_0("unknown type %d", VAR_0->type);
  break;
 }
}
