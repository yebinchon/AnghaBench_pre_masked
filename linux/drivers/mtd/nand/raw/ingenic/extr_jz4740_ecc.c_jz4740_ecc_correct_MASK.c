
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct ingenic_ecc_params {int bytes; int size; } ;
struct ingenic_ecc {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ingenic_ecc*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ingenic_ecc *VAR_11,
         struct ingenic_ecc_params *VAR_12,
         u8 *VAR_13, u8 *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21 = 1000;

 FUNC_1(VAR_11, 0);

 for (VAR_15 = 0; VAR_15 < VAR_12->bytes; ++VAR_15)
  FUNC_4(VAR_14[VAR_15], VAR_11->base + VAR_10 + VAR_15);

 VAR_18 = FUNC_3(VAR_11->base + VAR_8);
 VAR_18 |= VAR_3;
 FUNC_5(VAR_18, VAR_11->base + VAR_8);

 do {
  VAR_19 = FUNC_3(VAR_11->base + VAR_9);
 } while (!(VAR_19 & VAR_4) && --VAR_21);

 if (VAR_21 == 0)
  return -VAR_1;

 VAR_18 = FUNC_3(VAR_11->base + VAR_8);
 VAR_18 &= ~VAR_2;
 FUNC_5(VAR_18, VAR_11->base + VAR_8);

 if (VAR_19 & VAR_5) {
  if (VAR_19 & VAR_7)
   return -VAR_0;

  VAR_16 = (VAR_19 & VAR_6) >> 29;

  for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15) {
   VAR_20 = FUNC_3(VAR_11->base + FUNC_0(VAR_15));
   VAR_17 = ((VAR_20 >> 16) & 0x1ff) - 1;
   if (VAR_17 >= 0 && VAR_17 < VAR_12->size)
    FUNC_2(VAR_13, VAR_17, VAR_20 & 0x1ff);
  }

  return VAR_16;
 }

 return 0;
}
