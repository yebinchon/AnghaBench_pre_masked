
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int state; } ;
struct isp1760_udc {int lock; int * ep; TYPE_2__ gadget; TYPE_1__* isp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct isp1760_udc*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(struct isp1760_udc *VAR_6, u16 VAR_7)
{
 if (VAR_7 > 127) {
  FUNC_0(VAR_6->isp->dev, "invalid device address %u\n", VAR_7);
  return -VAR_2;
 }

 if (VAR_6->gadget.state != VAR_5 &&
     VAR_6->gadget.state != VAR_4) {
  FUNC_0(VAR_6->isp->dev, "can't set address in state %u\n",
   VAR_6->gadget.state);
  return -VAR_2;
 }

 FUNC_5(&VAR_6->gadget, VAR_7 ? VAR_4 :
        VAR_5);

 FUNC_2(VAR_6, VAR_0, VAR_1 | VAR_7);

 FUNC_3(&VAR_6->lock);
 FUNC_1(&VAR_6->ep[0], VAR_3);
 FUNC_4(&VAR_6->lock);

 return 0;
}
