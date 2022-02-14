
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xd_info {int block_shift; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int* FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int,int ) ;
 int FUNC_7 (struct rtsx_chip*,int) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_10(struct rtsx_chip *VAR_16, u32 VAR_17)
{
 struct xd_info *VAR_18 = &VAR_16->xd_card;
 u32 VAR_19;
 u8 VAR_20 = 0, *VAR_21;
 int VAR_22, VAR_23;

 if (VAR_17 == VAR_0)
  return VAR_4;

 VAR_19 = VAR_17 << VAR_18->block_shift;

 for (VAR_22 = 0; VAR_22 < 3; VAR_22++) {
  FUNC_3(VAR_16);

  FUNC_6(VAR_16, VAR_19, VAR_10);

  FUNC_0(VAR_16, VAR_6, VAR_13, 0xFF,
        VAR_15 | VAR_9);
  FUNC_0(VAR_16, VAR_1, VAR_13,
        VAR_14, VAR_14);
  FUNC_0(VAR_16, VAR_3, VAR_8, 0, 0);

  VAR_23 = FUNC_5(VAR_16, VAR_7, 250);
  if (VAR_23 < 0) {
   FUNC_1(VAR_16);
   FUNC_4(VAR_16, VAR_8, &VAR_20);
   if (VAR_20 & VAR_2) {
    FUNC_7(VAR_16, VAR_17);
    FUNC_9(VAR_16, VAR_12);
    return VAR_4;
   }
   FUNC_9(VAR_16, VAR_11);
   VAR_23 = FUNC_8(VAR_16);
   if (VAR_23 != VAR_5)
    return VAR_4;
   continue;
  }

  VAR_21 = FUNC_2(VAR_16) + 1;
  if (*VAR_21 & VAR_2) {
   FUNC_7(VAR_16, VAR_17);
   FUNC_9(VAR_16, VAR_12);
   return VAR_4;
  }

  return VAR_5;
 }

 FUNC_7(VAR_16, VAR_17);
 FUNC_9(VAR_16, VAR_11);
 return VAR_4;
}
