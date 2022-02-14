
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {int* vbi_out_have_cc; int vbi_out_have_wss; int std_out; int * vbi_out_wss; int ** vbi_out_cc; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct vivid_buffer {TYPE_1__ vb; } ;
struct v4l2_sliced_vbi_data {int id; int line; int * data; int field; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct v4l2_sliced_vbi_data* FUNC_1 (int *,int ) ;

void FUNC_2(struct vivid_dev *VAR_2,
  struct vivid_buffer *VAR_3)
{
 struct v4l2_sliced_vbi_data *VAR_4 =
  FUNC_1(&VAR_3->vb.vb2_buf, 0);
 unsigned VAR_5 =
  FUNC_0(&VAR_3->vb.vb2_buf, 0) / sizeof(*VAR_4);

 VAR_2->vbi_out_have_cc[0] = 0;
 VAR_2->vbi_out_have_cc[1] = 0;
 VAR_2->vbi_out_have_wss = 0;
 while (VAR_5--) {
  switch (VAR_4->id) {
  case 129:
   if ((VAR_2->std_out & VAR_0) && VAR_4->line == 21) {
    VAR_2->vbi_out_have_cc[!!VAR_4->field] = 1;
    VAR_2->vbi_out_cc[!!VAR_4->field][0] = VAR_4->data[0];
    VAR_2->vbi_out_cc[!!VAR_4->field][1] = VAR_4->data[1];
   }
   break;
  case 128:
   if ((VAR_2->std_out & VAR_1) &&
       VAR_4->field == 0 && VAR_4->line == 23) {
    VAR_2->vbi_out_have_wss = 1;
    VAR_2->vbi_out_wss[0] = VAR_4->data[0];
    VAR_2->vbi_out_wss[1] = VAR_4->data[1];
   }
   break;
  }
  VAR_4++;
 }
}
