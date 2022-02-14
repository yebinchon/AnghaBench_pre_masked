
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_drv {TYPE_2__* trans; int dbgfs_drv; int list; int request_firmware_complete; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* debugfs_cleanup ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct iwl_drv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct iwl_drv*) ;
 int VAR_0 ;
 int FUNC_4 (struct iwl_drv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct iwl_drv *VAR_1)
{
 FUNC_10(&VAR_1->request_firmware_complete);

 FUNC_0(VAR_1);

 FUNC_3(VAR_1);

 FUNC_7(&VAR_0);





 if (!FUNC_6(&VAR_1->list))
  FUNC_5(&VAR_1->list);
 FUNC_8(&VAR_0);







 FUNC_2(VAR_1->trans);

 FUNC_4(VAR_1);
}
