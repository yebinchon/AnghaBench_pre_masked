
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
typedef int u_char ;
struct pcm_int_data {int bus_width; } ;
struct map_info {int pfow_base; struct pcm_int_data* fldrv_priv; } ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_7__ {int* x; TYPE_1__ member_0; } ;
typedef TYPE_2__ map_word ;


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
 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_2__ FUNC_2 (struct map_info*,int) ;
 int FUNC_3 (struct map_info*,TYPE_2__,int) ;
 int FUNC_4 (struct map_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct map_info *VAR_12, u_long VAR_13,
 u_long VAR_14, u_long VAR_15, u_long VAR_16, u_char *VAR_17)
{
 map_word VAR_18 = { 0 }, VAR_19 = { 0 }, VAR_20 = { 0 },
  VAR_21 = { 0 }, VAR_22 = { 0 }, VAR_23 = { 0 },
  VAR_24 = { 0 }, VAR_25;
 map_word VAR_26 = { 0 };
 u_long VAR_27, VAR_28, VAR_29;
 struct pcm_int_data *VAR_30 = VAR_12->fldrv_priv;
 u_int VAR_31 = FUNC_1(VAR_30->bus_width);


 VAR_18.x[0] = VAR_15 & 0x0000FFFF;
 VAR_19.x[0] = (VAR_15 >> 16) & 0x0000FFFF;
 VAR_20.x[0] = VAR_16 & 0x0000FFFF;
 VAR_21.x[0] = (VAR_16 >> 16) & 0x0000FFFF;
 VAR_23.x[0] = VAR_13 & 0x0000FFFF;
 VAR_24.x[0] = 0x0001;
 VAR_22.x[0] = VAR_14 & 0x0000FFFF;
 VAR_26.x[0] = (VAR_14 >> 16) & 0x0000FFFF;


 FUNC_3(VAR_12, VAR_23, FUNC_4(VAR_12, VAR_2));
 FUNC_3(VAR_12, VAR_22, FUNC_4(VAR_12, VAR_3));
 FUNC_3(VAR_12, VAR_18, FUNC_4(VAR_12, VAR_1));
 FUNC_3(VAR_12, VAR_19, FUNC_4(VAR_12, VAR_0));
 FUNC_3(VAR_12, VAR_20, FUNC_4(VAR_12, VAR_9));
 FUNC_3(VAR_12, VAR_21, FUNC_4(VAR_12, VAR_8));
 if (VAR_30->bus_width == 0x0004) {
  FUNC_3(VAR_12, VAR_23, FUNC_4(VAR_12, VAR_2) + 2);
  FUNC_3(VAR_12, VAR_26, FUNC_4(VAR_12, VAR_3) + 2);
  FUNC_3(VAR_12, VAR_18, FUNC_4(VAR_12, VAR_1) + 2);
  FUNC_3(VAR_12, VAR_19, FUNC_4(VAR_12, VAR_0) + 2);
  FUNC_3(VAR_12, VAR_20, FUNC_4(VAR_12, VAR_9) + 2);
  FUNC_3(VAR_12, VAR_21, FUNC_4(VAR_12, VAR_8) + 2);
 }


 if ((VAR_13 == VAR_7) ||
  (VAR_13 == VAR_6)) {
  VAR_29 = (FUNC_2(VAR_12,
   FUNC_4(VAR_12, VAR_10))).x[0];
  for (VAR_27 = 0; VAR_27 < VAR_16; VAR_27++) {
   FUNC_3(VAR_12, FUNC_0(VAR_17[VAR_27]), VAR_12->pfow_base +
   VAR_29 + VAR_27);
  }
 }


 FUNC_3(VAR_12, VAR_24, FUNC_4(VAR_12, VAR_4));
 if (VAR_30->bus_width == 0x0004)
  FUNC_3(VAR_12, VAR_24, FUNC_4(VAR_12, VAR_4) + 2);


 do {
  VAR_25 = FUNC_2(VAR_12, FUNC_4(VAR_12, VAR_11));
  VAR_28 = VAR_25.x[0];
  if (VAR_30->bus_width == 0x0004) {
   VAR_25 = FUNC_2(VAR_12, FUNC_4(VAR_12,
    VAR_11) + 2);
   VAR_28 += VAR_25.x[0] << 16;
  }
 } while ((VAR_28 & VAR_31) != VAR_31);

 return (((VAR_28 & VAR_31) == VAR_31) ? 0 : -VAR_5);
}
