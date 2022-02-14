
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct saa7134_dev {int board; int empress_started; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vb2_queue*,unsigned int) ;
 int FUNC_1 (struct saa7134_dev*,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_3, unsigned int VAR_4)
{
 struct saa7134_dmaqueue *VAR_5 = VAR_3->drv_priv;
 struct saa7134_dev *VAR_6 = VAR_5->dev;
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;



 switch (VAR_6->board) {
 case 130:
 case 129:
 case 128:
  VAR_7 = 1;
  break;
 }
 FUNC_1(VAR_6, VAR_1, VAR_2, VAR_7);

 FUNC_3(VAR_0,
   FUNC_2(VAR_0) & ~(1 << 6));
 VAR_6->empress_started = 1;
 return 0;
}
