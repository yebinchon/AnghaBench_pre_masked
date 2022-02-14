
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_chip {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;

void FUNC_1(enum dma_data_direction VAR_17, struct rtsx_chip *VAR_18,
        u32 VAR_19, u8 VAR_20)
{
 if (VAR_20 > VAR_6)
  VAR_20 = VAR_7;

 FUNC_0(VAR_18, VAR_16, VAR_14, VAR_10, VAR_10);

 FUNC_0(VAR_18, VAR_16, VAR_5, 0xFF, (u8)(VAR_19 >> 24));
 FUNC_0(VAR_18, VAR_16, VAR_4, 0xFF, (u8)(VAR_19 >> 16));
 FUNC_0(VAR_18, VAR_16, VAR_3, 0xFF, (u8)(VAR_19 >> 8));
 FUNC_0(VAR_18, VAR_16, VAR_2, 0xFF, (u8)VAR_19);

 if (VAR_17 == VAR_12) {
  FUNC_0(VAR_18, VAR_16, VAR_1,
        0x03 | VAR_13,
        VAR_8 | VAR_11 | VAR_20);
 } else {
  FUNC_0(VAR_18, VAR_16, VAR_1,
        0x03 | VAR_13,
        VAR_9 | VAR_11 | VAR_20);
 }

 FUNC_0(VAR_18, VAR_16, VAR_0, 0x01, VAR_15);
}
