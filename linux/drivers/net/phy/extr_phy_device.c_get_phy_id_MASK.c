
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_c45_device_ids {int dummy; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_bus*,int,int*,struct phy_c45_device_ids*) ;
 int FUNC_1 (struct mii_bus*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_4, int VAR_5, u32 *VAR_6,
        bool VAR_7, struct phy_c45_device_ids *VAR_8)
{
 int VAR_9;

 if (VAR_7)
  return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8);


 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (VAR_9 < 0) {

  return (VAR_9 == -VAR_0 || VAR_9 == -VAR_1) ? -VAR_1 : -VAR_0;
 }

 *VAR_6 = VAR_9 << 16;


 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_3);
 if (VAR_9 < 0)
  return -VAR_0;

 *VAR_6 |= VAR_9;

 return 0;
}
