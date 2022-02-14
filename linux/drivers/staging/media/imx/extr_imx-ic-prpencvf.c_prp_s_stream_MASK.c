
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct prp_priv {int stream_count; int lock; int sink; int src_sd; } ;
struct imx_ic_priv {int ipu_dev; struct prp_priv* task_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct prp_priv*) ;
 int FUNC_4 (struct prp_priv*) ;
 struct imx_ic_priv* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct imx_ic_priv *VAR_3 = FUNC_5(VAR_1);
 struct prp_priv *VAR_4 = VAR_3->task_priv;
 int VAR_5 = 0;

 FUNC_1(&VAR_4->lock);

 if (!VAR_4->src_sd || !VAR_4->sink) {
  VAR_5 = -VAR_0;
  goto out;
 }





 if (VAR_4->stream_count != !VAR_2)
  goto update_count;

 FUNC_0(VAR_3->ipu_dev, "%s: stream %s\n", VAR_1->name,
  VAR_2 ? "ON" : "OFF");

 if (VAR_2)
  VAR_5 = FUNC_3(VAR_4);
 else
  FUNC_4(VAR_4);
 if (VAR_5)
  goto out;

update_count:
 VAR_4->stream_count += VAR_2 ? 1 : -1;
 if (VAR_4->stream_count < 0)
  VAR_4->stream_count = 0;
out:
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
