
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_device {int mode; int max_speed_hz; } ;
struct spi_controller {int dummy; } ;
struct rspi_data {int sppcr; int spcmd; int max_speed_hz; } ;


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
 int FUNC_0 (struct rspi_data*,struct spi_message*) ;
 int FUNC_1 (struct rspi_data*,int ) ;
 int FUNC_2 (struct rspi_data*,int,int ) ;
 int FUNC_3 (struct rspi_data*,int) ;
 struct rspi_data* FUNC_4 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_13,
    struct spi_message *VAR_14)
{
 struct rspi_data *VAR_15 = FUNC_4(VAR_13);
 struct spi_device *VAR_16 = VAR_14->spi;
 int VAR_17;

 VAR_15->max_speed_hz = VAR_16->max_speed_hz;

 VAR_15->spcmd = VAR_3;
 if (VAR_16->mode & VAR_6)
  VAR_15->spcmd |= VAR_2;
 if (VAR_16->mode & VAR_5)
  VAR_15->spcmd |= VAR_1;


 VAR_15->sppcr = 0;
 if (VAR_16->mode & VAR_7)
  VAR_15->sppcr |= VAR_12;

 FUNC_3(VAR_15, 8);

 if (VAR_14->spi->mode &
     (VAR_10 | VAR_11 | VAR_8 | VAR_9)) {

  VAR_17 = FUNC_0(VAR_15, VAR_14);
  if (VAR_17 < 0)
   return VAR_17;
 }


 FUNC_2(VAR_15, FUNC_1(VAR_15, VAR_0) | VAR_4, VAR_0);
 return 0;
}
