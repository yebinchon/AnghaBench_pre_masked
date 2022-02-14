
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int old_cmd; int flags; int rxempty_task; int rxclean_task; int txclean_task; int linkch_task; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 int VAR_1 ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*) ;
 int FUNC_7 (struct jme_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct net_device*,int *) ;
 int FUNC_9 (struct jme_adapter*) ;
 int VAR_4 ;
 struct jme_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,int ,unsigned long) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct net_device *VAR_5)
{
 struct jme_adapter *VAR_6 = FUNC_10(VAR_5);
 int VAR_7;

 FUNC_1(VAR_6);
 FUNC_0(VAR_6);

 FUNC_13(&VAR_6->linkch_task, VAR_1,
       (unsigned long) VAR_6);
 FUNC_13(&VAR_6->txclean_task, VAR_4,
       (unsigned long) VAR_6);
 FUNC_13(&VAR_6->rxclean_task, VAR_2,
       (unsigned long) VAR_6);
 FUNC_13(&VAR_6->rxempty_task, VAR_3,
       (unsigned long) VAR_6);

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto err_out;

 FUNC_9(VAR_6);

 FUNC_3(VAR_6);
 if (FUNC_14(VAR_0, &VAR_6->flags))
  FUNC_8(VAR_5, &VAR_6->old_cmd);
 else
  FUNC_7(VAR_6);
 FUNC_2(VAR_6);
 FUNC_4(VAR_6);
 FUNC_6(VAR_6);

 return 0;

err_out:
 FUNC_12(VAR_5);
 FUNC_11(VAR_5);
 return VAR_7;
}
