
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; } ;
struct media_link {int dummy; } ;
struct imx7_csi {int is_csi2; int lock; struct v4l2_fwnode_endpoint upstream_ep; int sd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct imx7_csi*,struct v4l2_fwnode_endpoint*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 struct imx7_csi* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1,
          struct media_link *VAR_2,
          struct v4l2_subdev_format *VAR_3,
          struct v4l2_subdev_format *VAR_4)
{
 struct imx7_csi *VAR_5 = FUNC_4(VAR_1);
 struct v4l2_fwnode_endpoint VAR_6 = {};
 int VAR_7;

 VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_5, &VAR_6, 1);
 if (VAR_7) {
  FUNC_3(&VAR_5->sd, "failed to find upstream endpoint\n");
  return VAR_7;
 }

 FUNC_1(&VAR_5->lock);

 VAR_5->upstream_ep = VAR_6;
 VAR_5->is_csi2 = (VAR_6.bus_type == VAR_0);

 FUNC_2(&VAR_5->lock);

 return 0;
}
