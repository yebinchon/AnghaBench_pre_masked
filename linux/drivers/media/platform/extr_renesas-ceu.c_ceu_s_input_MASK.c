
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct ceu_subdev {int v4l2_sd; } ;
struct ceu_device {unsigned int num_sd; unsigned int sd_index; struct ceu_subdev* sd; struct ceu_subdev* subdevs; int vb2_vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceu_device*) ;
 int FUNC_1 (struct ceu_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ceu_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct ceu_device *VAR_7 = FUNC_4(VAR_4);
 struct ceu_subdev *VAR_8;
 int VAR_9;

 if (VAR_6 >= VAR_7->num_sd)
  return -VAR_1;

 if (FUNC_3(&VAR_7->vb2_vq))
  return -VAR_0;

 if (VAR_6 == VAR_7->sd_index)
  return 0;

 VAR_8 = VAR_7->sd;
 VAR_7->sd = &VAR_7->subdevs[VAR_6];





 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9) {
  VAR_7->sd = VAR_8;
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9) {
  VAR_7->sd = VAR_8;
  return -VAR_1;
 }


 FUNC_2(VAR_8->v4l2_sd, VAR_2, VAR_3, 0);
 FUNC_2(VAR_7->sd->v4l2_sd, VAR_2, VAR_3, 1);

 VAR_7->sd_index = VAR_6;

 return 0;
}
