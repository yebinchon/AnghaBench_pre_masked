
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;
struct ethtool_eee {scalar_t__ eee_enabled; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,struct ethtool_eee*) ;
 int FUNC_3 (struct phy_device*,int ,int ,int) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;
 int FUNC_5 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_9, const u8 *VAR_10)
{
 struct ethtool_eee VAR_11;
 int VAR_12, VAR_13;

 if (*VAR_10 == VAR_1)
  return FUNC_1(VAR_9, VAR_2,
          VAR_3);




 VAR_13 = FUNC_2(VAR_9, &VAR_11);
 if (!VAR_13 && VAR_11.eee_enabled) {
  FUNC_5(VAR_9, "Fast Link Down detection requires EEE to be disabled!\n");
  return -VAR_0;
 }

 if (*VAR_10 <= 5)
  VAR_12 = VAR_4;
 else if (*VAR_10 <= 15)
  VAR_12 = VAR_5;
 else if (*VAR_10 <= 30)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_7;

 VAR_12 = FUNC_0(VAR_8, VAR_12);

 VAR_13 = FUNC_3(VAR_9, VAR_2,
    VAR_8, VAR_12);
 if (VAR_13)
  return VAR_13;

 return FUNC_4(VAR_9, VAR_2,
       VAR_3);
}
