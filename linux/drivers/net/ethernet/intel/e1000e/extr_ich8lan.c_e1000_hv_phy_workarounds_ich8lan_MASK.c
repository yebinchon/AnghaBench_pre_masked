
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; int revision; int addr; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = 0;
 u16 VAR_10;

 if (VAR_8->mac.type != VAR_5)
  return 0;


 if (VAR_8->phy.type == VAR_6) {
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 if (((VAR_8->phy.type == VAR_6) &&
      ((VAR_8->phy.revision == 1) || (VAR_8->phy.revision == 2))) ||
     ((VAR_8->phy.type == VAR_7) && (VAR_8->phy.revision == 1))) {

  VAR_9 = FUNC_7(VAR_8, FUNC_0(769, 25), 0x4431);
  if (VAR_9)
   return VAR_9;


  VAR_9 = FUNC_7(VAR_8, VAR_1, 0xA204);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_8->phy.type == VAR_7) {



  if (VAR_8->phy.revision < 2) {
   FUNC_4(VAR_8);
   VAR_9 = FUNC_7(VAR_8, VAR_4, 0x3140);
   if (VAR_9)
    return VAR_9;
  }
 }


 VAR_9 = VAR_8->phy.ops.acquire(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8->phy.addr = 1;
 VAR_9 = FUNC_5(VAR_8, VAR_3, 0);
 VAR_8->phy.ops.release(VAR_8);
 if (VAR_9)
  return VAR_9;




 VAR_9 = FUNC_1(VAR_8, 1);
 if (VAR_9)
  return VAR_9;


 VAR_9 = VAR_8->phy.ops.acquire(VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_6(VAR_8, VAR_0, &VAR_10);
 if (VAR_9)
  goto release;
 VAR_9 = FUNC_8(VAR_8, VAR_0, VAR_10 & 0x00FF);
 if (VAR_9)
  goto release;


 VAR_9 = FUNC_3(VAR_8, VAR_2, 0x0034);
release:
 VAR_8->phy.ops.release(VAR_8);

 return VAR_9;
}
