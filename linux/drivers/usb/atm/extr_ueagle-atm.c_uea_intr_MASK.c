
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; struct intr_pkt* transfer_buffer; struct uea_softc* context; } ;
struct uea_softc {int urb_int; int (* dispatch_cmv ) (struct uea_softc*,struct intr_pkt*) ;int (* schedule_load_page ) (struct uea_softc*,struct intr_pkt*) ;scalar_t__ booting; } ;
struct intr_pkt {int bType; int wInterrupt; } ;


 int VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct uea_softc*,struct intr_pkt*) ;
 int FUNC_3 (struct uea_softc*,struct intr_pkt*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_1)
{
 struct uea_softc *VAR_2 = VAR_1->context;
 struct intr_pkt *VAR_3 = VAR_1->transfer_buffer;
 int VAR_4 = VAR_1->status;

 FUNC_4(FUNC_0(VAR_2));

 if (FUNC_6(VAR_4 < 0)) {
  FUNC_5(FUNC_0(VAR_2), "uea_intr() failed with %d\n",
         VAR_4);
  return;
 }


 if (VAR_3->bType != 0x08 || VAR_2->booting) {
  FUNC_5(FUNC_0(VAR_2), "wrong interrupt\n");
  goto resubmit;
 }

 switch (FUNC_1(VAR_3->wInterrupt)) {
 case 128:
  VAR_2->schedule_load_page(VAR_2, VAR_3);
  break;

 case 129:
  VAR_2->dispatch_cmv(VAR_2, VAR_3);
  break;

 default:
  FUNC_5(FUNC_0(VAR_2), "unknown interrupt %u\n",
         FUNC_1(VAR_3->wInterrupt));
 }

resubmit:
 FUNC_7(VAR_2->urb_int, VAR_0);
}
