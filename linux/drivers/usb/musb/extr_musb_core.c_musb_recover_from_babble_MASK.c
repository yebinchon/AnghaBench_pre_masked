
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {scalar_t__ dyn_fifo; int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct musb *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 FUNC_2(VAR_2);





 FUNC_9(10);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return;
 }


 VAR_4 = FUNC_5(VAR_2->mregs, VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_8(VAR_2->mregs, VAR_0, VAR_4);


 FUNC_6(VAR_2);





 if (VAR_2->dyn_fifo)
  VAR_3 = FUNC_1(VAR_2);
 else
  VAR_3 = FUNC_0(VAR_2);


 if (VAR_3 == 0)
  FUNC_7(VAR_2);
}
