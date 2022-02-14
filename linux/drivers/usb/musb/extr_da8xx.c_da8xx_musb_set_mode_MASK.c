
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb {int is_initialized; TYPE_1__* controller; } ;
struct da8xx_glue {int phy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct da8xx_glue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct musb *VAR_4, u8 VAR_5)
{
 struct da8xx_glue *VAR_6 = FUNC_0(VAR_4->controller->parent);
 enum phy_mode VAR_7;





 if (!VAR_4->is_initialized)
  return FUNC_1(VAR_6->phy, VAR_3);

 switch (VAR_5) {
 case 130:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_6->phy, VAR_7);
}
