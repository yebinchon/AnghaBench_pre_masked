
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lan9303 {int phy_addr_base; TYPE_1__* ds; int dev; } ;
struct TYPE_3__ {int phys_mii_mask; int * ops; struct lan9303* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct lan9303 *VAR_3)
{
 int VAR_4;

 VAR_3->ds = FUNC_2(VAR_3->dev, VAR_1);
 if (!VAR_3->ds)
  return -VAR_0;

 VAR_3->ds->priv = VAR_3;
 VAR_3->ds->ops = &VAR_2;
 VAR_4 = VAR_3->phy_addr_base;
 VAR_3->ds->phys_mii_mask = FUNC_0(VAR_1 - 1 + VAR_4, VAR_4);

 return FUNC_1(VAR_3->ds);
}
