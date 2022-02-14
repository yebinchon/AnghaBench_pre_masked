
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (struct phy_device*,int ,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_17)
{
 int VAR_18;


 VAR_18 = FUNC_0(VAR_17, VAR_15,
          VAR_14, 0);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_1(VAR_17, VAR_8,
   VAR_10);
 if (VAR_18 < 0)
  goto reset_shadow_mode;
 VAR_18 = FUNC_1(VAR_17, VAR_9,
   VAR_3);
 if (VAR_18 < 0)
  goto reset_shadow_mode;


 VAR_18 = FUNC_1(VAR_17, VAR_8,
   VAR_13);
 if (VAR_18 < 0)
  goto reset_shadow_mode;
 VAR_18 = FUNC_1(VAR_17, VAR_9,
   VAR_7);
 if (VAR_18 < 0)
  goto reset_shadow_mode;

 VAR_18 = FUNC_1(VAR_17, VAR_8,
   VAR_12);
 if (VAR_18 < 0)
  goto reset_shadow_mode;
 VAR_18 = FUNC_1(VAR_17, VAR_9,
   VAR_6);
 if (VAR_18 < 0)
  goto reset_shadow_mode;


 VAR_18 = FUNC_1(VAR_17, VAR_8,
   VAR_11);
 if (VAR_18 < 0)
  goto reset_shadow_mode;
 VAR_18 = FUNC_1(VAR_17, VAR_9,
   (VAR_5 | VAR_4));
 if (VAR_18 < 0)
  goto reset_shadow_mode;

reset_shadow_mode:

 VAR_18 = FUNC_0(VAR_17, VAR_15, 0,
          VAR_14);
 if (VAR_18 < 0)
  return VAR_18;


 FUNC_1(VAR_17, VAR_16,
    (VAR_2 | VAR_0 | VAR_1));

 return 0;
}
