
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int (* release ) (struct igc_hw*) ;scalar_t__ (* acquire ) (struct igc_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct igc_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct igc_hw*,int,int ) ;
 scalar_t__ FUNC_1 (struct igc_hw*,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (struct igc_hw*) ;

s32 FUNC_4(struct igc_hw *VAR_3, u32 VAR_4, u16 VAR_5)
{
 u8 VAR_6 = (VAR_4 & VAR_0) >> VAR_1;
 s32 VAR_7;

 VAR_4 = VAR_4 & VAR_2;

 if (!VAR_6) {
  VAR_7 = VAR_3->phy.ops.acquire(VAR_3);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_3->phy.ops.release(VAR_3);
 } else {
  VAR_7 = FUNC_1(VAR_3, (u16)VAR_4, VAR_6,
           VAR_5);
 }

 return VAR_7;
}
