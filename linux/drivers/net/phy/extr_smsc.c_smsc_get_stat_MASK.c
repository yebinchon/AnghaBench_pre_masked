
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smsc_hw_stat {int reg; } ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ) ;
 struct smsc_hw_stat* VAR_1 ;

__attribute__((used)) static u64 FUNC_1(struct phy_device *VAR_2, int VAR_3)
{
 struct smsc_hw_stat VAR_4 = VAR_1[VAR_3];
 int VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_4.reg);
 if (VAR_5 < 0)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_5;

 return VAR_6;
}
