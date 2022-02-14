
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct phy_device*,char*,int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (struct phy_device*,int ,int ,int) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*,int ,int ) ;
 int FUNC_6 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 if (!FUNC_4(VAR_12))
  return FUNC_3(VAR_12, VAR_7,
       VAR_0,
       VAR_1);

 VAR_14 = FUNC_5(VAR_12, VAR_7, VAR_0);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 |= VAR_1;

 if (VAR_12->interface == VAR_8 ||
     VAR_12->interface == VAR_9) {
  VAR_14 |= VAR_3;

  VAR_13 = FUNC_2(VAR_12, "adi,rx-internal-delay-ps",
      VAR_11,
      VAR_6);
  VAR_14 &= ~VAR_4;
  VAR_14 |= FUNC_1(VAR_13);
 } else {
  VAR_14 &= ~VAR_3;
 }

 if (VAR_12->interface == VAR_8 ||
     VAR_12->interface == VAR_10) {
  VAR_14 |= VAR_5;

  VAR_13 = FUNC_2(VAR_12, "adi,tx-internal-delay-ps",
      VAR_11,
      VAR_6);
  VAR_14 &= ~VAR_2;
  VAR_14 |= FUNC_0(VAR_13);
 } else {
  VAR_14 &= ~VAR_5;
 }

 return FUNC_6(VAR_12, VAR_7,
        VAR_0, VAR_14);
}
