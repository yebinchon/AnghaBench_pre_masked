
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_12, bool VAR_13)
{
 u32 VAR_14 = FUNC_4(VAR_7);
 u32 VAR_15 = FUNC_4(VAR_11);
 s32 VAR_16 = 0;
 u16 VAR_17;

 if (VAR_13 && (VAR_15 & VAR_6)) {
  VAR_16 = VAR_12->phy.ops.acquire(VAR_12);
  if (VAR_16)
   return VAR_16;

  VAR_16 =
      FUNC_0(VAR_12, VAR_2,
      &VAR_17);
  if (VAR_16)
   goto release;

  VAR_16 =
      FUNC_1(VAR_12,
       VAR_2,
       VAR_17 &
       ~VAR_3);
  if (VAR_16)
   goto release;

  FUNC_8(10, 20);

  FUNC_5(VAR_7, VAR_14 | VAR_1);

  VAR_16 =
      FUNC_1(VAR_12,
       VAR_2,
       VAR_17);
release:
  VAR_12->phy.ops.release(VAR_12);
 } else {

  VAR_14 &= ~VAR_1;

  if ((VAR_12->phy.revision > 5) || !VAR_13 ||
      ((VAR_15 & VAR_5) &&
       (VAR_15 & VAR_4)))
   goto update_fextnvm6;

  VAR_16 = FUNC_2(VAR_12, VAR_8, &VAR_17);
  if (VAR_16)
   return VAR_16;


  VAR_17 &= ~VAR_9;

  if (VAR_15 & VAR_5) {

   VAR_17 |= 5 << VAR_10;


   VAR_14 &= ~VAR_0;
  } else {

   VAR_17 |= 50 <<
       VAR_10;


   VAR_14 |= VAR_0;
  }

  VAR_16 = FUNC_3(VAR_12, VAR_8, VAR_17);
  if (VAR_16)
   return VAR_16;

update_fextnvm6:
  FUNC_5(VAR_7, VAR_14);
 }

 return VAR_16;
}
