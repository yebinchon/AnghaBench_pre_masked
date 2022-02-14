
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_3 (struct phy_device*,int ) ;

int FUNC_4(struct phy_device *VAR_20)
{
 int VAR_21;

 FUNC_2(VAR_19,
          FUNC_0(VAR_19),
          VAR_20->supported);

 VAR_21 = FUNC_3(VAR_20, VAR_17);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_1(VAR_16, VAR_20->supported,
    VAR_21 & VAR_4);

 FUNC_1(VAR_12, VAR_20->supported,
    VAR_21 & VAR_0);
 FUNC_1(VAR_13, VAR_20->supported,
    VAR_21 & VAR_1);
 FUNC_1(VAR_14, VAR_20->supported,
    VAR_21 & VAR_2);
 FUNC_1(VAR_15, VAR_20->supported,
    VAR_21 & VAR_3);

 if (VAR_21 & VAR_5) {
  VAR_21 = FUNC_3(VAR_20, VAR_18);
  if (VAR_21 < 0)
   return VAR_21;

  FUNC_1(VAR_9,
     VAR_20->supported, VAR_21 & VAR_6);
  FUNC_1(VAR_10,
     VAR_20->supported, VAR_21 & VAR_7);
  FUNC_1(VAR_11,
     VAR_20->supported, VAR_21 & VAR_8);
 }

 return 0;
}
