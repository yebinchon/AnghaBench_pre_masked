
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct igc_phy_info {scalar_t__ addr; } ;
struct igc_hw {struct igc_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_4(struct igc_hw *VAR_10, u32 VAR_11, u16 *VAR_12)
{
 struct igc_phy_info *VAR_13 = &VAR_10->phy;
 u32 VAR_14, VAR_15 = 0;
 s32 VAR_16 = 0;

 if (VAR_11 > VAR_9) {
  FUNC_0("PHY Address %d is out of range\n", VAR_11);
  VAR_16 = -VAR_0;
  goto out;
 }





 VAR_15 = ((VAR_11 << VAR_8) |
  (VAR_13->addr << VAR_6) |
  (VAR_5));

 FUNC_3(VAR_3, VAR_15);





 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  FUNC_2(500, 1000);
  VAR_15 = FUNC_1(VAR_3);
  if (VAR_15 & VAR_7)
   break;
 }
 if (!(VAR_15 & VAR_7)) {
  FUNC_0("MDI Read did not complete\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 if (VAR_15 & VAR_4) {
  FUNC_0("MDI Error\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 *VAR_12 = (u16)VAR_15;

out:
 return VAR_16;
}
