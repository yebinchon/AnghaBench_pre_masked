
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct vivid_dev {scalar_t__ std_out; int vb_vbi_out_q; int vb_vid_out_q; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vivid_dev*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_5))
  return -VAR_1;
 if (VAR_5->std_out == VAR_4)
  return 0;
 if (FUNC_0(&VAR_5->vb_vid_out_q) || FUNC_0(&VAR_5->vb_vbi_out_q))
  return -VAR_0;
 VAR_5->std_out = VAR_4;
 FUNC_3(VAR_5);
 return 0;
}
