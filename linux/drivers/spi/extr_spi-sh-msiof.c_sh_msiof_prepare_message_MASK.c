
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_device {int chip_select; int mode; scalar_t__ cs_gpiod; } ;
struct spi_controller {int dummy; } ;
struct sh_msiof_spi_priv {int unused_ss; int native_cs_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sh_msiof_spi_priv*,int,int,int,int,int,int) ;
 struct sh_msiof_spi_priv* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_5,
        struct spi_message *VAR_6)
{
 struct sh_msiof_spi_priv *VAR_7 = FUNC_1(VAR_5);
 const struct spi_device *VAR_8 = VAR_6->spi;
 u32 VAR_9, VAR_10;


 if (VAR_8->cs_gpiod) {
  VAR_9 = VAR_7->unused_ss;
  VAR_10 = VAR_7->native_cs_high;
 } else {
  VAR_9 = VAR_8->chip_select;
  VAR_10 = !!(VAR_8->mode & VAR_3);
 }
 FUNC_0(VAR_7, VAR_9, !!(VAR_8->mode & VAR_2),
      !!(VAR_8->mode & VAR_1),
      !!(VAR_8->mode & VAR_0),
      !!(VAR_8->mode & VAR_4), VAR_10);
 return 0;
}
