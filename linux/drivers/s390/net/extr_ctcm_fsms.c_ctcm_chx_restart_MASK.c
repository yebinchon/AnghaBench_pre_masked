
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct channel {int timer; int cdev; int id; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct channel*,int,char*) ;
 int FUNC_3 (int *,int ,int,struct channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_10(fsm_instance *VAR_7, int VAR_8, void *VAR_9)
{
 struct channel *VAR_10 = VAR_9;
 struct net_device *VAR_11 = VAR_10->netdev;
 unsigned long VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 FUNC_0(VAR_6, VAR_2,
  "%s: %s[%d] of %s\n",
   VAR_0, VAR_10->id, VAR_8, VAR_11->name);

 FUNC_4(&VAR_10->timer);

 FUNC_3(&VAR_10->timer, VAR_1, VAR_3, VAR_10);
 VAR_13 = FUNC_5(VAR_7);
 FUNC_6(VAR_7, VAR_4);
 if (VAR_8 == VAR_3)
  FUNC_8(FUNC_7(VAR_10->cdev), VAR_12);



 VAR_14 = FUNC_1(VAR_10->cdev, 0);
 if (VAR_8 == VAR_3)
  FUNC_9(FUNC_7(VAR_10->cdev), VAR_12);
 if (VAR_14 != 0) {
  if (VAR_14 != -VAR_5) {
      FUNC_4(&VAR_10->timer);
      FUNC_6(VAR_7, VAR_13);
  }
  FUNC_2(VAR_10, VAR_14, "HaltIO in ctcm_chx_restart");
 }
}
