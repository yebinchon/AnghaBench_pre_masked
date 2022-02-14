
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int modalias; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,char*,int ) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 const struct spi_device *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_1 - 1);
 if (VAR_7 != -VAR_0)
  return VAR_7;

 return FUNC_1(VAR_5, "%s%s\n", VAR_2, VAR_6->modalias);
}
