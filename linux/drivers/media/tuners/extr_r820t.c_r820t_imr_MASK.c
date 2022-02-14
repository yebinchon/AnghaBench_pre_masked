
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r820t_sect_type {int value; int phase_y; int gain_x; } ;
struct r820t_priv {TYPE_2__* imr_data; int has_lock; TYPE_1__* cfg; } ;
struct TYPE_4__ {int value; int phase_y; int gain_x; } ;
struct TYPE_3__ {int xtal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r820t_priv*,struct r820t_sect_type*) ;
 int FUNC_1 (struct r820t_priv*,struct r820t_sect_type*) ;
 int FUNC_2 (struct r820t_priv*,int) ;
 int FUNC_3 (struct r820t_priv*,int) ;
 int FUNC_4 (struct r820t_priv*,int ,int) ;
 int FUNC_5 (struct r820t_priv*,int,int) ;

__attribute__((used)) static int FUNC_6(struct r820t_priv *VAR_2, unsigned VAR_3, bool VAR_4)
{
 struct r820t_sect_type VAR_5;
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_2->cfg->xtal > 24000000)
  VAR_9 = VAR_2->cfg->xtal / 2000;
 else
  VAR_9 = VAR_2->cfg->xtal / 1000;

 VAR_10 = 15;
 for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
  if ((16 + VAR_11) * 8 * VAR_9 >= 3100000) {
   VAR_10 = VAR_11;
   break;
  }
 }

 VAR_12 = FUNC_2(VAR_2, 0x18);
 VAR_13 = FUNC_2(VAR_2, 0x19);
 VAR_14 = FUNC_2(VAR_2, 0x1f);

 VAR_12 &= 0xf0;
 VAR_12 |= VAR_10;

 VAR_7 = (16 + VAR_10) * 8 * VAR_9;

 VAR_12 &= 0xdf;
 VAR_13 &= 0xfc;
 VAR_14 &= 0xfc;

 switch (VAR_3) {
 case 0:
  VAR_8 = VAR_7 / 48;
  VAR_12 |= 0x20;
  VAR_13 |= 0x03;
  VAR_14 |= 0x02;
  break;
 case 1:
  VAR_8 = VAR_7 / 16;
  VAR_12 |= 0x00;
  VAR_13 |= 0x02;
  VAR_14 |= 0x00;
  break;
 case 2:
  VAR_8 = VAR_7 / 8;
  VAR_12 |= 0x00;
  VAR_13 |= 0x01;
  VAR_14 |= 0x03;
  break;
 case 3:
  VAR_8 = VAR_7 / 6;
  VAR_12 |= 0x20;
  VAR_13 |= 0x00;
  VAR_14 |= 0x03;
  break;
 case 4:
  VAR_8 = VAR_7 / 4;
  VAR_12 |= 0x00;
  VAR_13 |= 0x00;
  VAR_14 |= 0x01;
  break;
 default:
  VAR_8 = VAR_7 / 4;
  VAR_12 |= 0x00;
  VAR_13 |= 0x00;
  VAR_14 |= 0x01;
  break;
 }





 VAR_6 = FUNC_5(VAR_2, 0x18, VAR_12);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_5(VAR_2, 0x19, VAR_13);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_5(VAR_2, 0x1f, VAR_14);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_2, (VAR_8 - 5300) * 1000);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2, VAR_1,
      (VAR_8 - 5300) * 1000);
 if (!VAR_2->has_lock)
  VAR_6 = -VAR_0;
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_1(VAR_2, &VAR_5);
 } else {
  VAR_5.gain_x = VAR_2->imr_data[3].gain_x;
  VAR_5.phase_y = VAR_2->imr_data[3].phase_y;
  VAR_5.value = VAR_2->imr_data[3].value;

  VAR_6 = FUNC_0(VAR_2, &VAR_5);
 }
 if (VAR_6 < 0)
  return VAR_6;


 switch (VAR_3) {
 case 0:
  VAR_2->imr_data[0].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[0].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[0].value = VAR_5.value;
  break;
 case 1:
  VAR_2->imr_data[1].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[1].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[1].value = VAR_5.value;
  break;
 case 2:
  VAR_2->imr_data[2].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[2].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[2].value = VAR_5.value;
  break;
 case 3:
  VAR_2->imr_data[3].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[3].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[3].value = VAR_5.value;
  break;
 case 4:
  VAR_2->imr_data[4].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[4].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[4].value = VAR_5.value;
  break;
 default:
  VAR_2->imr_data[4].gain_x = VAR_5.gain_x;
  VAR_2->imr_data[4].phase_y = VAR_5.phase_y;
  VAR_2->imr_data[4].value = VAR_5.value;
  break;
 }

 return 0;
}
