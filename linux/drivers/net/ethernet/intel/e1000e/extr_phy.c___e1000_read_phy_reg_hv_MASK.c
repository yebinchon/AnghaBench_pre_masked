
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; int addr; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*,int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int,int*) ;
 int FUNC_7 (char*,int,int,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_5, u32 VAR_6, u16 *VAR_7,
       bool VAR_8, bool VAR_9)
{
 s32 VAR_10;
 u16 VAR_11 = FUNC_1(VAR_6);
 u16 VAR_12 = FUNC_0(VAR_6);
 u32 VAR_13 = VAR_5->phy.addr = FUNC_4(VAR_11);

 if (!VAR_8) {
  VAR_10 = VAR_5->phy.ops.acquire(VAR_5);
  if (VAR_10)
   return VAR_10;
 }


 if (VAR_11 == VAR_0) {
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7,
        1, VAR_9);
  goto out;
 }

 if (VAR_11 > 0 && VAR_11 < VAR_1) {
  VAR_10 = FUNC_2(VAR_5, VAR_6,
        VAR_7, 1);
  goto out;
 }

 if (!VAR_9) {
  if (VAR_11 == VAR_1)
   VAR_11 = 0;

  if (VAR_12 > VAR_3) {

   VAR_10 = FUNC_5(VAR_5,
           (VAR_11 << VAR_2));

   VAR_5->phy.addr = VAR_13;

   if (VAR_10)
    goto out;
  }
 }

 FUNC_7("reading PHY page %d (or 0x%x shifted) reg 0x%x\n", VAR_11,
       VAR_11 << VAR_2, VAR_12);

 VAR_10 = FUNC_6(VAR_5, VAR_4 & VAR_12, VAR_7);
out:
 if (!VAR_8)
  VAR_5->phy.ops.release(VAR_5);

 return VAR_10;
}
