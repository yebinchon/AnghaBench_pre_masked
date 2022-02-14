
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; struct airo_info* ml_priv; } ;
struct airo_info {int airo_thread_task; int jobs; int flags; struct net_device* wifidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct airo_info*,int) ;
 int FUNC_1 (struct airo_info*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2) {
 struct airo_info *VAR_3 = VAR_2->ml_priv;

 FUNC_4(VAR_2);

 if (VAR_3->wifidev != VAR_2) {
  FUNC_1( VAR_3 );

  FUNC_2(VAR_2->irq, VAR_2);

  FUNC_5(VAR_1, &VAR_3->jobs);
  FUNC_3(VAR_3->airo_thread_task);
 }
 return 0;
}
