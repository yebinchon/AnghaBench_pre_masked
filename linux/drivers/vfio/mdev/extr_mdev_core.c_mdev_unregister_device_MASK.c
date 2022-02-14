
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_parent {int unreg_sem; int next; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 struct mdev_parent* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct device*,int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char**) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct mdev_parent*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (struct mdev_parent*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct device *VAR_4)
{
 struct mdev_parent *VAR_5;
 char *VAR_6 = "MDEV_STATE=unregistered";
 char *VAR_7[] = { VAR_6, ((void*)0) };

 FUNC_8(&VAR_3);
 VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5) {
  FUNC_9(&VAR_3);
  return;
 }
 FUNC_2(VAR_4, "MDEV: Unregistering\n");

 FUNC_6(&VAR_5->next);
 FUNC_9(&VAR_3);

 FUNC_4(&VAR_5->unreg_sem);

 FUNC_1(VAR_1, VAR_4, ((void*)0));

 FUNC_3(VAR_4, ((void*)0), VAR_2);

 FUNC_10(VAR_5);
 FUNC_11(&VAR_5->unreg_sem);

 FUNC_7(VAR_5);


 FUNC_5(&VAR_4->kobj, VAR_0, VAR_7);
}
