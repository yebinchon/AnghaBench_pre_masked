
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dln2_spi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dln2_spi*,int *,scalar_t__,int ) ;
 int FUNC_1 (struct dln2_spi*,int const*,int *,scalar_t__,int ) ;
 int FUNC_2 (struct dln2_spi*,int const*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct dln2_spi *VAR_3, const u8 *VAR_4,
    u8 *VAR_5, u16 VAR_6, u8 VAR_7) {
 int VAR_8;
 u16 VAR_9;
 u8 VAR_10;
 u16 VAR_11 = VAR_6;
 u16 VAR_12;

 do {
  if (VAR_11 > VAR_1) {
   VAR_9 = VAR_1;
   VAR_10 = VAR_0;
  } else {
   VAR_9 = VAR_11;
   VAR_10 = VAR_7;
  }

  VAR_12 = VAR_6 - VAR_11;

  if (VAR_4 && VAR_5) {
   VAR_8 = FUNC_1(VAR_3,
            VAR_4 + VAR_12,
            VAR_5 + VAR_12,
            VAR_9, VAR_10);
  } else if (VAR_4) {
   VAR_8 = FUNC_2(VAR_3,
       VAR_4 + VAR_12,
       VAR_9, VAR_10);
  } else if (VAR_5) {
   VAR_8 = FUNC_0(VAR_3,
      VAR_5 + VAR_12,
      VAR_9, VAR_10);
   } else {
   return -VAR_2;
   }

  if (VAR_8 < 0)
   return VAR_8;

  VAR_11 -= VAR_9;
 } while (VAR_11);

 return 0;
}
