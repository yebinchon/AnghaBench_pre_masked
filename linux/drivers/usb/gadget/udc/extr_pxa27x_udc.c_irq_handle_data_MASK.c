
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa_udc {struct pxa_ep* pxa_ep; } ;
struct TYPE_2__ {int irqs; } ;
struct pxa_ep {TYPE_1__ stats; } ;


 int FUNC_0 (struct pxa_ep*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pxa_ep*) ;
 int FUNC_4 (struct pxa_udc*,int,int) ;
 int FUNC_5 (struct pxa_udc*,int ) ;
 int FUNC_6 (struct pxa_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_7, struct pxa_udc *VAR_8)
{
 int VAR_9;
 struct pxa_ep *VAR_10;
 u32 VAR_11 = FUNC_5(VAR_8, VAR_4) & VAR_0;
 u32 VAR_12 = FUNC_5(VAR_8, VAR_5) & VAR_1;

 if (VAR_11 & VAR_6) {
  VAR_8->pxa_ep[0].stats.irqs++;
  FUNC_6(VAR_8, VAR_4, FUNC_1(0, VAR_6));
  FUNC_4(VAR_8, !!(VAR_11 & VAR_2),
    !!(VAR_11 & VAR_3));
 }

 VAR_11 >>= 2;
 for (VAR_9 = 1; VAR_11 != 0 && VAR_9 < 16; VAR_11 >>= 2, VAR_9++) {
  if (!(VAR_11 & VAR_6))
   continue;

  FUNC_6(VAR_8, VAR_4, FUNC_1(VAR_9, VAR_6));

  FUNC_2(VAR_9 >= FUNC_0(VAR_8->pxa_ep));
  if (VAR_9 < FUNC_0(VAR_8->pxa_ep)) {
   VAR_10 = &VAR_8->pxa_ep[VAR_9];
   VAR_10->stats.irqs++;
   FUNC_3(VAR_10);
  }
 }

 for (VAR_9 = 16; VAR_12 != 0 && VAR_9 < 24; VAR_12 >>= 2, VAR_9++) {
  FUNC_6(VAR_8, VAR_5, FUNC_1(VAR_9 - 16, VAR_6));
  if (!(VAR_12 & VAR_6))
   continue;

  FUNC_2(VAR_9 >= FUNC_0(VAR_8->pxa_ep));
  if (VAR_9 < FUNC_0(VAR_8->pxa_ep)) {
   VAR_10 = &VAR_8->pxa_ep[VAR_9];
   VAR_10->stats.irqs++;
   FUNC_3(VAR_10);
  }
 }

}
