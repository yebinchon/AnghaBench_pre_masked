
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;


 int FUNC_0 (struct saa7134_dev*,struct saa7134_dmaqueue*) ;
 int FUNC_1 (struct saa7134_dev*) ;

void FUNC_2(struct vb2_queue *VAR_0)
{
 struct saa7134_dmaqueue *VAR_1 = VAR_0->drv_priv;
 struct saa7134_dev *VAR_2 = VAR_1->dev;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_1);
}
