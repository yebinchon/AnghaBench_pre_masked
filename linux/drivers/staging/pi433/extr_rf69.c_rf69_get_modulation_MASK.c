
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
typedef enum modulation { ____Placeholder_modulation } modulation ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct spi_device*,int ) ;

__attribute__((used)) static enum modulation FUNC_1(struct spi_device *VAR_5)
{
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3);

 switch (VAR_6 & VAR_1) {
 case 128:
  return VAR_2;
 case 129:
  return VAR_0;
 default:
  return VAR_4;
 }
}
