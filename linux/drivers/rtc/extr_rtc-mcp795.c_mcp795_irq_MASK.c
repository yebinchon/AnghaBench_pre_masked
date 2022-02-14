
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct mutex {int dummy; } ;
struct rtc_device {struct mutex ops_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct rtc_device*,int,int) ;
 struct rtc_device* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct spi_device *VAR_5 = VAR_4;
 struct rtc_device *VAR_6 = FUNC_5(VAR_5);
 struct mutex *VAR_7 = &VAR_6->ops_lock;
 int VAR_8;

 FUNC_2(VAR_7);





 VAR_8 = FUNC_1(&VAR_5->dev, 0);
 if (VAR_8)
  FUNC_0(&VAR_5->dev,
   "Failed to disable alarm in IRQ (ret=%d)\n", VAR_8);
 FUNC_4(VAR_6, 1, VAR_1 | VAR_2);

 FUNC_3(VAR_7);

 return VAR_0;
}
