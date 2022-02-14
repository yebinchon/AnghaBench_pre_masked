
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int stream_count; int lock; int ipu_dev; int src; scalar_t__ csi_direct; int sink_sd; } ;
struct v4l2_subdev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 struct v4l2_subdev* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 struct vdic_priv* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,int) ;
 int FUNC_6 (struct vdic_priv*) ;
 int FUNC_7 (struct vdic_priv*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct vdic_priv *VAR_6 = FUNC_4(VAR_4);
 struct v4l2_subdev *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_2(&VAR_6->lock);

 if (!VAR_6->src || !VAR_6->sink_sd) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_6->csi_direct)
  VAR_7 = FUNC_1(VAR_6->src);





 if (VAR_6->stream_count != !VAR_5)
  goto update_count;

 FUNC_0(VAR_6->ipu_dev, "%s: stream %s\n", VAR_4->name,
  VAR_5 ? "ON" : "OFF");

 if (VAR_5)
  VAR_8 = FUNC_6(VAR_6);
 else
  FUNC_7(VAR_6);
 if (VAR_8)
  goto out;

 if (VAR_7) {

  VAR_8 = FUNC_5(VAR_7, VAR_3, VAR_2, VAR_5);
  VAR_8 = (VAR_8 && VAR_8 != -VAR_0) ? VAR_8 : 0;
  if (VAR_8) {
   if (VAR_5)
    FUNC_7(VAR_6);
   goto out;
  }
 }

update_count:
 VAR_6->stream_count += VAR_5 ? 1 : -1;
 if (VAR_6->stream_count < 0)
  VAR_6->stream_count = 0;
out:
 FUNC_3(&VAR_6->lock);
 return VAR_8;
}
