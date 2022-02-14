
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_vbi_gen_data {TYPE_1__* data; } ;
struct vivid_dev {int* std_cap; size_t input; int* vbi_out_wss; int** vbi_out_cc; scalar_t__* vbi_out_have_cc; scalar_t__ loop_video; int tpg; scalar_t__ vbi_out_have_wss; struct vivid_vbi_gen_data vbi_gen; } ;
struct TYPE_2__ {int* data; scalar_t__ id; } ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vivid_vbi_gen_data*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct vivid_dev *VAR_1, unsigned VAR_2)
{
 struct vivid_vbi_gen_data *VAR_3 = &VAR_1->vbi_gen;
 bool VAR_4 = VAR_1->std_cap[VAR_1->input] & VAR_0;

 FUNC_1(VAR_3, VAR_4, VAR_2);

 if (!VAR_4) {
  if (VAR_1->loop_video) {
   if (VAR_1->vbi_out_have_wss) {
    VAR_3->data[12].data[0] = VAR_1->vbi_out_wss[0];
    VAR_3->data[12].data[1] = VAR_1->vbi_out_wss[1];
   } else {
    VAR_3->data[12].id = 0;
   }
  } else {
   switch (FUNC_0(&VAR_1->tpg)) {
   case 131:
    VAR_3->data[12].data[0] = 0x01;
    break;
   case 129:
    VAR_3->data[12].data[0] = 0x0b;
    break;
   case 130:
    VAR_3->data[12].data[0] = 0x07;
    break;
   case 128:
   default:
    VAR_3->data[12].data[0] = 0x08;
    break;
   }
  }
 } else if (VAR_1->loop_video && VAR_4) {
  if (VAR_1->vbi_out_have_cc[0]) {
   VAR_3->data[0].data[0] = VAR_1->vbi_out_cc[0][0];
   VAR_3->data[0].data[1] = VAR_1->vbi_out_cc[0][1];
  } else {
   VAR_3->data[0].id = 0;
  }
  if (VAR_1->vbi_out_have_cc[1]) {
   VAR_3->data[1].data[0] = VAR_1->vbi_out_cc[1][0];
   VAR_3->data[1].data[1] = VAR_1->vbi_out_cc[1][1];
  } else {
   VAR_3->data[1].id = 0;
  }
 }
}
