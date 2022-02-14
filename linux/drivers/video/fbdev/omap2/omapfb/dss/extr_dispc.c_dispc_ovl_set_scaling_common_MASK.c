
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(enum omap_plane VAR_3,
  u16 VAR_4, u16 VAR_5,
  u16 VAR_6, u16 VAR_7,
  bool VAR_8, bool VAR_9,
  bool VAR_10, enum omap_color_mode VAR_11,
  u8 VAR_12)
{
 int VAR_13 = 0;
 int VAR_14 = 0;
 u32 VAR_15;

 FUNC_1(VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, VAR_9,
    VAR_12, VAR_0);
 VAR_15 = FUNC_4(FUNC_0(VAR_3));


 VAR_15 &= ~((0x3 << 5) | (0x1 << 21));
 VAR_15 |= (VAR_4 != VAR_6) ? (1 << 5) : 0;
 VAR_15 |= (VAR_5 != VAR_7) ? (1 << 6) : 0;
 VAR_15 |= VAR_9 ? (1 << 21) : 0;


 if (FUNC_6(VAR_2)) {
  VAR_15 &= ~(0x3 << 7);
  VAR_15 |= (VAR_4 <= VAR_6) ? 0 : (1 << 7);
  VAR_15 |= (VAR_5 <= VAR_7) ? 0 : (1 << 8);
 }


 if (FUNC_6(VAR_1)) {
  VAR_15 &= ~(0x1 << 22);
  VAR_15 |= VAR_9 ? (1 << 22) : 0;
 }

 FUNC_5(FUNC_0(VAR_3), VAR_15);





 if (VAR_8 && !VAR_10) {
  VAR_14 = 0;
  VAR_13 = ((1024 * VAR_5 / VAR_7) / 2) & 0x3ff;
  if (VAR_13 >= 1024/2) {
   VAR_14 = 1024/2;
   VAR_13 -= VAR_14;
  }
 }

 FUNC_2(VAR_3, 0, VAR_13);
 FUNC_3(VAR_3, 0, VAR_14);
}
