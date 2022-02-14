
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct imx7_csi {int is_streaming; int lock; int src_sd; int sink; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx7_csi*) ;
 int FUNC_1 (struct imx7_csi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 struct imx7_csi* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct imx7_csi *VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = 0;

 FUNC_2(&VAR_5->lock);

 if (!VAR_5->src_sd || !VAR_5->sink) {
  VAR_6 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_5->is_streaming == !!VAR_4)
  goto out_unlock;

 if (VAR_4) {
  VAR_6 = FUNC_5(VAR_5->src_sd, VAR_2, VAR_1, 1);
  if (VAR_6 < 0)
   goto out_unlock;

  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 < 0) {
   FUNC_5(VAR_5->src_sd, VAR_2, VAR_1, 0);
   goto out_unlock;
  }
 } else {
  FUNC_1(VAR_5);

  FUNC_5(VAR_5->src_sd, VAR_2, VAR_1, 0);
 }

 VAR_5->is_streaming = !!VAR_4;

out_unlock:
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
