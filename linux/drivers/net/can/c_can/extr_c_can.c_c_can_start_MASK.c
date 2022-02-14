
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct c_can_priv {scalar_t__ type; int device; TYPE_1__ can; int comm_rcv_high; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pinctrl*) ;
 int FUNC_1 (struct net_device*) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 struct pinctrl* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pinctrl*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct c_can_priv *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;
 struct pinctrl *VAR_7;


 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_5->comm_rcv_high = VAR_5->type != VAR_0 ?
  VAR_3 : VAR_2;

 VAR_5->can.state = VAR_1;


 VAR_7 = FUNC_3(VAR_5->device, "active");
 if (!FUNC_0(VAR_7))
  FUNC_5(VAR_7);
 else
  FUNC_4(VAR_5->device);

 return 0;
}
