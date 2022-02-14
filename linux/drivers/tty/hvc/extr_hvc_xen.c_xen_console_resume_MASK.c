
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_info {scalar_t__ irq; int evtchn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct xencons_info* FUNC_1 (int ) ;
 int FUNC_2 (struct xencons_info*) ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 struct xencons_info *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0) && VAR_1->irq) {
  if (!FUNC_3())
   FUNC_2(VAR_1);
  FUNC_0(VAR_1->evtchn, VAR_1->irq);
 }
}
