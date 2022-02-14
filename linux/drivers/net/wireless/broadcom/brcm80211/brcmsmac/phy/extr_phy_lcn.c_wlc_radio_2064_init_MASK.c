
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct lcnphy_radio_regs {int address; scalar_t__ init_g; scalar_t__ do_init_g; scalar_t__ init_a; scalar_t__ do_init_a; } ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__* sh; TYPE_1__ pubpi; int radio_chanspec; } ;
struct TYPE_4__ {int boardflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
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
 struct lcnphy_radio_regs* VAR_12 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (struct brcms_phy*,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_8(struct brcms_phy *VAR_13)
{
 u32 VAR_14;
 const struct lcnphy_radio_regs *VAR_15 = ((void*)0);

 VAR_15 = VAR_12;

 for (VAR_14 = 0; VAR_15[VAR_14].address != 0xffff; VAR_14++)
  if (FUNC_0(VAR_13->radio_chanspec) && VAR_15[VAR_14].do_init_a)
   FUNC_7(VAR_13,
     ((VAR_15[VAR_14].address & 0x3fff) |
      VAR_11),
     (u16) VAR_15[VAR_14].init_a);
  else if (VAR_15[VAR_14].do_init_g)
   FUNC_7(VAR_13,
     ((VAR_15[VAR_14].address & 0x3fff) |
      VAR_11),
     (u16) VAR_15[VAR_14].init_g);

 FUNC_7(VAR_13, VAR_4, 0x62);
 FUNC_7(VAR_13, VAR_5, 0x19);

 FUNC_7(VAR_13, VAR_10, 0x10);

 FUNC_7(VAR_13, VAR_1, 0x00);

 if (FUNC_1(VAR_13->pubpi.phy_rev, 1)) {

  FUNC_7(VAR_13, VAR_7, 0x7f);
  FUNC_7(VAR_13, VAR_8, 0x72);
  FUNC_7(VAR_13, VAR_9, 0x7f);
 }

 FUNC_7(VAR_13, VAR_2, 0x02);
 FUNC_7(VAR_13, VAR_3, 0x06);

 FUNC_2(VAR_13, 0x4ea, (0x7 << 0), 0 << 0);

 FUNC_2(VAR_13, 0x4ea, (0x7 << 3), 1 << 3);

 FUNC_2(VAR_13, 0x4ea, (0x7 << 6), 2 << 6);

 FUNC_2(VAR_13, 0x4ea, (0x7 << 9), 3 << 9);

 FUNC_2(VAR_13, 0x4ea, (0x7 << 12), 4 << 12);

 FUNC_6(VAR_13, 0x4ea, 0x4688);

 if (VAR_13->sh->boardflags & VAR_0)
  FUNC_2(VAR_13, 0x4eb, (0x7 << 0), 2 << 0);
 else
  FUNC_2(VAR_13, 0x4eb, (0x7 << 0), 3 << 0);

 FUNC_2(VAR_13, 0x4eb, (0x7 << 6), 0 << 6);

 FUNC_2(VAR_13, 0x46a, (0xffff << 0), 25 << 0);

 FUNC_5(VAR_13, 0);

 FUNC_4(VAR_13);

 FUNC_3(VAR_13);

 if (!(VAR_13->sh->boardflags & VAR_0)) {
  FUNC_7(VAR_13, VAR_4, 0x6f);
  FUNC_7(VAR_13, VAR_5, 0x19);
  FUNC_7(VAR_13, VAR_6, 0xe);
 }

}
