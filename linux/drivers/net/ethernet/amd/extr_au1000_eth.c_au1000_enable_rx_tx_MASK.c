
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct au1000_private {TYPE_1__* mac; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct au1000_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct au1000_private *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 FUNC_2(VAR_4, VAR_2, VAR_3, "enable_rx_tx\n");

 VAR_5 = FUNC_3(&VAR_4->mac->control);
 VAR_5 |= (VAR_0 | VAR_1);
 FUNC_5(VAR_5, &VAR_4->mac->control);
 FUNC_4();
 FUNC_0(10);
}
