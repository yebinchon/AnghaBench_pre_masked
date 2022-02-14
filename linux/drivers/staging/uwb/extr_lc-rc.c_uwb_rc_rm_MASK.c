
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {int uwb_dev; TYPE_1__ uwb_beca; int * cmd; int * priv; int (* stop ) (struct uwb_rc*) ;scalar_t__ ready; } ;


 int FUNC_0 (struct uwb_rc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uwb_rc*) ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (struct uwb_rc*) ;
 int FUNC_6 (struct uwb_rc*,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct uwb_rc*) ;
 int FUNC_11 (struct uwb_rc*) ;
 int FUNC_12 (struct uwb_rc*) ;
 int FUNC_13 (struct uwb_rc*) ;
 int FUNC_14 (struct uwb_rc*) ;

void FUNC_15(struct uwb_rc *VAR_1)
{
 VAR_1->ready = 0;

 FUNC_5(VAR_1);
 FUNC_13(VAR_1);
 FUNC_10(VAR_1);

 VAR_1->stop(VAR_1);

 FUNC_14(VAR_1);
 FUNC_11(VAR_1);

 FUNC_7(&VAR_1->uwb_dev);
 VAR_1->priv = ((void*)0);
 VAR_1->cmd = ((void*)0);
 FUNC_9(&VAR_1->uwb_dev);
 FUNC_1(&VAR_1->uwb_beca.mutex);
 FUNC_6(VAR_1, VAR_0, ((void*)0));
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->uwb_beca.mutex);
 FUNC_12(VAR_1);
  FUNC_4(VAR_1);
 FUNC_8(&VAR_1->uwb_dev);
}
