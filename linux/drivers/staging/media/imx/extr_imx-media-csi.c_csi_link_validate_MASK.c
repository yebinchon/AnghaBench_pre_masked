
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_fwnode_endpoint {int bus_type; } ;
struct media_link {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct csi_priv {int lock; int csi_id; int ipu; int * format_mbus; int csi; TYPE_1__ sd; struct v4l2_fwnode_endpoint upstream_ep; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct csi_priv*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct v4l2_fwnode_endpoint*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 struct csi_priv* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_1,
        struct media_link *VAR_2,
        struct v4l2_subdev_format *VAR_3,
        struct v4l2_subdev_format *VAR_4)
{
 struct csi_priv *VAR_5 = FUNC_8(VAR_1);
 struct v4l2_fwnode_endpoint VAR_6 = { .bus_type = 0 };
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_1, VAR_2,
      VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_8) {
  FUNC_7(&VAR_5->sd, "failed to find upstream endpoint\n");
  return VAR_8;
 }

 FUNC_5(&VAR_5->lock);

 VAR_5->upstream_ep = VAR_6;
 VAR_7 = !FUNC_4(&VAR_6);
 if (VAR_7) {
  int VAR_9 = 0;
  FUNC_2(VAR_5->csi, VAR_9,
       &VAR_5->format_mbus[VAR_0]);
 }


 FUNC_3(VAR_5->ipu, VAR_5->csi_id, VAR_7);

 FUNC_6(&VAR_5->lock);
 return VAR_8;
}
