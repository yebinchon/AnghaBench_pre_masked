
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct rcar_csi2 {int stream_count; int lock; int remote; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rcar_csi2*) ;
 int FUNC_3 (struct rcar_csi2*) ;
 struct rcar_csi2* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct rcar_csi2 *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);

 if (!VAR_3->remote) {
  VAR_4 = -VAR_0;
  goto out;
 }

 if (VAR_2 && VAR_3->stream_count == 0) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   goto out;
 } else if (!VAR_2 && VAR_3->stream_count == 1) {
  FUNC_3(VAR_3);
 }

 VAR_3->stream_count += VAR_2 ? 1 : -1;
out:
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
