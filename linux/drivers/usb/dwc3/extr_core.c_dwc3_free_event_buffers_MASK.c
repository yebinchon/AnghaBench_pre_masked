
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {int dummy; } ;
struct dwc3 {struct dwc3_event_buffer* ev_buf; } ;


 int FUNC_0 (struct dwc3*,struct dwc3_event_buffer*) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_0)
{
 struct dwc3_event_buffer *VAR_1;

 VAR_1 = VAR_0->ev_buf;
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);
}
