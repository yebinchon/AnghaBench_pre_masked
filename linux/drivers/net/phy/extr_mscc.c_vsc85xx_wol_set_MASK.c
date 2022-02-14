
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct phy_device {int lock; TYPE_1__* attached_dev; } ;
struct ethtool_wolinfo {int wolopts; int* sopass; } ;
struct TYPE_2__ {size_t* dev_addr; } ;


 size_t FUNC_0 (int*) ;
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
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct phy_device*,int ) ;
 int FUNC_6 (struct phy_device*,int,int) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct phy_device *VAR_14,
      struct ethtool_wolinfo *VAR_15)
{
 int VAR_16;
 u16 VAR_17;
 u8 VAR_18;
 u16 VAR_19[3] = {0, 0, 0};
 struct ethtool_wolinfo *VAR_20 = VAR_15;
 u8 *VAR_21 = VAR_14->attached_dev->dev_addr;

 FUNC_3(&VAR_14->lock);
 VAR_16 = FUNC_7(VAR_14, VAR_3);
 if (VAR_16 < 0) {
  VAR_16 = FUNC_6(VAR_14, VAR_16, VAR_16);
  goto out_unlock;
 }

 if (VAR_15->wolopts & VAR_12) {

  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_19); VAR_18++)
   VAR_19[VAR_18] = VAR_21[5 - (VAR_18 * 2 + 1)] << 8 |
     VAR_21[5 - VAR_18 * 2];
  FUNC_2(VAR_14, VAR_4, VAR_19[0]);
  FUNC_2(VAR_14, VAR_7, VAR_19[1]);
  FUNC_2(VAR_14, VAR_9, VAR_19[2]);
 } else {
  FUNC_2(VAR_14, VAR_4, 0);
  FUNC_2(VAR_14, VAR_7, 0);
  FUNC_2(VAR_14, VAR_9, 0);
 }

 if (VAR_20->wolopts & VAR_13) {
  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_19); VAR_18++)
   VAR_19[VAR_18] = VAR_20->sopass[5 - (VAR_18 * 2 + 1)] << 8 |
     VAR_20->sopass[5 - VAR_18 * 2];
  FUNC_2(VAR_14, VAR_5, VAR_19[0]);
  FUNC_2(VAR_14, VAR_8, VAR_19[1]);
  FUNC_2(VAR_14, VAR_10, VAR_19[2]);
 } else {
  FUNC_2(VAR_14, VAR_5, 0);
  FUNC_2(VAR_14, VAR_8, 0);
  FUNC_2(VAR_14, VAR_10, 0);
 }

 VAR_17 = FUNC_1(VAR_14, VAR_6);
 if (VAR_20->wolopts & VAR_13)
  VAR_17 |= VAR_11;
 else
  VAR_17 &= ~VAR_11;
 FUNC_2(VAR_14, VAR_6, VAR_17);

 VAR_16 = FUNC_6(VAR_14, VAR_16, VAR_16 > 0 ? 0 : VAR_16);
 if (VAR_16 < 0)
  goto out_unlock;

 if (VAR_15->wolopts & VAR_12) {

  VAR_17 = FUNC_5(VAR_14, VAR_0);
  VAR_17 |= VAR_1;
  VAR_16 = FUNC_8(VAR_14, VAR_0, VAR_17);
  if (VAR_16)
   goto out_unlock;
 } else {

  VAR_17 = FUNC_5(VAR_14, VAR_0);
  VAR_17 &= (~VAR_1);
  VAR_16 = FUNC_8(VAR_14, VAR_0, VAR_17);
  if (VAR_16)
   goto out_unlock;
 }

 VAR_17 = FUNC_5(VAR_14, VAR_2);

out_unlock:
 FUNC_4(&VAR_14->lock);

 return VAR_16;
}
