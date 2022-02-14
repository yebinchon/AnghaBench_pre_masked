
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_video_dev {int dummy; } ;
struct capture_priv {int ctrl_hdlr; } ;


 struct capture_priv* FUNC_0 (struct imx_media_video_dev*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct imx_media_video_dev *VAR_0)
{
 struct capture_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->ctrl_hdlr);
}
