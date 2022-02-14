
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lantiq_ssc_spi {int work; int wq; TYPE_2__* master; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* cur_msg; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lantiq_ssc_spi*,int ,int ,int ) ;
 int FUNC_2 (struct lantiq_ssc_spi*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_13, void *VAR_14)
{
 struct lantiq_ssc_spi *VAR_15 = VAR_14;
 u32 VAR_16 = FUNC_2(VAR_15, VAR_3);

 if (!(VAR_16 & VAR_5))
  return VAR_2;

 if (VAR_16 & VAR_8)
  FUNC_0(VAR_15->dev, "receive underflow error\n");
 if (VAR_16 & VAR_10)
  FUNC_0(VAR_15->dev, "transmit underflow error\n");
 if (VAR_16 & VAR_4)
  FUNC_0(VAR_15->dev, "abort error\n");
 if (VAR_16 & VAR_7)
  FUNC_0(VAR_15->dev, "receive overflow error\n");
 if (VAR_16 & VAR_9)
  FUNC_0(VAR_15->dev, "transmit overflow error\n");
 if (VAR_16 & VAR_6)
  FUNC_0(VAR_15->dev, "mode error\n");


 FUNC_1(VAR_15, 0, VAR_12, VAR_11);


 if (VAR_15->master->cur_msg)
  VAR_15->master->cur_msg->status = -VAR_0;
 FUNC_3(VAR_15->wq, &VAR_15->work);

 return VAR_1;
}
