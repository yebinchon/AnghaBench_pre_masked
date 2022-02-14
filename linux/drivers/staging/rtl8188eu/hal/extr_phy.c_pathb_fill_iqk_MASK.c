
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (struct adapter*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_6, bool VAR_7, s32 VAR_8[][8],
      u8 VAR_9, bool VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 s32 VAR_15, VAR_16;

 if (VAR_9 == 0xFF) {
  return;
 } else if (VAR_7) {
  VAR_11 = (FUNC_1(VAR_6, VAR_4, VAR_0) >> 22) & 0x3FF;

  VAR_12 = VAR_8[VAR_9][4];
  if ((VAR_12 & 0x00000200) != 0)
   VAR_12 = VAR_12 | 0xFFFFFC00;
  VAR_13 = (VAR_12 * VAR_11) >> 8;
  FUNC_2(VAR_6, VAR_4, 0x3FF, VAR_13);

  FUNC_2(VAR_6, VAR_2, FUNC_0(27),
          ((VAR_12 * VAR_11>>7) & 0x1));

  VAR_15 = VAR_8[VAR_9][5];
  if ((VAR_15 & 0x00000200) != 0)
   VAR_15 = VAR_15 | 0xFFFFFC00;

  VAR_16 = (VAR_15 * VAR_11) >> 8;

  FUNC_2(VAR_6, VAR_5, 0xF0000000,
          ((VAR_16&0x3C0)>>6));
  FUNC_2(VAR_6, VAR_4, 0x003F0000,
          (VAR_16&0x3F));
  FUNC_2(VAR_6, VAR_2, FUNC_0(25),
          ((VAR_15 * VAR_11>>7) & 0x1));

  if (VAR_10)
   return;

  VAR_14 = VAR_8[VAR_9][6];
  FUNC_2(VAR_6, VAR_3, 0x3FF, VAR_14);

  VAR_14 = VAR_8[VAR_9][7] & 0x3F;
  FUNC_2(VAR_6, VAR_3, 0xFC00, VAR_14);

  VAR_14 = (VAR_8[VAR_9][7] >> 6) & 0xF;
  FUNC_2(VAR_6, VAR_1, 0x0000F000, VAR_14);
 }
}
