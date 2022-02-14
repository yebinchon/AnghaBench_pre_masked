
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct ltv350qv {struct lcd_device* ld; void* buffer; int power; struct spi_device* spi; } ;
struct lcd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 void* FUNC_2 (int *,int,int ) ;
 struct lcd_device* FUNC_3 (int *,char*,int *,struct ltv350qv*,int *) ;
 int FUNC_4 (struct ltv350qv*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct spi_device*,struct ltv350qv*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_5)
{
 struct ltv350qv *VAR_6;
 struct lcd_device *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(struct ltv350qv), VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->spi = VAR_5;
 VAR_6->power = VAR_1;
 VAR_6->buffer = FUNC_2(&VAR_5->dev, 8, VAR_3);
 if (!VAR_6->buffer)
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_5->dev, "ltv350qv", &VAR_5->dev, VAR_6,
     &VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6->ld = VAR_7;

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_5(VAR_5, VAR_6);

 return 0;
}
