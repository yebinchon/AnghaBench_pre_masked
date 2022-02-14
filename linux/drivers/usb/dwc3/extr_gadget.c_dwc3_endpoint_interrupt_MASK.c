
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct dwc3_event_depevt {size_t endpoint_number; int endpoint_event; int parameters; } ;
struct dwc3_ep {int flags; } ;
struct dwc3 {struct dwc3_ep** eps; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc3*,struct dwc3_event_depevt const*) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_event_depevt const*) ;
 int FUNC_3 (struct dwc3_ep*,struct dwc3_event_depevt const*) ;
 int FUNC_4 (struct dwc3_ep*) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_3,
  const struct dwc3_event_depevt *VAR_4)
{
 struct dwc3_ep *VAR_5;
 u8 VAR_6 = VAR_4->endpoint_number;
 u8 VAR_7;

 VAR_5 = VAR_3->eps[VAR_6];

 if (!(VAR_5->flags & VAR_1)) {
  if (!(VAR_5->flags & VAR_2))
   return;


  if (VAR_4->endpoint_event != 133)
   return;
 }

 if (VAR_6 == 0 || VAR_6 == 1) {
  FUNC_1(VAR_3, VAR_4);
  return;
 }

 switch (VAR_4->endpoint_event) {
 case 129:
  FUNC_2(VAR_5, VAR_4);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_4);
  break;
 case 133:
  VAR_7 = FUNC_0(VAR_4->parameters);

  if (VAR_7 == VAR_0) {
   VAR_5->flags &= ~VAR_2;
   FUNC_4(VAR_5);
  }
  break;
 case 131:
 case 130:
 case 132:
  break;
 }
}
