
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct cc770_priv {TYPE_1__ can; int control_normal_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct cc770_priv*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 struct cc770_priv *VAR_6 = FUNC_3(VAR_5);


 FUNC_0(VAR_6, VAR_3);


 FUNC_1(VAR_6, VAR_4, VAR_1);


 FUNC_2(VAR_5);





 FUNC_1(VAR_6, VAR_2, VAR_6->control_normal_mode);

 VAR_6->can.state = VAR_0;
}
