
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
typedef enum mantisse { ____Placeholder_mantisse } mantisse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;



 int FUNC_1 (struct spi_device*,int) ;
 int FUNC_2 (struct spi_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_5, u8 VAR_6,
         enum mantisse VAR_7, u8 VAR_8)
{
 u8 VAR_9;


 if (VAR_8 > 7) {
  FUNC_0(&VAR_5->dev, "set: illegal input param");
  return -VAR_3;
 }

 if ((VAR_7 != 130) &&
     (VAR_7 != 129) &&
     (VAR_7 != 128)) {
  FUNC_0(&VAR_5->dev, "set: illegal input param");
  return -VAR_3;
 }


 VAR_9 = FUNC_1(VAR_5, VAR_6);


 VAR_9 = VAR_9 & VAR_4;


 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_9 | VAR_0;
  break;
 case 129:
  VAR_9 = VAR_9 | VAR_1;
  break;
 case 128:
  VAR_9 = VAR_9 | VAR_2;
  break;
 }


 VAR_9 = VAR_9 | VAR_8;


 return FUNC_2(VAR_5, VAR_6, VAR_9);
}
