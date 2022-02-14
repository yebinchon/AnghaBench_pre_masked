
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct phy_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct phy_device*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_6, u8 VAR_7)
{
 int VAR_8 = 0;

 if (!FUNC_0(VAR_4, VAR_7))
  return -VAR_1;

 if (VAR_7 != VAR_0) {
  VAR_8 = VAR_3;
  VAR_8 |= FUNC_1(VAR_4, VAR_7);
 }

 return FUNC_2(VAR_6, VAR_5, VAR_2,
         VAR_3 |
         VAR_4, VAR_8);
}
