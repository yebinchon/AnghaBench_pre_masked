
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct sdio_device_id {int dummy; } ;
struct dvobj_priv {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct adapter*) ;
 struct adapter* FUNC_6 (struct dvobj_priv*,struct sdio_device_id const*) ;
 int FUNC_7 (struct dvobj_priv*) ;
 int FUNC_8 (struct sdio_func*) ;
 struct dvobj_priv* FUNC_9 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_10(
 struct sdio_func *VAR_5,
 const struct sdio_device_id *VAR_6)
{
 int VAR_7 = VAR_1;
 struct adapter *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct dvobj_priv *VAR_10;

 VAR_10 = FUNC_9(VAR_5);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_3, ("initialize device object priv Failed!\n"));
  goto exit;
 }

 VAR_8 = FUNC_6(VAR_10, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_0("rtw_init_primarystruct adapter Failed!\n");
  goto free_dvobj;
 }


 VAR_7 = FUNC_3(VAR_8);
 if (VAR_7 != VAR_2)
  goto free_if2;

 if (FUNC_7(VAR_10) != VAR_2)
  goto free_if2;





 FUNC_1(VAR_4, VAR_3, ("-871x_drv - drv_init, success!\n"));

 FUNC_4();
 VAR_7 = VAR_2;

free_if2:
 if (VAR_7 != VAR_2 && VAR_9) {
 }
 if (VAR_7 != VAR_2 && VAR_8) {
  FUNC_5(VAR_8);
 }
free_dvobj:
 if (VAR_7 != VAR_2)
  FUNC_8(VAR_5);
exit:
 return VAR_7 == VAR_2?0:-VAR_0;
}
