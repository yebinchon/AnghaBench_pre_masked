
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* otg; } ;
struct tahvo_usb {TYPE_3__ phy; TYPE_2__* pt_dev; } ;
struct retu_dev {int dummy; } ;
struct TYPE_8__ {int state; scalar_t__ gadget; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct retu_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct retu_dev*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tahvo_usb *VAR_2)
{
 struct retu_dev *VAR_3 = FUNC_0(VAR_2->pt_dev->dev.parent);


 if (VAR_2->phy.otg->gadget)
  FUNC_2(VAR_2->phy.otg->gadget);


 FUNC_1(VAR_3, VAR_1, 0);
 VAR_2->phy.otg->state = VAR_0;
}
