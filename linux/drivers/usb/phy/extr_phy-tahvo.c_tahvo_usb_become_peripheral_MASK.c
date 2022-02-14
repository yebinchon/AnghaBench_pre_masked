
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* otg; } ;
struct tahvo_usb {TYPE_4__ phy; int extcon; TYPE_2__* pt_dev; } ;
struct retu_dev {int dummy; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tahvo_usb*) ;
 struct retu_dev* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct retu_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct tahvo_usb *VAR_7)
{
 struct retu_dev *VAR_8 = FUNC_1(VAR_7->pt_dev->dev.parent);

 FUNC_2(VAR_7->extcon, VAR_0, 0);


 FUNC_3(VAR_8, VAR_2, VAR_5 | VAR_4 |
     VAR_3 | VAR_6);
 VAR_7->phy.otg->state = VAR_1;

 FUNC_0(VAR_7);
}
