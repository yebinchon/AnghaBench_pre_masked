
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct csi_priv {int stream_count; int lock; int dev; int sink; int src_sd; } ;


 int VAR_0 ;
 int FUNC_0 (struct csi_priv*) ;
 int FUNC_1 (struct csi_priv*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct csi_priv* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct csi_priv *VAR_3 = FUNC_5(VAR_1);
 int VAR_4 = 0;

 FUNC_3(&VAR_3->lock);

 if (!VAR_3->src_sd || !VAR_3->sink) {
  VAR_4 = -VAR_0;
  goto out;
 }





 if (VAR_3->stream_count != !VAR_2)
  goto update_count;

 if (VAR_2) {
  FUNC_2(VAR_3->dev, "stream ON\n");
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   goto out;
 } else {
  FUNC_2(VAR_3->dev, "stream OFF\n");
  FUNC_1(VAR_3);
 }

update_count:
 VAR_3->stream_count += VAR_2 ? 1 : -1;
 if (VAR_3->stream_count < 0)
  VAR_3->stream_count = 0;
out:
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
