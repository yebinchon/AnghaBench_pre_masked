
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int antswlut; } ;
struct TYPE_6__ {int antswlut; } ;
struct TYPE_8__ {TYPE_3__ ghz2; TYPE_2__ ghz5; } ;
struct ssb_sprom {TYPE_4__ fem; } ;
struct b43_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_5__ {struct ssb_sprom* bus_sprom; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int const) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_1)
{
 struct ssb_sprom *VAR_2 = VAR_1->dev->bus_sprom;
 u8 VAR_3;
 int VAR_4, VAR_5, VAR_6;

 const int VAR_7[] = { 0, 4, 8, };
 const u8 VAR_8[][3] = {
  { 0x2, 0x12, 0x8 },
  { 0x2, 0x18, 0x2 },
 };

 if (FUNC_2(VAR_1->wl) == VAR_0)
  VAR_3 = VAR_2->fem.ghz5.antswlut;
 else
  VAR_3 = VAR_2->fem.ghz2.antswlut;

 switch (VAR_3) {
 case 0:
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_8[0]); VAR_6++) {
    VAR_5 = VAR_4 ? 0x20 : 0x00;
    VAR_5 += VAR_7[VAR_6];
    FUNC_3(VAR_1, FUNC_1(9, VAR_5),
            VAR_8[VAR_4][VAR_6]);
   }
  }
  break;
 default:
  FUNC_4(VAR_1->wl, "Unsupported antswlut: %d\n", VAR_3);
  break;
 }
}
