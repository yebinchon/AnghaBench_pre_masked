
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int flags; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct v4l2_fh {int wait; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct poll_table_struct*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct v4l2_fh*) ;
 int FUNC_4 (struct file*,struct v4l2_m2m_ctx*,struct poll_table_struct*) ;
 struct video_device* FUNC_5 (struct file*) ;

__poll_t FUNC_6(struct file *VAR_6, struct v4l2_m2m_ctx *VAR_7,
         struct poll_table_struct *VAR_8)
{
 struct video_device *VAR_9 = FUNC_5(VAR_6);
 __poll_t VAR_10 = FUNC_0(VAR_8);
 __poll_t VAR_11 = 0;

 if (VAR_10 & (VAR_1 | VAR_4 | VAR_0 | VAR_3))
  VAR_11 = FUNC_4(VAR_6, VAR_7, VAR_8);

 if (FUNC_2(VAR_5, &VAR_9->flags)) {
  struct v4l2_fh *VAR_12 = VAR_6->private_data;

  FUNC_1(VAR_6, &VAR_12->wait, VAR_8);
  if (FUNC_3(VAR_12))
   VAR_11 |= VAR_2;
 }

 return VAR_11;
}
