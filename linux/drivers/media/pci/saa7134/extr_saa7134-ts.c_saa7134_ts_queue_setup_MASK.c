
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct TYPE_2__ {int nr_packets; unsigned int nr_bufs; } ;
struct saa7134_dev {TYPE_1__ ts; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;

int FUNC_1(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct saa7134_dmaqueue *VAR_6 = VAR_1->drv_priv;
 struct saa7134_dev *VAR_7 = VAR_6->dev;
 int VAR_8 = VAR_0 * VAR_7->ts.nr_packets;

 if (0 == *VAR_2)
  *VAR_2 = VAR_7->ts.nr_bufs;
 *VAR_2 = FUNC_0(VAR_8, *VAR_2);
 if (*VAR_2 < 3)
  *VAR_2 = 3;
 *VAR_3 = 1;
 VAR_4[0] = VAR_8;
 return 0;
}
