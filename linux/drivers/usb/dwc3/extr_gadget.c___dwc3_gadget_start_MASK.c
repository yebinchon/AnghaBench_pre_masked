
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dwc3_ep {int name; } ;
struct dwc3 {struct dwc3_ep** eps; int link_state; int ep0state; int dev; int regs; scalar_t__ imod_interval; } ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dwc3_ep*) ;
 int FUNC_3 (struct dwc3_ep*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (struct dwc3*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (struct dwc3*) ;
 scalar_t__ FUNC_9 (struct dwc3*) ;
 scalar_t__ FUNC_10 (struct dwc3*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct dwc3 *VAR_8)
{
 struct dwc3_ep *VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;





 if (VAR_8->imod_interval) {
  FUNC_12(VAR_8->regs, FUNC_0(0), VAR_8->imod_interval);
  FUNC_12(VAR_8->regs, FUNC_1(0), VAR_2);
 } else if (FUNC_9(VAR_8)) {
  FUNC_12(VAR_8->regs, FUNC_0(0), 0);
 }
 VAR_11 = FUNC_11(VAR_8->regs, VAR_3);
 if (FUNC_10(VAR_8))
  VAR_11 &= ~VAR_0;
 else
  VAR_11 &= ~VAR_4;

 FUNC_12(VAR_8->regs, VAR_3, VAR_11);

 FUNC_8(VAR_8);


 VAR_7.wMaxPacketSize = FUNC_4(512);

 VAR_9 = VAR_8->eps[0];
 VAR_10 = FUNC_3(VAR_9, VAR_1);
 if (VAR_10) {
  FUNC_5(VAR_8->dev, "failed to enable %s\n", VAR_9->name);
  goto err0;
 }

 VAR_9 = VAR_8->eps[1];
 VAR_10 = FUNC_3(VAR_9, VAR_1);
 if (VAR_10) {
  FUNC_5(VAR_8->dev, "failed to enable %s\n", VAR_9->name);
  goto err1;
 }


 VAR_8->ep0state = VAR_6;
 VAR_8->link_state = VAR_5;
 FUNC_6(VAR_8);

 FUNC_7(VAR_8);

 return 0;

err1:
 FUNC_2(VAR_8->eps[0]);

err0:
 return VAR_10;
}
