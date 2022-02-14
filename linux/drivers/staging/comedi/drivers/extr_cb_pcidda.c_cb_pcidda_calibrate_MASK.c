
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidda_private* private; } ;
struct cb_pcidda_private {unsigned int* ao_range; unsigned int* eeprom_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,unsigned int,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 struct cb_pcidda_private *VAR_7 = VAR_4->private;
 unsigned int VAR_8 = VAR_5 / 2;
 unsigned int VAR_9 = 4 * (VAR_5 % 2);
 unsigned int VAR_10 = 2 * VAR_6 + 12 * VAR_5;
 unsigned int VAR_11;
 unsigned int VAR_12;


 VAR_7->ao_range[VAR_5] = VAR_6;


 VAR_11 = VAR_7->eeprom_data[0x7 + VAR_10];
 VAR_12 = VAR_7->eeprom_data[0x8 + VAR_10];


 FUNC_0(VAR_4, VAR_8, VAR_9 + VAR_1,
          (VAR_11 >> 8) & 0xff);
 FUNC_0(VAR_4, VAR_8, VAR_9 + VAR_3,
          VAR_11 & 0xff);
 FUNC_0(VAR_4, VAR_8, VAR_9 + VAR_0,
          (VAR_12 >> 8) & 0xff);
 FUNC_0(VAR_4, VAR_8, VAR_9 + VAR_2,
          VAR_12 & 0xff);
}
