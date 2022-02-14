
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_led {int inverted; int gpio_mask; int gpio_reg; } ;
struct em28xx {scalar_t__ chip_id; scalar_t__ ts; int dvb_max_pkt_size_isoc; scalar_t__ mode; scalar_t__ is_webcam; scalar_t__ dvb_xfer_bulk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct em28xx_led* FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (struct em28xx*,int,int) ;
 int FUNC_2 (struct em28xx*,int ,int,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct em28xx *VAR_19, int VAR_20)
{
 int VAR_21;
 const struct em28xx_led *VAR_22 = ((void*)0);

 if (VAR_19->chip_id == VAR_2 ||
     VAR_19->chip_id == VAR_3 ||
     VAR_19->chip_id == VAR_0 ||
     VAR_19->chip_id == VAR_1) {

  if (VAR_19->dvb_xfer_bulk) {

   FUNC_1(VAR_19, (VAR_19->ts == VAR_18) ?
      VAR_4 :
      VAR_5,
      0xff);
  } else {

   FUNC_1(VAR_19, (VAR_19->ts == VAR_18) ?
      VAR_4 :
      VAR_5,
      VAR_19->dvb_max_pkt_size_isoc / 188);
  }
  if (VAR_19->ts == VAR_18)
   VAR_21 = FUNC_2(VAR_19,
         VAR_6,
         VAR_20 ? VAR_7 : 0x00,
         VAR_7 | VAR_8 | VAR_9);
  else
   VAR_21 = FUNC_2(VAR_19,
         VAR_6,
         VAR_20 ? VAR_10 : 0x00,
         VAR_10 | VAR_11 | VAR_12);
 } else {


  VAR_21 = FUNC_2(VAR_19, VAR_16,
        VAR_20 ? 0x10 : 0x00, 0x10);
  if (VAR_21 < 0)
   return VAR_21;

  if (VAR_20) {
   if (VAR_19->is_webcam)
    VAR_21 = FUNC_1(VAR_19, 0x13, 0x0c);


   VAR_21 = FUNC_1(VAR_19, 0x48, 0x00);
   if (VAR_21 < 0)
    return VAR_21;

   if (VAR_19->mode == VAR_13)
    VAR_21 = FUNC_1(VAR_19,
            VAR_17,
            0x67);
   else
    VAR_21 = FUNC_1(VAR_19,
            VAR_17,
            0x37);
   if (VAR_21 < 0)
    return VAR_21;

   FUNC_3(10000, 11000);
  } else {

   VAR_21 = FUNC_1(VAR_19, VAR_17, 0x27);
  }
 }

 if (VAR_19->mode == VAR_13)
  VAR_22 = FUNC_0(VAR_19, VAR_14);
 else
  VAR_22 = FUNC_0(VAR_19, VAR_15);

 if (VAR_22)
  FUNC_2(VAR_19, VAR_22->gpio_reg,
          (!VAR_20 ^ VAR_22->inverted) ?
          ~VAR_22->gpio_mask : VAR_22->gpio_mask,
          VAR_22->gpio_mask);

 return VAR_21;
}
