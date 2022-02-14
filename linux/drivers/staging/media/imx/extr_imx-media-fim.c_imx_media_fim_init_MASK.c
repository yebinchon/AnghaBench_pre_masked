
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dev; } ;
struct imx_media_fim {int lock; struct v4l2_subdev* sd; } ;


 int VAR_0 ;
 struct imx_media_fim* FUNC_0 (int) ;
 int VAR_1 ;
 struct imx_media_fim* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct imx_media_fim*) ;
 int FUNC_3 (int *) ;

struct imx_media_fim *FUNC_4(struct v4l2_subdev *VAR_2)
{
 struct imx_media_fim *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->sd = VAR_2;

 FUNC_3(&VAR_3->lock);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 return VAR_3;
}
