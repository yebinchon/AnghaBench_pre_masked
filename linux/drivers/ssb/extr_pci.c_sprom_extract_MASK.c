
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ssb_sprom {int revision; int boardflags_lo; int boardflags_hi; struct ssb_sprom* et1mac; struct ssb_sprom* et0mac; } ;
struct ssb_bus {int chip_id; } ;


 int FUNC_0 (struct ssb_sprom*,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ssb_sprom*,int const*) ;
 int FUNC_4 (struct ssb_sprom*,int const*) ;
 int FUNC_5 (struct ssb_sprom*,int const*) ;

__attribute__((used)) static int FUNC_6(struct ssb_bus *VAR_0, struct ssb_sprom *VAR_1,
    const u16 *VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->revision = VAR_2[VAR_3 - 1] & 0x00FF;
 FUNC_1("SPROM revision %d detected\n", VAR_1->revision);
 FUNC_0(VAR_1->et0mac, 0xFF, 6);
 FUNC_0(VAR_1->et1mac, 0xFF, 6);

 if ((VAR_0->chip_id & 0xFF00) == 0x4400) {



  VAR_1->revision = 1;
  FUNC_1("SPROM treated as revision %d\n", VAR_1->revision);
 }

 switch (VAR_1->revision) {
 case 1:
 case 2:
 case 3:
  FUNC_3(VAR_1, VAR_2);
  break;
 case 4:
 case 5:
  FUNC_4(VAR_1, VAR_2);
  break;
 case 8:
  FUNC_5(VAR_1, VAR_2);
  break;
 default:
  FUNC_2("Unsupported SPROM revision %d detected. Will extract v1\n",
   VAR_1->revision);
  VAR_1->revision = 1;
  FUNC_3(VAR_1, VAR_2);
 }

 if (VAR_1->boardflags_lo == 0xFFFF)
  VAR_1->boardflags_lo = 0;
 if (VAR_1->boardflags_hi == 0xFFFF)
  VAR_1->boardflags_hi = 0;

 return 0;
}
