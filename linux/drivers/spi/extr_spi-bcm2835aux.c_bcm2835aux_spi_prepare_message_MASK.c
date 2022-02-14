
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; } ;
struct bcm2835aux_spi {int* cntl; } ;


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
 int FUNC_0 (struct bcm2835aux_spi*,int ,int) ;
 struct bcm2835aux_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_10,
       struct spi_message *VAR_11)
{
 struct spi_device *VAR_12 = VAR_11->spi;
 struct bcm2835aux_spi *VAR_13 = FUNC_1(VAR_10);

 VAR_13->cntl[0] = VAR_2 |
        VAR_6 |
        VAR_4;
 VAR_13->cntl[1] = VAR_8;


 if (VAR_12->mode & VAR_9) {
  VAR_13->cntl[0] |= VAR_1;
  VAR_13->cntl[0] |= VAR_5;
 } else {
  VAR_13->cntl[0] |= VAR_3;
 }
 FUNC_0(VAR_13, VAR_7, VAR_13->cntl[1]);
 FUNC_0(VAR_13, VAR_0, VAR_13->cntl[0]);

 return 0;
}
