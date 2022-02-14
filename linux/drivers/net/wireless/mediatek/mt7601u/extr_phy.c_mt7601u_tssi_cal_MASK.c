
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mt7601u_tssi_params {int tssi0; int trgt_power; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct mt7601u_dev {int tssi_init_hvga; int tssi_init; int prev_pwr_diff; int dev; TYPE_4__* ee; scalar_t__ tssi_init_hvga_offset_db; TYPE_2__ chandef; int tssi_read_trig; } ;
typedef int s8 ;
typedef char s16 ;
struct TYPE_7__ {char* offset; char slope; } ;
struct TYPE_8__ {TYPE_3__ tssi_data; int tssi_enabled; } ;
struct TYPE_5__ {int hw_value; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 char FUNC_5 (char) ;
 int FUNC_6 (struct mt7601u_dev*,int) ;
 int FUNC_7 (struct mt7601u_dev*,int ) ;
 struct mt7601u_tssi_params FUNC_8 (struct mt7601u_dev*) ;
 int FUNC_9 (struct mt7601u_dev*) ;
 int FUNC_10 (struct mt7601u_dev*) ;
 int FUNC_11 (struct mt7601u_dev*,int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct mt7601u_dev *VAR_2)
{
 struct mt7601u_tssi_params VAR_3;
 int VAR_4, VAR_5;
 char VAR_6;
 s8 VAR_7;
 s16 VAR_8, VAR_9;
 bool VAR_10;
 u32 VAR_11;

 if (!VAR_2->ee->tssi_enabled)
  return 0;

 VAR_10 = FUNC_10(VAR_2);
 if (!VAR_2->tssi_read_trig)
  return FUNC_6(VAR_2, VAR_10);

 if (!FUNC_9(VAR_2))
  return 0;

 VAR_3 = FUNC_8(VAR_2);

 VAR_7 = (VAR_10 ? VAR_2->tssi_init_hvga : VAR_2->tssi_init);
 VAR_8 = VAR_3.tssi0 - VAR_7;
 VAR_9 = FUNC_5(VAR_8);
 FUNC_2(VAR_2->dev, "tssi dc:%04hx db:%04hx hvga:%d\n",
  VAR_8, VAR_9, VAR_10);

 if (VAR_2->chandef.chan->hw_value < 5)
  VAR_6 = VAR_2->ee->tssi_data.offset[0];
 else if (VAR_2->chandef.chan->hw_value < 9)
  VAR_6 = VAR_2->ee->tssi_data.offset[1];
 else
  VAR_6 = VAR_2->ee->tssi_data.offset[2];

 if (VAR_10)
  VAR_9 -= VAR_2->tssi_init_hvga_offset_db;

 VAR_4 = VAR_9 * VAR_2->ee->tssi_data.slope + (VAR_6 << 9);
 VAR_5 = VAR_3.trgt_power - VAR_4;
 FUNC_2(VAR_2->dev, "Power curr:%08x diff:%08x\n", VAR_4, VAR_5);

 if (VAR_3.tssi0 > 126 && VAR_5 > 0) {
  FUNC_3(VAR_2->dev, "Error: TSSI upper saturation\n");
  VAR_5 = 0;
 }
 if (VAR_3.tssi0 - VAR_7 < 1 && VAR_5 < 0) {
  FUNC_3(VAR_2->dev, "Error: TSSI lower saturation\n");
  VAR_5 = 0;
 }

 if ((VAR_2->prev_pwr_diff ^ VAR_5) < 0 && FUNC_1(VAR_5) < 4096 &&
     (FUNC_1(VAR_5) > FUNC_1(VAR_2->prev_pwr_diff) ||
      (VAR_5 > 0 && VAR_5 == -VAR_2->prev_pwr_diff)))
  VAR_5 = 0;
 else
  VAR_2->prev_pwr_diff = VAR_5;

 VAR_5 += (VAR_5 > 0) ? 2048 : -2048;
 VAR_5 /= 4096;

 FUNC_2(VAR_2->dev, "final diff: %08x\n", VAR_5);

 VAR_11 = FUNC_7(VAR_2, VAR_0);
 VAR_4 = FUNC_12(FUNC_0(VAR_1, VAR_11));
 VAR_5 += VAR_4;
 VAR_11 = (VAR_11 & ~VAR_1) | FUNC_4(VAR_5);
 FUNC_11(VAR_2, VAR_0, VAR_11);

 return FUNC_6(VAR_2, VAR_10);
}
