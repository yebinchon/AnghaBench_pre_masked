
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct phy_device *VAR_10)
{
 u16 VAR_11;
 bool VAR_12;

 FUNC_4(VAR_10, VAR_5,
         VAR_7);

 VAR_11 = FUNC_3(VAR_10, FUNC_2(1));
 if (VAR_11 != 0x3eb7) {
  VAR_12 = 0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10, FUNC_1(1));
 if (VAR_11 != 0x4012) {
  VAR_12 = 0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10, VAR_6);
 if (VAR_11 != FUNC_0(1)) {
  VAR_12 = 0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10, VAR_3);
 if ((VAR_2 | VAR_9 | VAR_0 |
      VAR_1) != (VAR_11 & VAR_4)) {
  VAR_12 = 0;
  goto out;
 }

 VAR_12 = 1;
out:
 FUNC_4(VAR_10, VAR_5, VAR_8);

 return VAR_12;
}
