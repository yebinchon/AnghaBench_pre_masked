
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct at91_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct at91_priv*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct at91_priv*,int ,int) ;
 int FUNC_4 (struct at91_priv*) ;
 struct at91_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_10)
{
 struct at91_priv *VAR_11 = FUNC_5(VAR_10);
 u32 VAR_12, VAR_13;


 FUNC_3(VAR_11, VAR_0, VAR_2);


 VAR_12 = FUNC_0(VAR_11, VAR_5);
 FUNC_3(VAR_11, VAR_5, VAR_12 & ~VAR_7);

 FUNC_1(VAR_10);
 FUNC_2(VAR_10);


 if (VAR_11->can.ctrlmode & VAR_8)
  VAR_12 = VAR_7 | VAR_6;
 else
  VAR_12 = VAR_7;
 FUNC_3(VAR_11, VAR_5, VAR_12);

 VAR_11->can.state = VAR_9;


 VAR_13 = FUNC_4(VAR_11) | VAR_3 | VAR_4;
 FUNC_3(VAR_11, VAR_0, VAR_2);
 FUNC_3(VAR_11, VAR_1, VAR_13);
}
