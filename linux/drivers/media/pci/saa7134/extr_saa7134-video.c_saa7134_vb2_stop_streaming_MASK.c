
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct saa7134_dev {int qos_request; int video_vbq; struct saa7134_dmaqueue vbi_q; int vbi_vbq; struct saa7134_dmaqueue video_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct saa7134_dev*,struct saa7134_dmaqueue*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vb2_queue *VAR_0)
{
 struct saa7134_dmaqueue *VAR_1 = VAR_0->drv_priv;
 struct saa7134_dev *VAR_2 = VAR_1->dev;

 FUNC_1(VAR_2, VAR_1);

 if ((VAR_1 == &VAR_2->video_q && !FUNC_2(&VAR_2->vbi_vbq)) ||
     (VAR_1 == &VAR_2->vbi_q && !FUNC_2(&VAR_2->video_vbq)))
  FUNC_0(&VAR_2->qos_request);
}
