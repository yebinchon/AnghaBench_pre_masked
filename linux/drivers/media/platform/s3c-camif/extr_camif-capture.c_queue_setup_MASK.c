
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct camif_frame {int f_width; int f_height; } ;
struct camif_vp {struct camif_fmt* out_fmt; struct camif_frame out_frame; } ;
struct camif_fmt {int depth; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 struct camif_vp* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct camif_vp *VAR_6 = FUNC_1(VAR_1);
 struct camif_frame *VAR_7 = &VAR_6->out_frame;
 const struct camif_fmt *VAR_8 = VAR_6->out_fmt;
 unsigned int VAR_9;

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_9 = (VAR_7->f_width * VAR_7->f_height * VAR_8->depth) / 8;

 if (*VAR_3)
  return VAR_4[0] < VAR_9 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_9;

 FUNC_0("size: %u\n", VAR_4[0]);
 return 0;
}
