
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {int dma; int buf; int length; } ;
struct dwc3 {int sysdev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_0,
  struct dwc3_event_buffer *VAR_1)
{
 FUNC_0(VAR_0->sysdev, VAR_1->length, VAR_1->buf, VAR_1->dma);
}
