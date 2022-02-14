
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct phy_device {int lock; } ;
struct ethtool_wolinfo {int wolopts; int* sopass; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct phy_device*,int,int) ;
 int FUNC_5 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct phy_device *VAR_7,
       struct ethtool_wolinfo *VAR_8)
{
 int VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 u16 VAR_12[3] = {0, 0, 0};
 struct ethtool_wolinfo *VAR_13 = VAR_8;

 FUNC_2(&VAR_7->lock);
 VAR_9 = FUNC_5(VAR_7, VAR_0);
 if (VAR_9 < 0)
  goto out_unlock;

 VAR_10 = FUNC_1(VAR_7, VAR_2);
 if (VAR_10 & VAR_5)
  VAR_13->wolopts |= VAR_6;
 if (VAR_13->wolopts & VAR_6) {
  VAR_12[0] = FUNC_1(VAR_7, VAR_1);
  VAR_12[1] = FUNC_1(VAR_7, VAR_3);
  VAR_12[2] = FUNC_1(VAR_7, VAR_4);
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_12); VAR_11++) {
   VAR_13->sopass[5 - VAR_11 * 2] = VAR_12[VAR_11] & 0x00ff;
   VAR_13->sopass[5 - (VAR_11 * 2 + 1)] = (VAR_12[VAR_11] & 0xff00)
           >> 8;
  }
 }

out_unlock:
 FUNC_4(VAR_7, VAR_9, VAR_9 > 0 ? 0 : VAR_9);
 FUNC_3(&VAR_7->lock);
}
