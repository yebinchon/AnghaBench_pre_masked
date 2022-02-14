
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* master; } ;
struct davinci_spi {scalar_t__ version; TYPE_3__ bitbang; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct davinci_spi *VAR_11, int VAR_12)
{
 struct device *VAR_13 = VAR_11->bitbang.master->dev.parent;

 if (VAR_12 & VAR_9) {
  FUNC_0(VAR_13, "SPI Time-out Error\n");
  return -VAR_2;
 }
 if (VAR_12 & VAR_5) {
  FUNC_0(VAR_13, "SPI Desynchronization Error\n");
  return -VAR_1;
 }
 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_13, "SPI Bit error\n");
  return -VAR_1;
 }

 if (VAR_11->version == VAR_10) {
  if (VAR_12 & VAR_6) {
   FUNC_0(VAR_13, "SPI Data Length Error\n");
   return -VAR_1;
  }
  if (VAR_12 & VAR_8) {
   FUNC_0(VAR_13, "SPI Parity Error\n");
   return -VAR_1;
  }
  if (VAR_12 & VAR_7) {
   FUNC_0(VAR_13, "SPI Data Overrun error\n");
   return -VAR_1;
  }
  if (VAR_12 & VAR_4) {
   FUNC_0(VAR_13, "SPI Buffer Init Active\n");
   return -VAR_0;
  }
 }

 return 0;
}
