
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inno_hdmi_phy {int phy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct inno_hdmi_phy *VAR_0,
            unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->phy);

 switch (VAR_2) {
 case 4:
 case 5:
 case 6:
 case 10:
 case 12:
 case 16:
  return (u64)VAR_1 * VAR_2 / 8;
 default:
  return VAR_1;
 }
}
