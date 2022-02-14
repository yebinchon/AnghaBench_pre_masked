
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct prp_priv {int ctrl_hdlr; int vdev; } ;


 int FUNC_0 (int ) ;
 struct prp_priv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct prp_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->vdev);
 FUNC_2(&VAR_1->ctrl_hdlr);
}
