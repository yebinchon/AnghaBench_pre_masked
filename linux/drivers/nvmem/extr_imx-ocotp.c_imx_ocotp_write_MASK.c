
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ocotp_priv {int clk; int dev; scalar_t__ base; TYPE_2__* params; TYPE_1__* config; } ;
struct TYPE_4__ {unsigned int bank_address_words; int (* set_timing ) (struct ocotp_priv*) ;} ;
struct TYPE_3__ {size_t word_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_11 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ocotp_priv*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(void *VAR_12, unsigned int VAR_13, void *VAR_14,
      size_t VAR_15)
{
 struct ocotp_priv *VAR_16 = VAR_12;
 u32 *VAR_17 = VAR_14;
 int VAR_18;

 u32 VAR_19;
 u8 VAR_20;
 u8 VAR_21 = 0;


 if ((VAR_15 != VAR_16->config->word_size) ||
     (VAR_13 % VAR_16->config->word_size))
  return -VAR_0;

 FUNC_5(&VAR_11);

 VAR_18 = FUNC_1(VAR_16->clk);
 if (VAR_18 < 0) {
  FUNC_6(&VAR_11);
  FUNC_2(VAR_16->dev, "failed to prepare/enable ocotp clk\n");
  return VAR_18;
 }


 VAR_16->params->set_timing(VAR_16);







 VAR_18 = FUNC_4(VAR_16->base, 0);
 if (VAR_18 < 0) {
  FUNC_2(VAR_16->dev, "timeout during timing setup\n");
  goto write_end;
 }
 if (VAR_16->params->bank_address_words != 0) {





  VAR_13 = VAR_13 / VAR_16->config->word_size;
  VAR_20 = VAR_13 / VAR_16->params->bank_address_words;
  VAR_21 = VAR_13 & (VAR_16->params->bank_address_words - 1);
 } else {





  VAR_20 = VAR_13 / 4;
 }

 VAR_19 = FUNC_7(VAR_16->base + VAR_2);
 VAR_19 &= ~VAR_8;
 VAR_19 |= VAR_20 & VAR_8;
 VAR_19 |= VAR_10;

 FUNC_10(VAR_19, VAR_16->base + VAR_2);
 if (VAR_16->params->bank_address_words != 0) {

  switch (VAR_21) {
  case 0:
   FUNC_10(0, VAR_16->base + VAR_5);
   FUNC_10(0, VAR_16->base + VAR_6);
   FUNC_10(0, VAR_16->base + VAR_7);
   FUNC_10(*VAR_17, VAR_16->base + VAR_4);
   break;
  case 1:
   FUNC_10(*VAR_17, VAR_16->base + VAR_5);
   FUNC_10(0, VAR_16->base + VAR_6);
   FUNC_10(0, VAR_16->base + VAR_7);
   FUNC_10(0, VAR_16->base + VAR_4);
   break;
  case 2:
   FUNC_10(0, VAR_16->base + VAR_5);
   FUNC_10(*VAR_17, VAR_16->base + VAR_6);
   FUNC_10(0, VAR_16->base + VAR_7);
   FUNC_10(0, VAR_16->base + VAR_4);
   break;
  case 3:
   FUNC_10(0, VAR_16->base + VAR_5);
   FUNC_10(0, VAR_16->base + VAR_6);
   FUNC_10(*VAR_17, VAR_16->base + VAR_7);
   FUNC_10(0, VAR_16->base + VAR_4);
   break;
  }
 } else {

  FUNC_10(*VAR_17, VAR_16->base + VAR_4);
 }
 VAR_18 = FUNC_4(VAR_16->base, 0);
 if (VAR_18 < 0) {
  if (VAR_18 == -VAR_1) {
   FUNC_2(VAR_16->dev, "failed write to locked region");
   FUNC_3(VAR_16->base);
  } else {
   FUNC_2(VAR_16->dev, "timeout during data write\n");
  }
  goto write_end;
 }







 FUNC_9(2);


 FUNC_10(VAR_9,
        VAR_16->base + VAR_3);
 VAR_18 = FUNC_4(VAR_16->base,
          VAR_9);
 if (VAR_18 < 0) {
  FUNC_2(VAR_16->dev, "timeout during shadow register reload\n");
  goto write_end;
 }

write_end:
 FUNC_0(VAR_16->clk);
 FUNC_6(&VAR_11);
 if (VAR_18 < 0)
  return VAR_18;
 return VAR_15;
}
