
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_func {int dummy; } ;
struct sdio_data {struct sdio_func* func; } ;
struct intf_hdl {struct dvobj_priv* pintf_dev; struct adapter* padapter; } ;
struct dvobj_priv {struct sdio_data intf_data; } ;
struct adapter {scalar_t__ bSurpriseRemoved; } ;
typedef int s32 ;


 int FUNC_0 (struct intf_hdl*,int ,int ,int *) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

s32 FUNC_4(struct intf_hdl *VAR_0, u32 VAR_1, u32 VAR_2, u8 *VAR_3)
{
 struct adapter *VAR_4;
 struct dvobj_priv *VAR_5;
 struct sdio_data *VAR_6;

 int VAR_7 = 0;
 struct sdio_func *VAR_8;
 bool VAR_9;

 VAR_4 = VAR_0->padapter;
 VAR_5 = VAR_0->pintf_dev;
 VAR_6 = &VAR_5->intf_data;

 if (VAR_4->bSurpriseRemoved) {

  return VAR_7;
 }

 VAR_8 = VAR_6->func;
 VAR_9 = FUNC_1(VAR_8);

 if (VAR_9)
  FUNC_2(VAR_8);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_9)
  FUNC_3(VAR_8);
 return VAR_7;
}
