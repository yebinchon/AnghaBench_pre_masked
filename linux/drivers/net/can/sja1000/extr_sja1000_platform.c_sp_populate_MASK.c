
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freq; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;
struct sja1000_priv {int write_reg; int read_reg; int cdr; int ocr; TYPE_2__ can; } ;
struct sja1000_platform_data {int osc_freq; int cdr; int ocr; } ;





 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct sja1000_priv *VAR_7,
   struct sja1000_platform_data *VAR_8,
   unsigned long VAR_9)
{

 VAR_7->can.clock.freq = VAR_8->osc_freq / 2;
 VAR_7->ocr = VAR_8->ocr;
 VAR_7->cdr = VAR_8->cdr;

 switch (VAR_9 & VAR_0) {
 case 129:
  VAR_7->read_reg = VAR_2;
  VAR_7->write_reg = VAR_5;
  break;
 case 130:
  VAR_7->read_reg = VAR_1;
  VAR_7->write_reg = VAR_4;
  break;
 case 128:
 default:
  VAR_7->read_reg = VAR_3;
  VAR_7->write_reg = VAR_6;
  break;
 }
}
