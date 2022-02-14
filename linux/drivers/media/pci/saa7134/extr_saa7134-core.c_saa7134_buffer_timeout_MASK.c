
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct saa7134_dmaqueue {scalar_t__ curr; struct saa7134_dev* dev; } ;
struct saa7134_dev {int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct saa7134_dmaqueue* FUNC_1 (int ,struct timer_list*,int ) ;
 struct saa7134_dmaqueue* VAR_2 ;
 int FUNC_2 (struct saa7134_dev*,struct saa7134_dmaqueue*,int ) ;
 int FUNC_3 (struct saa7134_dev*,struct saa7134_dmaqueue*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_3 ;

void FUNC_7(struct timer_list *VAR_4)
{
 struct saa7134_dmaqueue *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct saa7134_dev *VAR_6 = VAR_5->dev;
 unsigned long VAR_7;

 FUNC_5(&VAR_6->slock, VAR_7);


 FUNC_4(VAR_0, 0x00);
 FUNC_4(VAR_0, 0x80);
 FUNC_4(VAR_0, 0x00);



 if (VAR_5->curr) {
  FUNC_0("timeout on %p\n", VAR_5->curr);
  FUNC_2(VAR_6, VAR_5, VAR_1);
 }
 FUNC_3(VAR_6, VAR_5);
 FUNC_6(&VAR_6->slock, VAR_7);
}
