
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_event_depevt {int status; } ;
struct dwc3_ep {int flags; int started_list; struct dwc3* dwc; } ;
struct dwc3 {scalar_t__ revision; int u1u2; int regs; struct dwc3_ep** eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct dwc3_ep*,struct dwc3_event_depevt const*) ;
 int FUNC_1 (struct dwc3_ep*,struct dwc3_event_depevt const*,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dwc3_ep*,int,int) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dwc3_ep *VAR_8,
  const struct dwc3_event_depevt *VAR_9)
{
 struct dwc3 *VAR_10 = VAR_8->dwc;
 unsigned VAR_11 = 0;
 bool VAR_12 = 0;

 FUNC_0(VAR_8, VAR_9);

 if (VAR_9->status & VAR_0)
  VAR_11 = -VAR_6;

 if (VAR_9->status & VAR_1) {
  VAR_11 = -VAR_7;

  if (FUNC_5(&VAR_8->started_list))
   VAR_12 = 1;
 }

 FUNC_1(VAR_8, VAR_9, VAR_11);

 if (VAR_12) {
  FUNC_3(VAR_8, 1, 1);
  VAR_8->flags = VAR_4;
 }





 if (VAR_10->revision < VAR_5) {
  u32 VAR_13;
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   VAR_8 = VAR_10->eps[VAR_14];

   if (!(VAR_8->flags & VAR_4))
    continue;

   if (!FUNC_5(&VAR_8->started_list))
    return;
  }

  VAR_13 = FUNC_2(VAR_10->regs, VAR_2);
  VAR_13 |= VAR_10->u1u2;
  FUNC_4(VAR_10->regs, VAR_2, VAR_13);

  VAR_10->u1u2 = 0;
 }
}
