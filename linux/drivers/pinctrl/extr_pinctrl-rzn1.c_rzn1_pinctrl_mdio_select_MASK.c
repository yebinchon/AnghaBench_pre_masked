
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rzn1_pinctrl {scalar_t__* mdio_func; TYPE_1__* lev2; int dev; } ;
struct TYPE_2__ {int * l2_mdio; } ;


 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct rzn1_pinctrl *VAR_0, int VAR_1,
         u32 VAR_2)
{
 if (VAR_0->mdio_func[VAR_1] >= 0 && VAR_0->mdio_func[VAR_1] != VAR_2)
  FUNC_1(VAR_0->dev, "conflicting setting for mdio%d!\n", VAR_1);
 VAR_0->mdio_func[VAR_1] = VAR_2;

 FUNC_0(VAR_0->dev, "setting mdio%d to %u\n", VAR_1, VAR_2);

 FUNC_2(VAR_2, &VAR_0->lev2->l2_mdio[VAR_1]);
}
