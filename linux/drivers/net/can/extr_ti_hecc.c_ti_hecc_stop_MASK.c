
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ti_hecc_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ti_hecc_priv*,int ,int ) ;
 int FUNC_1 (struct ti_hecc_priv*,int ,int ) ;
 struct ti_hecc_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 struct ti_hecc_priv *VAR_7 = FUNC_2(VAR_6);


 FUNC_0(VAR_7, VAR_2, VAR_3);


 FUNC_1(VAR_7, VAR_1, 0);
 FUNC_1(VAR_7, VAR_5, 0);
 FUNC_1(VAR_7, VAR_4, 0);
 VAR_7->can.state = VAR_0;
}
