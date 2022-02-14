
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vivid_dev {int std_out; int has_sliced_vbi_out; } ;
struct v4l2_sliced_vbi_format {int service_set; } ;
struct TYPE_2__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct v4l2_sliced_vbi_format*,int) ;
 int FUNC_2 (struct vivid_dev*) ;

int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct vivid_dev *VAR_8 = FUNC_0(VAR_5);
 struct v4l2_sliced_vbi_format *VAR_9 = &VAR_7->fmt.sliced;
 bool VAR_10 = VAR_8->std_out & VAR_4;
 u32 VAR_11 = VAR_9->service_set;

 if (!FUNC_2(VAR_8) || !VAR_8->has_sliced_vbi_out)
  return -VAR_0;

 VAR_11 &= VAR_10 ? VAR_1 :
     VAR_3 | VAR_2;
 FUNC_1(VAR_9, VAR_11);
 return 0;
}
