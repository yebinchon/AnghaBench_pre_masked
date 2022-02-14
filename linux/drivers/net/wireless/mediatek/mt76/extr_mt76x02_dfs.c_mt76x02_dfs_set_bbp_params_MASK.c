
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct mt76x02_radar_specs {int avg_len; int mode; int e_high; int e_low; int t_low; int t_high; int b_low; int b_high; int w_high; int w_low; int w_margin; int t_margin; int event_expiration; int pwr_jmp; } ;
struct TYPE_5__ {int width; TYPE_1__* chan; } ;
struct TYPE_6__ {int region; TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 struct mt76x02_radar_specs* VAR_11 ;
 struct mt76x02_radar_specs* VAR_12 ;
 struct mt76x02_radar_specs* VAR_13 ;
 struct mt76x02_radar_specs* VAR_14 ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mt76x02_dev *VAR_15)
{
 const struct mt76x02_radar_specs *VAR_16;
 u8 VAR_17, VAR_18;
 u32 VAR_19;

 switch (VAR_15->mt76.chandef.width) {
 case 133:
  VAR_18 = VAR_4;
  break;
 case 132:
  VAR_18 = 2 * VAR_4;
  break;
 default:
  VAR_18 = 0;
  break;
 }

 switch (VAR_15->mt76.region) {
 case 130:
  VAR_16 = &VAR_12[VAR_18];
  break;
 case 131:
  VAR_16 = &VAR_11[VAR_18];
  break;
 case 129:
  if (VAR_15->mt76.chandef.chan->center_freq >= 5250 &&
      VAR_15->mt76.chandef.chan->center_freq <= 5350)
   VAR_16 = &VAR_13[VAR_18];
  else
   VAR_16 = &VAR_14[VAR_18];
  break;
 case 128:
 default:
  return;
 }

 VAR_19 = (VAR_10 << 16) |
        (VAR_7 << 12) |
        (VAR_6 << 8) |
        (VAR_9 << 4) |
        (VAR_3 & 0xf);
 FUNC_1(VAR_15, FUNC_0(VAR_0, 2), VAR_19);

 VAR_19 = (VAR_8 << 16) | VAR_5;
 FUNC_1(VAR_15, FUNC_0(VAR_0, 3), VAR_19);

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {

  FUNC_1(VAR_15, FUNC_0(VAR_0, 0), VAR_17);


  VAR_19 = ((VAR_16[VAR_17].avg_len & 0x1ff) << 16) |
         (VAR_16[VAR_17].mode & 0xf);
  FUNC_1(VAR_15, FUNC_0(VAR_0, 4), VAR_19);


  VAR_19 = ((VAR_16[VAR_17].e_high & 0x0fff) << 16) |
         (VAR_16[VAR_17].e_low & 0x0fff);
  FUNC_1(VAR_15, FUNC_0(VAR_0, 5), VAR_19);


  FUNC_1(VAR_15, FUNC_0(VAR_0, 7), VAR_16[VAR_17].t_low);
  FUNC_1(VAR_15, FUNC_0(VAR_0, 9), VAR_16[VAR_17].t_high);


  FUNC_1(VAR_15, FUNC_0(VAR_0, 11), VAR_16[VAR_17].b_low);
  FUNC_1(VAR_15, FUNC_0(VAR_0, 13), VAR_16[VAR_17].b_high);


  VAR_19 = ((VAR_16[VAR_17].w_high & 0x0fff) << 16) |
         (VAR_16[VAR_17].w_low & 0x0fff);
  FUNC_1(VAR_15, FUNC_0(VAR_0, 14), VAR_19);


  VAR_19 = (VAR_16[VAR_17].w_margin << 16) |
         VAR_16[VAR_17].t_margin;
  FUNC_1(VAR_15, FUNC_0(VAR_0, 15), VAR_19);


  FUNC_1(VAR_15, FUNC_0(VAR_0, 17), VAR_16[VAR_17].event_expiration);


  FUNC_1(VAR_15, FUNC_0(VAR_0, 30), VAR_16[VAR_17].pwr_jmp);
 }


 FUNC_1(VAR_15, FUNC_0(VAR_0, 1), 0xf);
 FUNC_1(VAR_15, FUNC_0(VAR_0, 36), 0x3);


 FUNC_1(VAR_15, FUNC_0(VAR_0, 0), VAR_2 << 16);
 FUNC_1(VAR_15, FUNC_0(VAR_1, 11), 0x0c350001);
}
