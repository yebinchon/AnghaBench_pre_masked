
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
 int FUNC_0 (struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ,int ) ;

int FUNC_2(struct phy_device *VAR_7, bool VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8)
  VAR_9 |= VAR_2 | VAR_3;
 else
  VAR_9 &= ~(VAR_2 | VAR_3);

 FUNC_1(VAR_7, VAR_6, VAR_1, (u32)VAR_9);


 VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8)
  VAR_9 |= (VAR_5 | VAR_4);
 else
  VAR_9 &= ~(VAR_5 | VAR_4);

 FUNC_1(VAR_7, VAR_6, VAR_0, (u32)VAR_9);

 return 0;
}
