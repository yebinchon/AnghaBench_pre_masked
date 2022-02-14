
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dwc3_ep {int flags; } ;
struct dwc3 {struct dwc3_ep** eps; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dwc3_ep*) ;

__attribute__((used)) static void FUNC_2(struct dwc3 *VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  struct dwc3_ep *VAR_4;
  int VAR_5;

  VAR_4 = VAR_2->eps[VAR_3];
  if (!VAR_4)
   continue;

  if (!(VAR_4->flags & VAR_1))
   continue;

  VAR_4->flags &= ~VAR_1;

  VAR_5 = FUNC_1(VAR_4);
  FUNC_0(VAR_5);
 }
}
