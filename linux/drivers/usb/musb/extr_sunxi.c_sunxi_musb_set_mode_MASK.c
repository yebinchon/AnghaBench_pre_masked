
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sunxi_glue {int phy_mode; int work; int flags; } ;
struct musb {int const port_mode; int port1_status; TYPE_1__* controller; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 struct sunxi_glue* FUNC_1 (int ) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_6, u8 VAR_7)
{
 struct sunxi_glue *VAR_8 = FUNC_1(VAR_6->controller->parent);
 enum phy_mode VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 default:
  FUNC_0(VAR_6->controller->parent,
   "Error requested mode not supported by this kernel\n");
  return -VAR_0;
 }

 if (VAR_8->phy_mode == VAR_9)
  return 0;

 if (VAR_6->port_mode != 129) {
  FUNC_0(VAR_6->controller->parent,
   "Error changing modes is only supported in dual role mode\n");
  return -VAR_0;
 }

 if (VAR_6->port1_status & VAR_5)
  FUNC_2(VAR_6);





 VAR_8->phy_mode = VAR_9;
 FUNC_4(VAR_4, &VAR_8->flags);
 FUNC_3(&VAR_8->work);

 return 0;
}
