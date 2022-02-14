
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct otm3225a_spi_instruction {unsigned char reg; int value; scalar_t__ delay; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct spi_device*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_2,
      struct otm3225a_spi_instruction *VAR_3,
      unsigned int VAR_4)
{
 unsigned char VAR_5[3];

 while (VAR_4--) {

  VAR_5[0] = VAR_1;
  VAR_5[1] = 0x00;
  VAR_5[2] = VAR_3->reg;
  FUNC_1(VAR_2, VAR_5, 3);


  VAR_5[0] = VAR_0;
  VAR_5[1] = (VAR_3->value >> 8) & 0xff;
  VAR_5[2] = VAR_3->value & 0xff;
  FUNC_1(VAR_2, VAR_5, 3);


  if (VAR_3->delay)
   FUNC_0(VAR_3->delay);
  VAR_3++;
 }
}
