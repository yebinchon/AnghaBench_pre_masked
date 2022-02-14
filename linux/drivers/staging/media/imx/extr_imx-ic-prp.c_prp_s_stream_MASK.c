
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct prp_priv {int stream_count; int lock; int src_sd; int sink_sd_prpvf; int sink_sd_prpenc; } ;
struct imx_ic_priv {int ipu_dev; struct prp_priv* task_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct prp_priv*) ;
 int FUNC_4 (struct prp_priv*) ;
 int VAR_2 ;
 struct imx_ic_priv* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct imx_ic_priv *VAR_6 = FUNC_5(VAR_4);
 struct prp_priv *VAR_7 = VAR_6->task_priv;
 int VAR_8 = 0;

 FUNC_1(&VAR_7->lock);

 if (!VAR_7->src_sd || (!VAR_7->sink_sd_prpenc && !VAR_7->sink_sd_prpvf)) {
  VAR_8 = -VAR_1;
  goto out;
 }





 if (VAR_7->stream_count != !VAR_5)
  goto update_count;

 FUNC_0(VAR_6->ipu_dev, "%s: stream %s\n", VAR_4->name,
  VAR_5 ? "ON" : "OFF");

 if (VAR_5)
  VAR_8 = FUNC_3(VAR_7);
 else
  FUNC_4(VAR_7);
 if (VAR_8)
  goto out;


 VAR_8 = FUNC_6(VAR_7->src_sd, VAR_3, VAR_2, VAR_5);
 VAR_8 = (VAR_8 && VAR_8 != -VAR_0) ? VAR_8 : 0;
 if (VAR_8) {
  if (VAR_5)
   FUNC_4(VAR_7);
  goto out;
 }

update_count:
 VAR_7->stream_count += VAR_5 ? 1 : -1;
 if (VAR_7->stream_count < 0)
  VAR_7->stream_count = 0;
out:
 FUNC_2(&VAR_7->lock);
 return VAR_8;
}
