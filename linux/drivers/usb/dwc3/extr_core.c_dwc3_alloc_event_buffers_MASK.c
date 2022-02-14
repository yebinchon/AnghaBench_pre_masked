
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {int dummy; } ;
struct dwc3 {struct dwc3_event_buffer* ev_buf; int dev; } ;


 scalar_t__ FUNC_0 (struct dwc3_event_buffer*) ;
 int FUNC_1 (struct dwc3_event_buffer*) ;
 int FUNC_2 (int ,char*) ;
 struct dwc3_event_buffer* FUNC_3 (struct dwc3*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct dwc3 *VAR_0, unsigned VAR_1)
{
 struct dwc3_event_buffer *VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_0->dev, "can't allocate event buffer\n");
  return FUNC_1(VAR_2);
 }
 VAR_0->ev_buf = VAR_2;

 return 0;
}
