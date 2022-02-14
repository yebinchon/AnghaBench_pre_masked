
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct prp_priv {struct imx_ic_priv* ic_priv; struct imx_media_video_dev* vdev; } ;
struct imx_media_video_dev {int dummy; } ;
struct imx_ic_priv {int sd; } ;


 int VAR_0 ;
 struct prp_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct imx_media_video_dev*) ;
 struct prp_priv* VAR_1 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct prp_priv *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct imx_media_video_dev *VAR_4 = VAR_3->vdev;
 struct imx_ic_priv *VAR_5 = VAR_3->ic_priv;

 FUNC_2(&VAR_5->sd, "EOF timeout\n");


 FUNC_1(VAR_4);
}
