
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_ppc4xx_cs {int mode; } ;
struct spi_device {int mode; struct spi_ppc4xx_cs* controller_state; int dev; int max_speed_hz; } ;


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
 int FUNC_0 (int *,char*) ;
 struct spi_ppc4xx_cs* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_12)
{
 struct spi_ppc4xx_cs *VAR_13 = VAR_12->controller_state;

 if (!VAR_12->max_speed_hz) {
  FUNC_0(&VAR_12->dev, "invalid max_speed_hz (must be non-zero)\n");
  return -VAR_0;
 }

 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_1(sizeof *VAR_13, VAR_2);
  if (!VAR_13)
   return -VAR_1;
  VAR_12->controller_state = VAR_13;
 }





 VAR_13->mode = VAR_11;

 switch (VAR_12->mode & (VAR_7 | VAR_8)) {
 case 131:
  VAR_13->mode |= VAR_3;
  break;
 case 130:
  VAR_13->mode |= VAR_4;
  break;
 case 129:
  VAR_13->mode |= VAR_5;
  break;
 case 128:
  VAR_13->mode |= VAR_6;
  break;
 }

 if (VAR_12->mode & VAR_9)
  VAR_13->mode |= VAR_10;

 return 0;
}
