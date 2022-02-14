
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_video_dev {int list; } ;
struct imx_media_dev {int mutex; int vdev_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct imx_media_dev *VAR_0,
    struct imx_media_video_dev *VAR_1)
{
 FUNC_1(&VAR_0->mutex);

 FUNC_0(&VAR_1->list, &VAR_0->vdev_list);

 FUNC_2(&VAR_0->mutex);
}
