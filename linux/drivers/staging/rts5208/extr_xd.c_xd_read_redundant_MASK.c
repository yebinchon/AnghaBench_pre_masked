
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int * FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int) ;
 int FUNC_5 (struct rtsx_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rtsx_chip *VAR_14, u32 VAR_15,
        u8 *VAR_16, int VAR_17)
{
 int VAR_18, VAR_19;

 FUNC_3(VAR_14);

 FUNC_5(VAR_14, VAR_15, VAR_10);

 FUNC_1(VAR_14, VAR_4, VAR_11,
       0xFF, VAR_13 | VAR_8);
 FUNC_1(VAR_14, VAR_0, VAR_11,
       VAR_12, VAR_12);

 for (VAR_19 = 0; VAR_19 < 6; VAR_19++)
  FUNC_1(VAR_14, VAR_1, (u16)(VAR_6 + VAR_19),
        0, 0);
 for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
  FUNC_1(VAR_14, VAR_1, (u16)(VAR_9 + VAR_19),
        0, 0);
 FUNC_1(VAR_14, VAR_1, VAR_7, 0, 0);

 VAR_18 = FUNC_4(VAR_14, VAR_5, 500);
 if (VAR_18 < 0)
  return VAR_2;

 if (VAR_16 && VAR_17) {
  u8 *VAR_20 = FUNC_2(VAR_14) + 1;

  if (VAR_17 > 11)
   VAR_17 = 11;
  FUNC_0(VAR_16, VAR_20, VAR_17);
 }

 return VAR_3;
}
