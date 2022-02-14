
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_spi {unsigned int* rx; int bytes_per_word; size_t count; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct altera_spi *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1->base + VAR_0);
 if (VAR_1->rx) {
  switch (VAR_1->bytes_per_word) {
  case 1:
   VAR_1->rx[VAR_1->count] = VAR_2;
   break;
  case 2:
   VAR_1->rx[VAR_1->count * 2] = VAR_2;
   VAR_1->rx[VAR_1->count * 2 + 1] = VAR_2 >> 8;
   break;
  }
 }

 VAR_1->count++;
}
