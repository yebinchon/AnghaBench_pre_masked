
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;


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
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_21)
{
 int VAR_22;
 u32 VAR_23;
 u32 VAR_24;


 VAR_22 = FUNC_1(VAR_21, VAR_1, 0);
 if (VAR_22)
  return VAR_22;


 FUNC_0(VAR_21, VAR_2);

 FUNC_2(VAR_21, VAR_0, VAR_9,
        VAR_12 |
        VAR_13 |
        VAR_11);
 FUNC_2(VAR_21, VAR_0, VAR_15,
        VAR_10 |
        VAR_14);







 VAR_23 = VAR_16 | VAR_17;
 VAR_24 = VAR_20 | VAR_19 |
  VAR_18;
 FUNC_2(VAR_21, VAR_0, VAR_3, VAR_23);
 FUNC_2(VAR_21, VAR_0, VAR_4, VAR_24);
 FUNC_2(VAR_21, VAR_0, VAR_5, VAR_23);
 FUNC_2(VAR_21, VAR_0, VAR_6, VAR_24);
 FUNC_2(VAR_21, VAR_0, VAR_7, VAR_23);
 FUNC_2(VAR_21, VAR_0, VAR_8, VAR_24);

 return 0;
}
