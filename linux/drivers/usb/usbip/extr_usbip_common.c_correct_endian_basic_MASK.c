
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header_basic {void* ep; void* direction; void* devid; void* seqnum; void* command; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct usbip_header_basic *VAR_0, int VAR_1)
{
 if (VAR_1) {
  VAR_0->command = FUNC_1(VAR_0->command);
  VAR_0->seqnum = FUNC_1(VAR_0->seqnum);
  VAR_0->devid = FUNC_1(VAR_0->devid);
  VAR_0->direction = FUNC_1(VAR_0->direction);
  VAR_0->ep = FUNC_1(VAR_0->ep);
 } else {
  VAR_0->command = FUNC_0(VAR_0->command);
  VAR_0->seqnum = FUNC_0(VAR_0->seqnum);
  VAR_0->devid = FUNC_0(VAR_0->devid);
  VAR_0->direction = FUNC_0(VAR_0->direction);
  VAR_0->ep = FUNC_0(VAR_0->ep);
 }
}
