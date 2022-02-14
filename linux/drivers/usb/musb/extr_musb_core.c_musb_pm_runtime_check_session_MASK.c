
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {int quirk_retries; int session; int controller; int irq_work; int flush_irq_work; int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct musb*,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct musb *VAR_5)
{
 u8 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_5->mregs, VAR_0);


 VAR_7 = VAR_1 | VAR_3 |
  VAR_2;
 switch (VAR_6 & ~VAR_7) {
 case 128:
  if (VAR_5->quirk_retries && !VAR_5->flush_irq_work) {
   FUNC_2(VAR_5,
     "Poll devctl on invalid vbus, assume no session");
   FUNC_7(&VAR_5->irq_work,
           FUNC_1(1000));
   VAR_5->quirk_retries--;
   return;
  }

 case 129:
  if (VAR_5->quirk_retries && !VAR_5->flush_irq_work) {
   FUNC_2(VAR_5,
     "Poll devctl on possible host mode disconnect");
   FUNC_7(&VAR_5->irq_work,
           FUNC_1(1000));
   VAR_5->quirk_retries--;
   return;
  }
  if (!VAR_5->session)
   break;
  FUNC_2(VAR_5, "Allow PM on possible host mode disconnect");
  FUNC_5(VAR_5->controller);
  FUNC_6(VAR_5->controller);
  VAR_5->session = 0;
  return;
 default:
  break;
 }


 VAR_7 = VAR_6 & VAR_4;
 if (VAR_7 == VAR_5->session)
  return;


 if (VAR_7) {
  FUNC_2(VAR_5, "Block PM on active session: %02x", VAR_6);
  VAR_8 = FUNC_4(VAR_5->controller);
  if (VAR_8 < 0)
   FUNC_0(VAR_5->controller, "Could not enable: %i\n",
    VAR_8);
  VAR_5->quirk_retries = 3;
 } else {
  FUNC_2(VAR_5, "Allow PM with no session: %02x", VAR_6);
  FUNC_5(VAR_5->controller);
  FUNC_6(VAR_5->controller);
 }

 VAR_5->session = VAR_7;
}
