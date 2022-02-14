
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int ctrl_hdlr; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vdic_priv* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct vdic_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->ctrl_hdlr);
}
