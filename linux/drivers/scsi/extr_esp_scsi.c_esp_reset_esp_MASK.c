
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct esp {int rev; int max_period; int ccycle; int min_period; int config4; int config1; int config2; int prev_cfg3; int scsi_id; int radelay; int flags; int cfact; int prev_stp; int prev_soff; int neg_defp; TYPE_1__* target; } ;
struct TYPE_2__ {int esp_config3; } ;





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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;



 int VAR_22 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct esp*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct esp *VAR_23)
{
 u8 VAR_24, VAR_25;


 FUNC_3(VAR_23, VAR_7);
 FUNC_3(VAR_23, VAR_6 | VAR_5);
 if (VAR_23->rev == VAR_22)
  FUNC_2(VAR_8, VAR_2);
 FUNC_3(VAR_23, VAR_6 | VAR_5);




 VAR_23->max_period = ((35 * VAR_23->ccycle) / 1000);
 if (VAR_23->rev == VAR_22) {
  VAR_25 = FUNC_0(VAR_21);
  VAR_24 = (VAR_25 & 0xf8) >> 3;
  if (VAR_24 == 0x02)
   VAR_23->rev = 130;
  else if (VAR_24 == 0x0a)
   VAR_23->rev = 129;
  else
   VAR_23->rev = 131;
  VAR_23->min_period = ((4 * VAR_23->ccycle) / 1000);
 } else {
  VAR_23->min_period = ((5 * VAR_23->ccycle) / 1000);
 }
 if (VAR_23->rev == 130) {




  u8 VAR_26 = VAR_15;
  FUNC_2(VAR_26, VAR_4);
  VAR_26 = FUNC_0(VAR_4);
  if (VAR_26 & VAR_15) {
   VAR_23->rev = 128;
   FUNC_2(VAR_23->config4, VAR_4);
  }
 }
 VAR_23->max_period = (VAR_23->max_period + 3)>>2;
 VAR_23->min_period = (VAR_23->min_period + 3)>>2;

 FUNC_2(VAR_23->config1, VAR_1);
 switch (VAR_23->rev) {
 case 134:

  break;

 case 133:
  FUNC_2(VAR_23->config2, VAR_2);
  break;

 case 132:

  FUNC_2(VAR_23->config2, VAR_2);
  VAR_23->prev_cfg3 = VAR_23->target[0].esp_config3;
  FUNC_2(VAR_23->prev_cfg3, VAR_3);
  break;

 case 129:
  VAR_23->config2 |= (VAR_9 | VAR_10);


 case 130:
 case 128:

  FUNC_2(VAR_23->config2, VAR_2);
  if (VAR_23->rev == 129) {
   u8 VAR_27 = VAR_23->target[0].esp_config3;

   VAR_27 |= VAR_12 | VAR_14;
   if (VAR_23->scsi_id >= 8)
    VAR_27 |= VAR_13;
   FUNC_1(VAR_23, VAR_27);
  } else {
   u32 VAR_28 = VAR_23->target[0].esp_config3;

   VAR_28 |= VAR_11;
   FUNC_1(VAR_23, VAR_28);
  }
  VAR_23->prev_cfg3 = VAR_23->target[0].esp_config3;
  FUNC_2(VAR_23->prev_cfg3, VAR_3);
  if (VAR_23->rev == 129) {
   VAR_23->radelay = 80;
  } else {
   if (VAR_23->flags & VAR_16)
    VAR_23->radelay = 0;
   else
    VAR_23->radelay = 96;
  }
  break;

 case 131:

  FUNC_2(VAR_23->config2, VAR_2);
  FUNC_1(VAR_23,
        (VAR_23->target[0].esp_config3 |
         VAR_12));
  VAR_23->prev_cfg3 = VAR_23->target[0].esp_config3;
  FUNC_2(VAR_23->prev_cfg3, VAR_3);
  VAR_23->radelay = 32;
  break;

 default:
  break;
 }


 FUNC_2(VAR_23->cfact, VAR_0);

 VAR_23->prev_stp = 0;
 FUNC_2(VAR_23->prev_stp, VAR_19);

 VAR_23->prev_soff = 0;
 FUNC_2(VAR_23->prev_soff, VAR_18);

 FUNC_2(VAR_23->neg_defp, VAR_20);


 FUNC_0(VAR_17);
 FUNC_4(100);
}
