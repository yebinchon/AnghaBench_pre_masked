
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int phy_addr; } ;


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
 int FUNC_0 (struct niu*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct niu*,int ,int ,int ) ;
 int FUNC_3 (struct niu*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_19)
{
 int VAR_20;

 VAR_20 = FUNC_3(VAR_19, VAR_19->phy_addr,
    VAR_1, VAR_0,
    (VAR_11 |
     VAR_5 |
     VAR_4 |
     VAR_6 |
     VAR_9 |
     VAR_8 |
     VAR_7 |
     VAR_10 |
     (0x3f << VAR_12)));
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_19, VAR_19->phy_addr,
    VAR_1, VAR_3,
    (VAR_18 |
     (1 << VAR_17) |
     (2 << VAR_16) |
     VAR_15));
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_0(VAR_19, VAR_0);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_0(VAR_19, VAR_3);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_19, VAR_19->phy_addr, VAR_1,
   VAR_2);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_20 &= ~VAR_13;
 VAR_20 |= (0x3 << VAR_14);
 VAR_20 = FUNC_3(VAR_19, VAR_19->phy_addr, VAR_1,
    VAR_2, VAR_20);
 if (VAR_20)
  return VAR_20;

 FUNC_1(1000);

 return 0;
}
