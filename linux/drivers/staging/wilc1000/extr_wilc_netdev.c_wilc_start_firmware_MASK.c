
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int sync_event; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct wilc*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct wilc_vif *VAR_2 = FUNC_1(VAR_1);
 struct wilc *VAR_3 = VAR_2->wilc;
 int VAR_4 = 0;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (!FUNC_2(&VAR_3->sync_event,
      FUNC_0(5000)))
  return -VAR_0;

 return 0;
}
