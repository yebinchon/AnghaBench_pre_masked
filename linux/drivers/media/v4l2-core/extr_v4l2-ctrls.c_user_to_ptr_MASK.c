
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union v4l2_ctrl_ptr {char* p; char* p_char; int * p_s32; int * p_s64; } ;
typedef unsigned int u32 ;
struct v4l2_ext_control {unsigned int size; int value; int string; int value64; int ptr; } ;
struct v4l2_ctrl {int is_new; unsigned int elem_size; unsigned int elems; int type; int maximum; TYPE_1__* type_ops; int is_array; int is_string; scalar_t__ is_ptr; } ;
struct TYPE_2__ {int (* init ) (struct v4l2_ctrl*,unsigned int,union v4l2_ctrl_ptr) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct v4l2_ctrl*,unsigned int,union v4l2_ctrl_ptr) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ext_control *VAR_2,
         struct v4l2_ctrl *VAR_3,
         union v4l2_ctrl_ptr VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_3->is_new = 1;
 if (VAR_3->is_ptr && !VAR_3->is_string) {
  unsigned VAR_7;

  VAR_5 = FUNC_0(VAR_4.p, VAR_2->ptr, VAR_2->size) ? -VAR_0 : 0;
  if (VAR_5 || !VAR_3->is_array)
   return VAR_5;
  for (VAR_7 = VAR_2->size / VAR_3->elem_size; VAR_7 < VAR_3->elems; VAR_7++)
   VAR_3->type_ops->init(VAR_3, VAR_7, VAR_4);
  return 0;
 }

 switch (VAR_3->type) {
 case 129:
  *VAR_4.p_s64 = VAR_2->value64;
  break;
 case 128:
  VAR_6 = VAR_2->size;
  if (VAR_6 == 0)
   return -VAR_1;
  if (VAR_6 > VAR_3->maximum + 1)
   VAR_6 = VAR_3->maximum + 1;
  VAR_5 = FUNC_0(VAR_4.p_char, VAR_2->string, VAR_6) ? -VAR_0 : 0;
  if (!VAR_5) {
   char VAR_8 = VAR_4.p_char[VAR_6 - 1];

   VAR_4.p_char[VAR_6 - 1] = 0;


   if (FUNC_1(VAR_4.p_char) == VAR_3->maximum && VAR_8)
    return -VAR_1;
  }
  return VAR_5;
 default:
  *VAR_4.p_s32 = VAR_2->value;
  break;
 }
 return 0;
}
