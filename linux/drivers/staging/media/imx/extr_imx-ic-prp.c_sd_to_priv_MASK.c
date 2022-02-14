
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct prp_priv {int dummy; } ;
struct imx_ic_priv {struct prp_priv* task_priv; } ;


 struct imx_ic_priv* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static inline struct prp_priv *FUNC_1(struct v4l2_subdev *VAR_0)
{
 struct imx_ic_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->task_priv;
}
