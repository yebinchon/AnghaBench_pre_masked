
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ssd1307fb_par {int pwm_period; int contrast; int com_invdir; int height; int com_offset; int dclk_div; int dclk_frq; int prechargep1; int prechargep2; int com_lrremap; int vcomh; int* lookup_table; int width; int page_offset; TYPE_2__* client; scalar_t__ lookup_table_set; TYPE_1__* device_info; int com_seq; scalar_t__ low_power; scalar_t__ area_color_enable; scalar_t__ seg_remap; TYPE_3__* pwm; } ;
struct pwm_args {int period; } ;
struct TYPE_12__ {int pwm; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {scalar_t__ need_chargepump; scalar_t__ need_pwm; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_3__*,struct pwm_args*) ;
 int FUNC_13 (struct ssd1307fb_par*) ;
 int FUNC_14 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_15(struct ssd1307fb_par *VAR_16)
{
 int VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 struct pwm_args VAR_22;

 if (VAR_16->device_info->need_pwm) {
  VAR_16->pwm = FUNC_11(&VAR_16->client->dev, ((void*)0));
  if (FUNC_3(VAR_16->pwm)) {
   FUNC_6(&VAR_16->client->dev, "Could not get PWM from device tree!\n");
   return FUNC_4(VAR_16->pwm);
  }





  FUNC_8(VAR_16->pwm);

  FUNC_12(VAR_16->pwm, &VAR_22);

  VAR_16->pwm_period = VAR_22.period;

  FUNC_9(VAR_16->pwm, VAR_16->pwm_period / 2, VAR_16->pwm_period);
  FUNC_10(VAR_16->pwm);

  FUNC_5(&VAR_16->client->dev, "Using PWM%d with a %dns period.\n",
   VAR_16->pwm->pwm, VAR_16->pwm_period);
 }


 VAR_17 = FUNC_14(VAR_16->client, VAR_1);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->contrast);
 if (VAR_17 < 0)
  return VAR_17;


 if (VAR_16->seg_remap) {
  VAR_17 = FUNC_14(VAR_16->client, VAR_3);
  if (VAR_17 < 0)
   return VAR_17;
 }


 VAR_20 = 0xc0 | VAR_16->com_invdir << 3;
 VAR_17 = FUNC_14(VAR_16->client, VAR_20);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_12);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->height - 1);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_10);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->com_offset);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_7);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_19 = ((VAR_16->dclk_div - 1) & 0xf) | (VAR_16->dclk_frq & 0xf) << 4;
 VAR_17 = FUNC_14(VAR_16->client, VAR_19);
 if (VAR_17 < 0)
  return VAR_17;


 if (VAR_16->area_color_enable || VAR_16->low_power) {
  u32 VAR_23;

  VAR_17 = FUNC_14(VAR_16->client,
       VAR_6);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_23 = (VAR_16->area_color_enable ? 0x30 : 0) |
   (VAR_16->low_power ? 5 : 0);
  VAR_17 = FUNC_14(VAR_16->client, VAR_23);
  if (VAR_17 < 0)
   return VAR_17;
 }


 VAR_17 = FUNC_14(VAR_16->client, VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_18 = (VAR_16->prechargep1 & 0xf) | (VAR_16->prechargep2 & 0xf) << 4;
 VAR_17 = FUNC_14(VAR_16->client, VAR_18);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_9);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_21 = 0x02 | !VAR_16->com_seq << 4 | VAR_16->com_lrremap << 5;
 VAR_17 = FUNC_14(VAR_16->client, VAR_21);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->vcomh);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client,
  FUNC_1(4) | (VAR_16->device_info->need_chargepump ? FUNC_1(2) : 0));
 if (VAR_17 < 0)
  return VAR_17;


 if (VAR_16->lookup_table_set) {
  int VAR_24;

  VAR_17 = FUNC_14(VAR_16->client,
       VAR_11);
  if (VAR_17 < 0)
   return VAR_17;

  for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_16->lookup_table); ++VAR_24) {
   u8 VAR_25 = VAR_16->lookup_table[VAR_24];

   if (VAR_25 < 31 || VAR_25 > 63)
    FUNC_7(&VAR_16->client->dev,
      "lookup table index %d value out of range 31 <= %d <= 63\n",
      VAR_24, VAR_25);
   VAR_17 = FUNC_14(VAR_16->client, VAR_25);
   if (VAR_17 < 0)
    return VAR_17;
  }
 }


 VAR_17 = FUNC_14(VAR_16->client, VAR_4);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client,
      VAR_5);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_8);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, 0x0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->width - 1);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_14(VAR_16->client, VAR_13);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client, VAR_16->page_offset);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16->client,
      VAR_16->page_offset +
      FUNC_2(VAR_16->height, 8) - 1);
 if (VAR_17 < 0)
  return VAR_17;


 FUNC_13(VAR_16);


 VAR_17 = FUNC_14(VAR_16->client, VAR_2);
 if (VAR_17 < 0)
  return VAR_17;

 return 0;
}
