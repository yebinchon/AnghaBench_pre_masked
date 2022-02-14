
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct otm3225a_data {struct lcd_device* ld; struct spi_device* spi; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct lcd_device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct otm3225a_data*) ;
 struct otm3225a_data* FUNC_6 (struct device*,int,int ) ;
 struct lcd_device* FUNC_7 (struct device*,int ,struct device*,struct otm3225a_data*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct spi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_5)
{
 struct otm3225a_data *VAR_6;
 struct lcd_device *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 VAR_6 = FUNC_6(VAR_8, sizeof(struct otm3225a_data), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_8, FUNC_4(VAR_8), VAR_8, VAR_6,
          &VAR_4);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6->spi = VAR_5;
 VAR_6->ld = VAR_7;
 FUNC_5(VAR_8, VAR_6);

 FUNC_3(VAR_8, "Initializing and switching to RGB interface");
 FUNC_8(VAR_5, VAR_3, FUNC_0(VAR_3));
 FUNC_8(VAR_5, VAR_2,
         FUNC_0(VAR_2));
 return 0;
}
