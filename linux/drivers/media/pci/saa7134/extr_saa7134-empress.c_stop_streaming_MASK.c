
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct saa7134_dev {scalar_t__ empress_started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vb2_queue*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_2)
{
 struct saa7134_dmaqueue *VAR_3 = VAR_2->drv_priv;
 struct saa7134_dev *VAR_4 = VAR_3->dev;

 FUNC_1(VAR_2);
 FUNC_3(VAR_1, 0x00);
 FUNC_0(20);
 FUNC_3(VAR_1, 0x01);
 FUNC_0(100);

 FUNC_3(VAR_0,
   FUNC_2(VAR_0) | (1 << 6));
 VAR_4->empress_started = 0;
}
