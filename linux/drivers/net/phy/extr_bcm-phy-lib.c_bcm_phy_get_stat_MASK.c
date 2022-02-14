
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {int dummy; } ;
struct bcm_phy_hw_stat {int shift; int bits; int reg; } ;


 int VAR_0 ;
 struct bcm_phy_hw_stat* VAR_1 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static u64 FUNC_1(struct phy_device *VAR_2, u64 *VAR_3,
       unsigned int VAR_4)
{
 struct bcm_phy_hw_stat VAR_5 = VAR_1[VAR_4];
 int VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_5.reg);
 if (VAR_6 < 0) {
  VAR_7 = VAR_0;
 } else {
  VAR_6 >>= VAR_5.shift;
  VAR_6 = VAR_6 & ((1 << VAR_5.bits) - 1);
  VAR_3[VAR_4] += VAR_6;
  VAR_7 = VAR_3[VAR_4];
 }

 return VAR_7;
}
