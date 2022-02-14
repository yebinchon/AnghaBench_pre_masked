
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_controller {int bits_per_word_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct spi_controller *VAR_1,
     u8 VAR_2)
{
 if (VAR_1->bits_per_word_mask) {

  if (VAR_2 > 32)
   return -VAR_0;
  if (!(VAR_1->bits_per_word_mask & FUNC_0(VAR_2)))
   return -VAR_0;
 }

 return 0;
}
