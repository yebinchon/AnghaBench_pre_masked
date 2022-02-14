
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u16 ;
struct radio_regs {int address; scalar_t__ init_g; scalar_t__ do_init_g; scalar_t__ init_a; scalar_t__ do_init_a; } ;
struct brcms_phy {int radio_chanspec; } ;


 int FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

uint
FUNC_4(struct brcms_phy *VAR_0,
   const struct radio_regs *VAR_1,
   u16 VAR_2)
{
 uint VAR_3 = 0;
 uint VAR_4 = 0;

 do {
  if (FUNC_1(VAR_0->radio_chanspec)) {
   if (VAR_1[VAR_3].do_init_a) {
    FUNC_3(VAR_0,
      VAR_1[VAR_3].
      address | VAR_2,
      (u16) VAR_1[VAR_3].init_a);
    if (FUNC_2(VAR_0) && (++VAR_4 % 4 == 0))
     FUNC_0(VAR_0);
   }
  } else {
   if (VAR_1[VAR_3].do_init_g) {
    FUNC_3(VAR_0,
      VAR_1[VAR_3].
      address | VAR_2,
      (u16) VAR_1[VAR_3].init_g);
    if (FUNC_2(VAR_0) && (++VAR_4 % 4 == 0))
     FUNC_0(VAR_0);
   }
  }

  VAR_3++;
 } while (VAR_1[VAR_3].address != 0xffff);

 return VAR_3;
}
