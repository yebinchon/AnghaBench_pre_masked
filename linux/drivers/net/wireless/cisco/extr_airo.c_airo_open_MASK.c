
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; struct airo_info* ml_priv; } ;
struct airo_info {int flags; int airo_thread_task; int jobs; struct net_device* wifidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct airo_info*,int) ;
 int FUNC_5 (struct airo_info*,int) ;
 int FUNC_6 (struct airo_info*) ;
 int FUNC_7 (int ,struct net_device*,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct airo_info*) ;
 int FUNC_14 (struct airo_info*,int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_8) {
 struct airo_info *VAR_9 = VAR_8->ml_priv;
 int VAR_10 = 0;

 if (FUNC_12(VAR_2, &VAR_9->flags))
  return -VAR_0;





 if (FUNC_12(VAR_1, &VAR_9->flags)) {
  FUNC_4(VAR_9, 1);
  FUNC_14(VAR_9, 1);
 }

 if (VAR_9->wifidev != VAR_8) {
  FUNC_3(VAR_5, &VAR_9->jobs);
  VAR_9->airo_thread_task = FUNC_7(VAR_7, VAR_8, "%s",
         VAR_8->name);
  if (FUNC_0(VAR_9->airo_thread_task))
   return (int)FUNC_1(VAR_9->airo_thread_task);

  VAR_10 = FUNC_10(VAR_8->irq, VAR_6, VAR_4,
   VAR_8->name, VAR_8);
  if (VAR_10) {
   FUNC_2(VAR_8->name,
    "register interrupt %d failed, rc %d",
    VAR_8->irq, VAR_10);
   FUNC_11(VAR_5, &VAR_9->jobs);
   FUNC_8(VAR_9->airo_thread_task);
   return VAR_10;
  }


  FUNC_3(VAR_3, &VAR_9->flags);
  FUNC_6(VAR_9);

  FUNC_13(VAR_9);
 }
 FUNC_5(VAR_9, 1);

 FUNC_9(VAR_8);
 return 0;
}
