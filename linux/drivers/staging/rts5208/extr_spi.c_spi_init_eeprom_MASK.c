
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ asic_code; } ;


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
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_16)
{
 int VAR_17;
 int VAR_18;

 if (VAR_16->asic_code)
  VAR_18 = 30;
 else
  VAR_18 = VAR_2;

 VAR_17 = FUNC_0(VAR_16, VAR_8, 0xFF, 0x00);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_0(VAR_16, VAR_7, 0xFF, 0x27);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_16, VAR_18);
 if (VAR_17 != VAR_15)
  return VAR_14;

 VAR_17 = FUNC_1(VAR_16, VAR_6);
 if (VAR_17 != VAR_15)
  return VAR_14;

 VAR_17 = FUNC_0(VAR_16, VAR_0, VAR_9,
         VAR_9);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_0(VAR_16, VAR_1, VAR_12,
         VAR_12);
 if (VAR_17)
  return VAR_17;

 FUNC_3(10);

 VAR_17 = FUNC_0(VAR_16, VAR_10, 0xFF,
         VAR_3 | VAR_11);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_0(VAR_16, VAR_13, VAR_4,
         VAR_5);
 if (VAR_17)
  return VAR_17;

 return VAR_15;
}
