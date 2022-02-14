
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int rpipe_bm; int rpipes; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;

void FUNC_4(struct wahc *VAR_0)
{
 struct device *VAR_1 = &VAR_0->usb_iface->dev;

 if (!FUNC_1(VAR_0->rpipe_bm, VAR_0->rpipes)) {
  FUNC_0(1);
  FUNC_3(VAR_1, "BUG: pipes not released on exit: %*pb\n",
   VAR_0->rpipes, VAR_0->rpipe_bm);
 }
 FUNC_2(VAR_0->rpipe_bm);
}
