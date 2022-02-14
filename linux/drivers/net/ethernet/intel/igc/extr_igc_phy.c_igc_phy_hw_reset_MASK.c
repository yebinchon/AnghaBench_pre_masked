
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* release ) (struct igc_hw*) ;scalar_t__ (* acquire ) (struct igc_hw*) ;} ;
struct igc_phy_info {TYPE_1__ ops; int reset_delay_us; } ;
struct igc_hw {struct igc_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct igc_hw*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (struct igc_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;

s32 FUNC_8(struct igc_hw *VAR_2)
{
 struct igc_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  VAR_4 = 0;
  goto out;
 }

 VAR_4 = VAR_3->ops.acquire(VAR_2);
 if (VAR_4)
  goto out;

 VAR_5 = FUNC_1(VAR_0);
 FUNC_6(VAR_0, VAR_5 | VAR_1);
 FUNC_7();

 FUNC_4(VAR_3->reset_delay_us);

 FUNC_6(VAR_0, VAR_5);
 FUNC_7();

 FUNC_5(1500, 2000);

 VAR_3->ops.release(VAR_2);

out:
 return VAR_4;
}
