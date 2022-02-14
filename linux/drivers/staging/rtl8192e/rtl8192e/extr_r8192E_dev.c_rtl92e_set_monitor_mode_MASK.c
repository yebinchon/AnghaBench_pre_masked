
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int ReceiveConfig; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_2, bool VAR_3,
        bool VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3)
  VAR_5->ReceiveConfig |= VAR_1;
 else
  VAR_5->ReceiveConfig &= ~VAR_1;

 if (VAR_4)
  FUNC_0(VAR_2, VAR_0, VAR_5->ReceiveConfig);
}
