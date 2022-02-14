
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int dev; int id; scalar_t__ mod_phy; int sfp_bus; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct sfp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sfp*) ;
 int FUNC_5 (struct sfp*) ;

__attribute__((used)) static void FUNC_6(struct sfp *VAR_0)
{
 FUNC_3(VAR_0->sfp_bus);

 FUNC_2(VAR_0);

 if (VAR_0->mod_phy)
  FUNC_5(VAR_0);

 FUNC_4(VAR_0);

 FUNC_1(&VAR_0->id, 0, sizeof(VAR_0->id));

 FUNC_0(VAR_0->dev, "module removed\n");
}
