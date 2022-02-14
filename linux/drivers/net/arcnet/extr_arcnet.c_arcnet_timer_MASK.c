
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct arcnet_local {struct net_device* dev; } ;


 struct arcnet_local* FUNC_0 (int ,struct timer_list*,int ) ;
 struct arcnet_local* VAR_0 ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct arcnet_local *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct net_device *VAR_4 = VAR_3->dev;

 if (!FUNC_2(VAR_4)) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_4, "link up\n");
 }
}
