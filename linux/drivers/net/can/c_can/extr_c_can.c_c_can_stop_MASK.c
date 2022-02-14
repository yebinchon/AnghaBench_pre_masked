
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int state; } ;
struct c_can_priv {TYPE_2__ can; int (* write_reg ) (struct c_can_priv*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c_can_priv*,int) ;
 struct c_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct c_can_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct c_can_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, 0);


 VAR_4->write_reg(VAR_4, VAR_2, VAR_1);


 FUNC_2(VAR_3->dev.parent);
 VAR_4->can.state = VAR_0;
}
