
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct cas {int phy_type; int reset_task; int reset_task_pending; int reset_task_pending_mtu; int reset_task_pending_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct cas* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, int VAR_4)
{
 struct cas *VAR_5 = FUNC_3(VAR_3);

 VAR_3->mtu = VAR_4;
 if (!FUNC_5(VAR_3) || !FUNC_4(VAR_3))
  return 0;



 FUNC_0(&VAR_5->reset_task_pending);
 if ((VAR_5->phy_type & VAR_0)) {
  FUNC_0(&VAR_5->reset_task_pending_all);
 } else {
  FUNC_0(&VAR_5->reset_task_pending_mtu);
 }
 FUNC_7(&VAR_5->reset_task);







 FUNC_2(&VAR_5->reset_task);
 return 0;
}
