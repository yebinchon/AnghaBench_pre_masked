
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040 {int pll; unsigned int sysclk_rate; unsigned int mclk_rate; int mutex; int dev; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct twl6040*,int ) ;
 int FUNC_7 (struct twl6040*,int ,int) ;
 int FUNC_8 (int,int) ;

int FUNC_9(struct twl6040 *VAR_14, int VAR_15,
      unsigned int VAR_16, unsigned int VAR_17)
{
 u8 VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_4(&VAR_14->mutex);

 VAR_18 = FUNC_6(VAR_14, VAR_12);
 VAR_19 = FUNC_6(VAR_14, VAR_13);


 if (VAR_15 != VAR_14->pll) {
  VAR_14->sysclk_rate = 0;
  VAR_14->mclk_rate = 0;
 }

 switch (VAR_15) {
 case 128:


  if (VAR_14->sysclk_rate != VAR_17) {
   switch (VAR_17) {
   case 17640000:
    VAR_19 |= VAR_6;
    break;
   case 19200000:
    VAR_19 &= ~VAR_6;
    break;
   default:
    FUNC_2(VAR_14->dev,
     "freq_out %d not supported\n",
     VAR_17);
    VAR_20 = -VAR_0;
    goto pll_out;
   }
   FUNC_7(VAR_14, VAR_13,
       VAR_19);
  }


  if (VAR_14->pll == VAR_15)
   break;

  switch (VAR_16) {
  case 32768:
   VAR_19 |= VAR_5;
   FUNC_7(VAR_14, VAR_13,
       VAR_19);
   FUNC_3(5);
   VAR_19 &= ~VAR_3;
   FUNC_7(VAR_14, VAR_13,
       VAR_19);
   VAR_18 &= ~VAR_2;
   FUNC_7(VAR_14, VAR_12,
       VAR_18);
   break;
  default:
   FUNC_2(VAR_14->dev,
    "freq_in %d not supported\n", VAR_16);
   VAR_20 = -VAR_0;
   goto pll_out;
  }

  FUNC_0(VAR_14->mclk);
  break;
 case 129:

  if (VAR_17 != 19200000) {
   FUNC_2(VAR_14->dev,
    "freq_out %d not supported\n", VAR_17);
   VAR_20 = -VAR_0;
   goto pll_out;
  }

  if (VAR_14->mclk_rate != VAR_16) {
   VAR_18 &= ~VAR_11;

   switch (VAR_16) {
   case 12000000:

    VAR_18 |= VAR_7 |
         VAR_2;
    break;
   case 19200000:

    VAR_18 |= VAR_8 |
         VAR_1 | VAR_2;
    break;
   case 26000000:

    VAR_18 |= VAR_9 |
         VAR_2;
    break;
   case 38400000:

    VAR_18 |= VAR_10 |
         VAR_1 | VAR_2;
    break;
   default:
    FUNC_2(VAR_14->dev,
     "freq_in %d not supported\n", VAR_16);
    VAR_20 = -VAR_0;
    goto pll_out;
   }


   if (VAR_15 != VAR_14->pll)
    FUNC_1(VAR_14->mclk);




   VAR_18 |= VAR_4;

   FUNC_7(VAR_14, VAR_12,
       VAR_18);
   FUNC_8(500, 700);
   VAR_19 |= VAR_3;
   FUNC_7(VAR_14, VAR_13,
       VAR_19);
   VAR_19 &= ~VAR_5;
   FUNC_7(VAR_14, VAR_13,
       VAR_19);

   VAR_14->mclk_rate = VAR_16;
  }
  break;
 default:
  FUNC_2(VAR_14->dev, "unknown pll id %d\n", VAR_15);
  VAR_20 = -VAR_0;
  goto pll_out;
 }

 VAR_14->sysclk_rate = VAR_17;
 VAR_14->pll = VAR_15;

pll_out:
 FUNC_5(&VAR_14->mutex);
 return VAR_20;
}
