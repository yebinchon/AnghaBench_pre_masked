
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ksz_device {scalar_t__ synclko_125; int * regmap; } ;


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
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int ,int *) ;
 int FUNC_2 (struct ksz_device*,int ,int*) ;
 int FUNC_3 (struct ksz_device*,int ,int) ;
 int FUNC_4 (struct ksz_device*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ksz_device *VAR_21)
{
 u8 VAR_22;
 u32 VAR_23;


 FUNC_0(VAR_21, VAR_8, VAR_19, 1);


 FUNC_5(VAR_21->regmap[0], VAR_4,
      VAR_11, 0);


 FUNC_2(VAR_21, VAR_6, &VAR_22);
 VAR_22 = VAR_13 | VAR_17 |
       VAR_20 | VAR_16 | VAR_15;
 FUNC_4(VAR_21, VAR_6, VAR_22);


 FUNC_3(VAR_21, VAR_5, VAR_12);
 FUNC_3(VAR_21, VAR_9, 0x7F);
 FUNC_1(VAR_21, VAR_10, &VAR_23);


 FUNC_5(VAR_21->regmap[1], VAR_7,
      VAR_1,
      (VAR_2 *
      VAR_0) / 100);

 if (VAR_21->synclko_125)
  FUNC_4(VAR_21, VAR_3,
      VAR_14 | VAR_18);

 return 0;
}
