
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct cc770_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct cc770_priv*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct cc770_priv*) ;
 int VAR_4 ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct cc770_priv *VAR_7 = FUNC_3(VAR_6);


 FUNC_1(VAR_7, VAR_3, VAR_1 | VAR_2);

 VAR_7->can.state = VAR_0;


 FUNC_0(VAR_7, VAR_4);


 FUNC_1(VAR_7, VAR_5, 0);


 FUNC_2(VAR_7);
}
