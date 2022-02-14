
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {unsigned int input_buf_size; unsigned int output_buf_size; unsigned int num_input_bufs; unsigned int num_output_bufs; int height; int width; TYPE_2__* fmt_cap; TYPE_1__* fmt_out; } ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int num_planes; int pixfmt; } ;
struct TYPE_3__ {unsigned int num_planes; int pixfmt; } ;


 int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct venus_inst* FUNC_1 (struct vb2_queue*) ;
 int FUNC_2 (struct venus_inst*,unsigned int*) ;
 unsigned int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4[], struct device *VAR_5[])
{
 struct venus_inst *VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7, VAR_8 = 4;
 int VAR_9 = 0;

 if (*VAR_3) {
  if (VAR_1->type == 128 &&
      *VAR_3 != VAR_6->fmt_out->num_planes)
   return -VAR_0;

  if (VAR_1->type == 129 &&
      *VAR_3 != VAR_6->fmt_cap->num_planes)
   return -VAR_0;

  if (VAR_1->type == 128 &&
      VAR_4[0] < VAR_6->input_buf_size)
   return -VAR_0;

  if (VAR_1->type == 129 &&
      VAR_4[0] < VAR_6->output_buf_size)
   return -VAR_0;

  return 0;
 }

 switch (VAR_1->type) {
 case 128:
  *VAR_3 = VAR_6->fmt_out->num_planes;

  VAR_9 = FUNC_2(VAR_6, &VAR_7);
  if (VAR_9)
   break;

  VAR_7 = FUNC_0(VAR_7, VAR_8);
  *VAR_2 = FUNC_0(*VAR_2, VAR_7);
  VAR_6->num_input_bufs = *VAR_2;

  VAR_4[0] = FUNC_3(VAR_6->fmt_out->pixfmt,
          VAR_6->width,
          VAR_6->height);
  VAR_6->input_buf_size = VAR_4[0];
  break;
 case 129:
  *VAR_3 = VAR_6->fmt_cap->num_planes;
  *VAR_2 = FUNC_0(*VAR_2, VAR_8);
  VAR_6->num_output_bufs = *VAR_2;
  VAR_4[0] = FUNC_3(VAR_6->fmt_cap->pixfmt,
          VAR_6->width,
          VAR_6->height);
  VAR_4[0] = FUNC_0(VAR_4[0], VAR_6->output_buf_size);
  VAR_6->output_buf_size = VAR_4[0];
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;
}
