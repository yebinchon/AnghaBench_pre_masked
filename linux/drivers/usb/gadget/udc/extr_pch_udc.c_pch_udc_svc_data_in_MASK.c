
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pch_udc_ep {int epsts; int num; int in; int dev; } ;
struct pch_udc_dev {int prot_stall; struct pch_udc_ep* ep; } ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct pch_udc_ep*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pch_udc_ep*) ;
 int FUNC_5 (struct pch_udc_ep*) ;
 int FUNC_6 (struct pch_udc_ep*) ;

__attribute__((used)) static void FUNC_7(struct pch_udc_dev *VAR_8, int VAR_9)
{
 u32 VAR_10;
 struct pch_udc_ep *VAR_11;

 VAR_11 = &VAR_8->ep[FUNC_1(VAR_9)];
 VAR_10 = VAR_11->epsts;
 VAR_11->epsts = 0;

 if (!(VAR_10 & (VAR_2 | VAR_0 | VAR_1 |
         VAR_5 | VAR_3 | VAR_6 |
         VAR_4 | VAR_7)))
  return;
 if ((VAR_10 & VAR_0))
  return;
 if (VAR_10 & VAR_1)
  return;
 if (VAR_10 & VAR_4) {
  FUNC_5(VAR_11);
  FUNC_3(VAR_11->dev,
          FUNC_0(VAR_11->in, VAR_11->num));
 }
 if (VAR_10 & VAR_3) {
  if (!VAR_8->prot_stall) {
   FUNC_4(VAR_11);
  } else {
   FUNC_5(VAR_11);
   FUNC_3(VAR_11->dev,
      FUNC_0(VAR_11->in, VAR_11->num));
  }
 }
 if (VAR_10 & VAR_5)
  FUNC_2(VAR_11);

 if ((VAR_10 & VAR_2) && !(VAR_10 & VAR_4) &&
     !(VAR_10 & VAR_5) && !(VAR_10 & VAR_6))
  FUNC_6(VAR_11);
}
