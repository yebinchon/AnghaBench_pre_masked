
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {unsigned int input_buf_size; unsigned int num_input_bufs; unsigned int num_output_bufs; unsigned int output_buf_size; int lock; int codec_state; int height; int width; TYPE_2__* fmt_cap; int out_height; int out_width; TYPE_1__* fmt_out; } ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int num_planes; int pixfmt; } ;
struct TYPE_3__ {unsigned int num_planes; int pixfmt; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct venus_inst* FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (struct venus_inst*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct venus_inst*) ;
 unsigned int FUNC_6 (int ,int ,int ) ;
 unsigned int FUNC_7 (struct venus_inst*) ;

__attribute__((used)) static int FUNC_8(struct vb2_queue *VAR_3,
       unsigned int *VAR_4, unsigned int *VAR_5,
       unsigned int VAR_6[], struct device *VAR_7[])
{
 struct venus_inst *VAR_8 = FUNC_3(VAR_3);
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;

 if (*VAR_5) {
  unsigned int VAR_12 = FUNC_7(VAR_8);

  if (VAR_3->type == 128 &&
      *VAR_5 != VAR_8->fmt_out->num_planes)
   return -VAR_0;

  if (VAR_3->type == 129 &&
      *VAR_5 != VAR_8->fmt_cap->num_planes)
   return -VAR_0;

  if (VAR_3->type == 128 &&
      VAR_6[0] < VAR_8->input_buf_size)
   return -VAR_0;

  if (VAR_3->type == 129 &&
      VAR_6[0] < VAR_12)
   return -VAR_0;

  return 0;
 }

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_8, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_3->type) {
 case 128:
  *VAR_5 = VAR_8->fmt_out->num_planes;
  VAR_6[0] = FUNC_6(VAR_8->fmt_out->pixfmt,
          VAR_8->out_width,
          VAR_8->out_height);
  VAR_6[0] = FUNC_0(VAR_6[0], VAR_8->input_buf_size);
  VAR_8->input_buf_size = VAR_6[0];
  *VAR_4 = FUNC_0(*VAR_4, VAR_9);
  VAR_8->num_input_bufs = *VAR_4;
  VAR_8->num_output_bufs = VAR_10;
  break;
 case 129:
  *VAR_5 = VAR_8->fmt_cap->num_planes;
  VAR_6[0] = FUNC_6(VAR_8->fmt_cap->pixfmt,
          VAR_8->width,
          VAR_8->height);
  VAR_8->output_buf_size = VAR_6[0];
  *VAR_4 = FUNC_0(*VAR_4, VAR_10);
  VAR_8->num_output_bufs = *VAR_4;

  FUNC_1(&VAR_8->lock);
  if (VAR_8->codec_state == VAR_1)
   VAR_8->codec_state = VAR_2;
  FUNC_2(&VAR_8->lock);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
