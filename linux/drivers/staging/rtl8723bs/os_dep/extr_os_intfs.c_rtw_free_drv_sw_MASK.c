
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * old_pnetdev; } ;
struct adapter {TYPE_2__* pbuddy_adapter; TYPE_1__ rereg_nd_name_priv; int recvpriv; int stapriv; int xmitpriv; int mlmepriv; int evtpriv; int cmdpriv; int mlmeextpriv; } ;
struct TYPE_4__ {int * pbuddy_adapter; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;

u8 FUNC_11(struct adapter *VAR_3)
{
 FUNC_0(VAR_2, VAR_1, ("==>rtw_free_drv_sw"));

 FUNC_4(&VAR_3->mlmeextpriv);

 FUNC_6(&VAR_3->cmdpriv);

 FUNC_7(&VAR_3->evtpriv);

 FUNC_8(&VAR_3->mlmepriv);



 FUNC_3(&VAR_3->xmitpriv);

 FUNC_2(&VAR_3->stapriv);

 FUNC_1(&VAR_3->recvpriv);

 FUNC_9(VAR_3);



 FUNC_10(VAR_3);

 FUNC_0(VAR_2, VAR_1, ("<==rtw_free_drv_sw\n"));


 if (VAR_3->rereg_nd_name_priv.old_pnetdev) {
  FUNC_5(VAR_3->rereg_nd_name_priv.old_pnetdev);
  VAR_3->rereg_nd_name_priv.old_pnetdev = ((void*)0);
 }


 if (VAR_3->pbuddy_adapter != ((void*)0))
  VAR_3->pbuddy_adapter->pbuddy_adapter = ((void*)0);

 FUNC_0(VAR_2, VAR_1, ("-rtw_free_drv_sw\n"));

 return VAR_0;
}
