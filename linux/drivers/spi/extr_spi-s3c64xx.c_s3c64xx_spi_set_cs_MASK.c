
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int master; } ;
struct s3c64xx_spi_driver_data {scalar_t__ regs; TYPE_2__* port_conf; TYPE_1__* cntrlr_info; } ;
struct TYPE_4__ {int quirks; } ;
struct TYPE_3__ {scalar_t__ no_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct s3c64xx_spi_driver_data* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_5, bool VAR_6)
{
 struct s3c64xx_spi_driver_data *VAR_7 =
     FUNC_1(VAR_5->master);

 if (VAR_7->cntrlr_info->no_cs)
  return;

 if (VAR_6) {
  if (!(VAR_7->port_conf->quirks & VAR_0)) {
   FUNC_2(0, VAR_7->regs + VAR_3);
  } else {
   u32 VAR_8 = FUNC_0(VAR_7->regs + VAR_3);

   VAR_8 |= (VAR_1 |
      VAR_2);
   FUNC_2(VAR_8, VAR_7->regs + VAR_3);
  }
 } else {
  if (!(VAR_7->port_conf->quirks & VAR_0))
   FUNC_2(VAR_4,
          VAR_7->regs + VAR_3);
 }
}
