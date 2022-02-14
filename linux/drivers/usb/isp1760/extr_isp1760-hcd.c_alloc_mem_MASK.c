
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct isp1760_qtd {scalar_t__ length; int payload_addr; } ;
struct isp1760_hcd {TYPE_1__* memory_pool; } ;
struct TYPE_2__ {scalar_t__ size; int start; scalar_t__ free; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct isp1760_hcd* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_1, struct isp1760_qtd *VAR_2)
{
 struct isp1760_hcd *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_0(VAR_2->payload_addr);

 if (!VAR_2->length)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->memory_pool[VAR_4].size >= VAR_2->length &&
    VAR_3->memory_pool[VAR_4].free) {
   VAR_3->memory_pool[VAR_4].free = 0;
   VAR_2->payload_addr = VAR_3->memory_pool[VAR_4].start;
   return;
  }
 }
}
