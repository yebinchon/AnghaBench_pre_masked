
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int advertising; int supported; } ;


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
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ,int,int ) ;

int FUNC_5(struct phy_device *VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;

 FUNC_3(VAR_10->advertising, VAR_10->advertising,
       VAR_10->supported);

 VAR_11 = FUNC_0(VAR_10);

 VAR_13 = FUNC_2(VAR_10->advertising);

 VAR_12 = FUNC_4(VAR_10, VAR_9, VAR_8,
         VAR_1 | VAR_0 |
         VAR_3 | VAR_2,
         VAR_13);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_12 > 0)
  VAR_11 = 1;

 VAR_13 = FUNC_1(VAR_10->advertising);

 VAR_12 = FUNC_4(VAR_10, VAR_9, VAR_4,
         VAR_5 |
         VAR_7 |
         VAR_6, VAR_13);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_12 > 0)
  VAR_11 = 1;

 return VAR_11;
}
