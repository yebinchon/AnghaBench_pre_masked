
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_geni_master {int fifo_width_bits; int cur_bits_per_word; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct spi_geni_master *VAR_1)
{





 if (VAR_1->fifo_width_bits % VAR_1->cur_bits_per_word)
  return FUNC_1(FUNC_0(VAR_1->cur_bits_per_word,
             VAR_0));

 return VAR_1->fifo_width_bits / VAR_0;
}
