
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int hw_init_mutex; int recvpriv; int stapriv; int xmitpriv; int mlmepriv; int mlmeextpriv; } ;


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
 int FUNC_7 (struct adapter*) ;

u8 FUNC_8(struct adapter *VAR_3)
{
 FUNC_0(VAR_2, VAR_1, ("==>rtw_free_drv_sw"));

 FUNC_4(&VAR_3->mlmeextpriv);

 FUNC_6(&VAR_3->mlmepriv);
 FUNC_3(&VAR_3->xmitpriv);


 FUNC_2(&VAR_3->stapriv);

 FUNC_1(&VAR_3->recvpriv);

 FUNC_7(VAR_3);

 FUNC_0(VAR_2, VAR_1, ("<== rtw_free_drv_sw\n"));

 FUNC_5(&VAR_3->hw_init_mutex);

 FUNC_0(VAR_2, VAR_1, ("-rtw_free_drv_sw\n"));

 return VAR_0;
}
