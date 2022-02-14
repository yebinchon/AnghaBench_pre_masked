
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct imx_media_video_dev {int dummy; } ;
struct csi_priv {int sd; struct imx_media_video_dev* vdev; } ;


 int VAR_0 ;
 struct csi_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct imx_media_video_dev*) ;
 struct csi_priv* VAR_1 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct csi_priv *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct imx_media_video_dev *VAR_4 = VAR_3->vdev;

 FUNC_2(&VAR_3->sd, "EOF timeout\n");


 FUNC_1(VAR_4);
}
