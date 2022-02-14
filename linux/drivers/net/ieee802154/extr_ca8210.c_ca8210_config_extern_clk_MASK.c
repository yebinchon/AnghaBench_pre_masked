
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct ca8210_platform_data {int extclockfreq; int extclockgpio; } ;



 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int,int*,struct spi_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
 struct ca8210_platform_data *VAR_2,
 struct spi_device *VAR_3,
 bool VAR_4
)
{
 u8 VAR_5[2];

 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "Switching external clock on\n");
  switch (VAR_2->extclockfreq) {
  case 129:
   VAR_5[0] = 1;
   break;
  case 132:
   VAR_5[0] = 2;
   break;
  case 131:
   VAR_5[0] = 3;
   break;
  case 128:
   VAR_5[0] = 4;
   break;
  case 130:
   VAR_5[0] = 5;
   break;
  default:
   FUNC_0(&VAR_3->dev, "Invalid extclock-freq\n");
   return -VAR_0;
  }
  VAR_5[1] = VAR_2->extclockgpio;
 } else {
  FUNC_1(&VAR_3->dev, "Switching external clock off\n");
  VAR_5[0] = 0;
  VAR_5[1] = 0;
 }
 return FUNC_3(
  FUNC_2(VAR_1, 2, VAR_5, VAR_3)
 );
}
