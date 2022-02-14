
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct vsc73xx_counter {char* name; } ;
struct vsc73xx {int dummy; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct vsc73xx_counter* FUNC_1 (struct vsc73xx*,scalar_t__,int) ;
 int FUNC_2 (struct vsc73xx*,int ,int,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_4, int VAR_5, u32 VAR_6,
    uint8_t *VAR_7)
{
 const struct vsc73xx_counter *VAR_8;
 struct vsc73xx *VAR_9 = VAR_4->priv;
 u8 VAR_10[6];
 int VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (VAR_6 != VAR_1)
  return;

 VAR_14 = FUNC_2(VAR_9, VAR_2, VAR_5,
      VAR_3, &VAR_13);
 if (VAR_14)
  return;

 VAR_10[0] = (VAR_13 & 0x1f);
 VAR_10[1] = ((VAR_13 >> 5) & 0x1f);
 VAR_10[2] = ((VAR_13 >> 10) & 0x1f);
 VAR_10[3] = ((VAR_13 >> 16) & 0x1f);
 VAR_10[4] = ((VAR_13 >> 21) & 0x1f);
 VAR_10[5] = ((VAR_13 >> 26) & 0x1f);


 VAR_12 = 0;
 FUNC_0(VAR_7 + VAR_12 * VAR_0,
  "RxEtherStatsOctets", VAR_0);
 VAR_12++;







 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_8 = FUNC_1(VAR_9, VAR_10[VAR_11], 0);
  if (VAR_8)
   FUNC_0(VAR_7 + VAR_12 * VAR_0,
    VAR_8->name, VAR_0);
  VAR_12++;
 }


 FUNC_0(VAR_7 + VAR_12 * VAR_0,
  "TxEtherStatsOctets", VAR_0);
 VAR_12++;

 for (VAR_11 = 3; VAR_11 < 6; VAR_11++) {
  VAR_8 = FUNC_1(VAR_9, VAR_10[VAR_11], 1);
  if (VAR_8)
   FUNC_0(VAR_7 + VAR_12 * VAR_0,
    VAR_8->name, VAR_0);
  VAR_12++;
 }
}
