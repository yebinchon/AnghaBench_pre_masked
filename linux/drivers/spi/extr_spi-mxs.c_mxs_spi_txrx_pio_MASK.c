
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_ssp {scalar_t__ devid; scalar_t__ base; } ;
struct mxs_spi {struct mxs_ssp ssp; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct mxs_ssp*) ;
 scalar_t__ FUNC_1 (struct mxs_ssp*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_2 (struct mxs_spi*,scalar_t__,unsigned char,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mxs_spi *VAR_14,
       unsigned char *VAR_15, int VAR_16,
       unsigned int VAR_17)
{
 struct mxs_ssp *VAR_18 = &VAR_14->ssp;

 FUNC_4(VAR_1,
        VAR_18->base + VAR_7 + VAR_10);

 while (VAR_16--) {
  if (VAR_16 == 0 && (VAR_17 & VAR_12))
   FUNC_4(VAR_1,
          VAR_18->base + VAR_7 + VAR_11);

  if (VAR_18->devid == VAR_9) {
   FUNC_4(VAR_4,
    VAR_18->base + VAR_7 + VAR_10);
   FUNC_4(1,
    VAR_18->base + VAR_7 + VAR_11);
  } else {
   FUNC_4(1, VAR_18->base + VAR_8);
  }

  if (VAR_17 & VAR_13)
   FUNC_4(VAR_2,
    VAR_18->base + VAR_7 + VAR_10);
  else
   FUNC_4(VAR_2,
    VAR_18->base + VAR_7 + VAR_11);

  FUNC_4(VAR_3,
    VAR_18->base + VAR_7 + VAR_11);

  if (FUNC_2(VAR_14, VAR_7, VAR_3, 1))
   return -VAR_6;

  if (VAR_17 & VAR_13)
   FUNC_4(*VAR_15, VAR_18->base + FUNC_0(VAR_18));

  FUNC_4(VAR_0,
        VAR_18->base + VAR_7 + VAR_11);

  if (!(VAR_17 & VAR_13)) {
   if (FUNC_2(VAR_14, FUNC_1(VAR_18),
      VAR_5, 0))
    return -VAR_6;

   *VAR_15 = (FUNC_3(VAR_18->base + FUNC_0(VAR_18)) & 0xff);
  }

  if (FUNC_2(VAR_14, VAR_7, VAR_3, 0))
   return -VAR_6;

  VAR_15++;
 }

 if (VAR_16 <= 0)
  return 0;

 return -VAR_6;
}
