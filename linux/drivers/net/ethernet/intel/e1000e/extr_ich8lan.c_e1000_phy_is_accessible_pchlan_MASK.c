
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {int id; int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;

__attribute__((used)) static bool FUNC_8(struct e1000_hw *VAR_10)
{
 u16 VAR_11 = 0;
 u32 VAR_12 = 0;
 s32 VAR_13 = 0;
 u16 VAR_14;
 u32 VAR_15 = 0;

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_13 = FUNC_2(VAR_10, VAR_6, &VAR_11);
  if (VAR_13 || (VAR_11 == 0xFFFF))
   continue;
  VAR_12 = (u32)(VAR_11 << 16);

  VAR_13 = FUNC_2(VAR_10, VAR_7, &VAR_11);
  if (VAR_13 || (VAR_11 == 0xFFFF)) {
   VAR_12 = 0;
   continue;
  }
  VAR_12 |= (u32)(VAR_11 & VAR_8);
  break;
 }

 if (VAR_10->phy.id) {
  if (VAR_10->phy.id == VAR_12)
   goto out;
 } else if (VAR_12) {
  VAR_10->phy.id = VAR_12;
  VAR_10->phy.revision = (u32)(VAR_11 & ~VAR_8);
  goto out;
 }




 if (VAR_10->mac.type < VAR_9) {
  VAR_10->phy.ops.release(VAR_10);
  VAR_13 = FUNC_0(VAR_10);
  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_10);
  VAR_10->phy.ops.acquire(VAR_10);
 }

 if (VAR_13)
  return 0;
out:
 if (VAR_10->mac.type >= VAR_9) {

  if (!(FUNC_4(VAR_5) & VAR_4)) {

   FUNC_2(VAR_10, VAR_1, &VAR_11);
   VAR_11 &= ~VAR_2;
   FUNC_3(VAR_10, VAR_1, VAR_11);


   VAR_15 = FUNC_4(VAR_0);
   VAR_15 &= ~VAR_3;
   FUNC_5(VAR_0, VAR_15);
  }
 }

 return 1;
}
