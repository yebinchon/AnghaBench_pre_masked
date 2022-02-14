
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5, u8 *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_1(VAR_5, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_0(VAR_0, VAR_7);
 VAR_8 = FUNC_0(VAR_1, VAR_8);

 *VAR_6 = (VAR_9 && VAR_8) ? VAR_8 : VAR_4;

 return 0;
}
