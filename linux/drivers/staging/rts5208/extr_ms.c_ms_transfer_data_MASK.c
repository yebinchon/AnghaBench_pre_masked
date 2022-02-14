
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_chip {int mspro_timeout; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,void*,int,int,int,int ) ;
 int FUNC_6 (int,struct rtsx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct rtsx_chip *VAR_27, u8 VAR_28,
       u8 VAR_29, u16 VAR_30, u8 VAR_31, bool VAR_32,
       int VAR_33, void *VAR_34, int VAR_35)
{
 int VAR_36;
 u8 VAR_37, VAR_38 = 0;
 enum dma_data_direction VAR_39;

 if (!VAR_34 || !VAR_35)
  return VAR_23;

 if (VAR_28 == VAR_16) {
  VAR_39 = VAR_2;
  VAR_38 = VAR_9;
 } else if (VAR_28 == VAR_17) {
  VAR_39 = VAR_3;
  VAR_38 = VAR_10;
 } else {
  return VAR_23;
 }

 FUNC_2(VAR_27);

 FUNC_1(VAR_27, VAR_26, VAR_18, 0xFF, VAR_29);
 FUNC_1(VAR_27, VAR_26,
       VAR_14, 0xFF, (u8)(VAR_30 >> 8));
 FUNC_1(VAR_27, VAR_26, VAR_15, 0xFF, (u8)VAR_30);
 FUNC_1(VAR_27, VAR_26, VAR_22, 0xFF, VAR_31);

 if (VAR_32) {
  FUNC_1(VAR_27, VAR_26,
        VAR_7, VAR_5, VAR_5);
 } else {
  FUNC_1(VAR_27, VAR_26, VAR_7, VAR_5, 0);
 }

 FUNC_6(VAR_39, VAR_27, VAR_30 * 512, VAR_1);

 FUNC_1(VAR_27, VAR_26,
       VAR_19, 0xFF, VAR_21 | VAR_28);
 FUNC_1(VAR_27, VAR_0,
       VAR_19, VAR_20, VAR_20);

 FUNC_4(VAR_27);

 VAR_36 = FUNC_5(VAR_27, VAR_6, VAR_34, VAR_35,
        VAR_33, VAR_39, VAR_27->mspro_timeout);
 if (VAR_36 < 0) {
  FUNC_0(VAR_27, VAR_38);
  if (VAR_36 == -VAR_4)
   VAR_36 = VAR_25;
  else
   VAR_36 = VAR_23;

  return VAR_36;
 }

 VAR_36 = FUNC_3(VAR_27, VAR_22, &VAR_37);
 if (VAR_36)
  return VAR_36;

 if (VAR_37 & (VAR_11 | VAR_12 | VAR_8 | VAR_13))
  return VAR_23;

 return VAR_24;
}
