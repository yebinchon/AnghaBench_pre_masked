
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b53_vlan {int members; int untag; } ;
struct b53_device {int core_rev; TYPE_1__* ds; int * vta_regs; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct b53_device*,int ) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;

__attribute__((used)) static void FUNC_6(struct b53_device *VAR_18, u16 VAR_19,
          struct b53_vlan *VAR_20)
{
 if (FUNC_4(VAR_18)) {
  u32 VAR_21 = 0;

  if (VAR_20->members) {
   VAR_21 = ((VAR_20->untag & VAR_6) <<
     VAR_8) | VAR_20->members;
   if (VAR_18->core_rev >= 3)
    VAR_21 |= VAR_11 | VAR_19 << VAR_13;
   else
    VAR_21 |= VAR_10;
  }

  FUNC_2(VAR_18, VAR_1, VAR_4, VAR_21);
  FUNC_1(VAR_18, VAR_1, VAR_2, VAR_19 |
       VAR_16 | VAR_15);
 } else if (FUNC_5(VAR_18)) {
  u16 VAR_22 = 0;

  if (VAR_20->members)
   VAR_22 = ((VAR_20->untag & VAR_7) <<
     VAR_9) | VAR_20->members | VAR_12;

  FUNC_1(VAR_18, VAR_1, VAR_5, VAR_22);
  FUNC_1(VAR_18, VAR_1, VAR_3, VAR_19 |
       VAR_16 | VAR_15);
 } else {
  FUNC_1(VAR_18, VAR_0, VAR_18->vta_regs[1], VAR_19);
  FUNC_2(VAR_18, VAR_0, VAR_18->vta_regs[2],
       (VAR_20->untag << VAR_17) | VAR_20->members);

  FUNC_0(VAR_18, VAR_14);
 }

 FUNC_3(VAR_18->ds->dev, "VID: %d, members: 0x%04x, untag: 0x%04x\n",
  VAR_19, VAR_20->members, VAR_20->untag);
}
