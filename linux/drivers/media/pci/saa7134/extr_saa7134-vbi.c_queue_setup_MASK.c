
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct saa7134_dev {int vbi_vlen; int vbi_hlen; TYPE_1__* tvnorm; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int vbi_v_stop_0; int vbi_v_start_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      unsigned int VAR_5[], struct device *VAR_6[])
{
 struct saa7134_dmaqueue *VAR_7 = VAR_2->drv_priv;
 struct saa7134_dev *VAR_8 = VAR_7->dev;
 unsigned int VAR_9;

 VAR_8->vbi_vlen = VAR_8->tvnorm->vbi_v_stop_0 - VAR_8->tvnorm->vbi_v_start_0 + 1;
 if (VAR_8->vbi_vlen > VAR_0)
  VAR_8->vbi_vlen = VAR_0;
 VAR_8->vbi_hlen = VAR_1;
 VAR_9 = VAR_8->vbi_hlen * VAR_8->vbi_vlen * 2;

 *VAR_3 = FUNC_0(VAR_9, *VAR_3);
 *VAR_4 = 1;
 VAR_5[0] = VAR_9;
 return 0;
}
