
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct csi_priv {scalar_t__ csi; scalar_t__ fim; int vdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct csi_priv* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct csi_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->vdev);

 if (VAR_1->fim)
  FUNC_1(VAR_1->fim);

 if (VAR_1->csi)
  FUNC_2(VAR_1->csi);
}
