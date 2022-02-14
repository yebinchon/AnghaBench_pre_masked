
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5, u8 *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_9 = FUNC_0(VAR_2, VAR_7);
 VAR_8 = FUNC_0(VAR_3, VAR_7);

 *VAR_6 = VAR_9 && VAR_8 ? VAR_8 : VAR_0;

 return 0;
}
