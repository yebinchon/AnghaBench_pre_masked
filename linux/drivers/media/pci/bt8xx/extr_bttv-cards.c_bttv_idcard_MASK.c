
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t nr; size_t type; TYPE_1__* pci; } ;
struct bttv {int cardid; TYPE_2__ c; } ;
struct TYPE_8__ {unsigned int* gpiomux; unsigned int gpiomask; int name; } ;
struct TYPE_7__ {int id; size_t cardnr; int name; } ;
struct TYPE_5__ {int subsystem_device; int subsystem_vendor; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t,unsigned int,...) ;

void FUNC_4(struct bttv *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10,VAR_11;


 VAR_8->cardid = VAR_8->c.pci->subsystem_device << 16;
 VAR_8->cardid |= VAR_8->c.pci->subsystem_vendor;

 if (0 != VAR_8->cardid && 0xffffffff != VAR_8->cardid) {

  for (VAR_11 = -1, VAR_10 = 0; VAR_6[VAR_10].id != 0; VAR_10++)
   if (VAR_6[VAR_10].id == VAR_8->cardid)
    VAR_11 = VAR_10;

  if (VAR_11 != -1) {

   FUNC_3("%d: detected: %s [card=%d], PCI subsystem ID is %04x:%04x\n",
    VAR_8->c.nr, VAR_6[VAR_11].name, VAR_6[VAR_11].cardnr,
    VAR_8->cardid & 0xffff,
    (VAR_8->cardid >> 16) & 0xffff);
   VAR_8->c.type = VAR_6[VAR_11].cardnr;
  } else {

   FUNC_3("%d: subsystem: %04x:%04x (UNKNOWN)\n",
    VAR_8->c.nr, VAR_8->cardid & 0xffff,
    (VAR_8->cardid >> 16) & 0xffff);
   FUNC_2("please mail id, board name and the correct card= insmod option to linux-media@vger.kernel.org\n");
  }
 }


 if (VAR_5[VAR_8->c.nr] < VAR_3)
  VAR_8->c.type=VAR_5[VAR_8->c.nr];


 FUNC_3("%d: using: %s [card=%d,%s]\n",
  VAR_8->c.nr, VAR_4[VAR_8->c.type].name, VAR_8->c.type,
  VAR_5[VAR_8->c.nr] < VAR_3
  ? "insmod option" : "autodetected");


 if (VAR_0 == VAR_1 && VAR_0 == VAR_2[0])
  return;

 if (VAR_0 != VAR_2[0]) {
  VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4->gpiomux); VAR_10++) {
   VAR_4[VAR_8->c.type].gpiomux[VAR_10] = VAR_2[VAR_10];
   VAR_9 |= VAR_2[VAR_10];
  }
 } else {
  VAR_9 = VAR_1;
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4->gpiomux); VAR_10++) {
   VAR_4[VAR_8->c.type].gpiomux[VAR_10] = VAR_1;
  }
 }
 VAR_4[VAR_8->c.type].gpiomask = (VAR_0 != VAR_7) ? VAR_7 : VAR_9;
 FUNC_3("%d: gpio config override: mask=0x%x, mux=",
  VAR_8->c.nr, VAR_4[VAR_8->c.type].gpiomask);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4->gpiomux); VAR_10++) {
  FUNC_1("%s0x%x",
   VAR_10 ? "," : "", VAR_4[VAR_8->c.type].gpiomux[VAR_10]);
 }
 FUNC_1("\n");
}
