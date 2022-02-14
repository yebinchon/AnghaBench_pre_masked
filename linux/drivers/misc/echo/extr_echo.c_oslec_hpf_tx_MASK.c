
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oslec_state {int adaption_mode; int tx_1; int tx_2; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;

int16_t FUNC_0(struct oslec_state *VAR_2, int16_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_2->adaption_mode & VAR_1) {
  VAR_4 = VAR_3 << 15;
  VAR_4 -= (VAR_4 >> 4);

  VAR_2->tx_1 += -(VAR_2->tx_1 >> VAR_0) + VAR_4 - VAR_2->tx_2;
  VAR_5 = VAR_2->tx_1 >> 15;
  if (VAR_5 > 32767)
   VAR_5 = 32767;
  if (VAR_5 < -32767)
   VAR_5 = -32767;
  VAR_3 = VAR_5;
  VAR_2->tx_2 = VAR_4;
 }

 return VAR_3;
}
