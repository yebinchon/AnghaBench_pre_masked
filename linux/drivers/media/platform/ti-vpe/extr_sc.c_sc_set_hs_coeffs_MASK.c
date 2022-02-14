
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sc_data {int load_coeff_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;

void FUNC_0(struct sc_data *VAR_7, void *VAR_8, unsigned int VAR_9,
  unsigned int VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;
 u16 *VAR_15 = VAR_8;
 const u16 *VAR_16;

 if (VAR_10 > VAR_9) {
  VAR_12 = VAR_2;
 } else {
  if ((VAR_10 << 1) < VAR_9)
   VAR_10 <<= 1;
  if ((VAR_10 << 1) < VAR_9)
   VAR_10 <<= 1;

  if (VAR_10 == VAR_9) {
   VAR_12 = VAR_0;
  } else {
   VAR_11 = (VAR_10 << 4) / VAR_9;
   if (VAR_11 < 8)
    VAR_11 = 8;
   VAR_12 = VAR_1 + VAR_11 - 8;
  }
 }

 VAR_16 = VAR_6[VAR_12];

 for (VAR_13 = 0; VAR_13 < VAR_4 * 2; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
   *VAR_15++ = *VAR_16++;






  VAR_15 += VAR_5 - VAR_3;
 }

 VAR_7->load_coeff_h = 1;
}
