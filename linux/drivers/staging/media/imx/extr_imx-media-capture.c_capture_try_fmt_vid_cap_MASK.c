
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_format {int which; int pad; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int src_sd_pad; } ;


 int VAR_0 ;
 int FUNC_0 (struct capture_priv*,struct v4l2_subdev_format*,struct v4l2_format*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct capture_priv* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
       struct v4l2_format *VAR_5)
{
 struct capture_priv *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_subdev_format VAR_7;
 int VAR_8;

 VAR_7.pad = VAR_6->src_sd_pad;
 VAR_7.which = VAR_0;
 VAR_8 = FUNC_1(VAR_6->src_sd, VAR_2, VAR_1, ((void*)0), &VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_6, &VAR_7, VAR_5, ((void*)0), ((void*)0));
}
