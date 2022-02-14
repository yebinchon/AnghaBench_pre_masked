
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct dwc3 {int setup_packet_pending; int connected; TYPE_1__ gadget; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->regs, VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_2(VAR_5->regs, VAR_0, VAR_6);

 VAR_6 &= ~VAR_2;
 FUNC_2(VAR_5->regs, VAR_0, VAR_6);

 FUNC_0(VAR_5);

 VAR_5->gadget.speed = VAR_3;
 VAR_5->setup_packet_pending = 0;
 FUNC_3(&VAR_5->gadget, VAR_4);

 VAR_5->connected = 0;
}
