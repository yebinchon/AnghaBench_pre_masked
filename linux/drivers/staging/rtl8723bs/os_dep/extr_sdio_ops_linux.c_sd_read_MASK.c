
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdio_func {int dummy; } ;
struct sdio_data {struct sdio_func* func; } ;
struct intf_hdl {struct dvobj_priv* pintf_dev; struct adapter* padapter; } ;
struct dvobj_priv {struct sdio_data intf_data; } ;
struct adapter {scalar_t__ bSurpriseRemoved; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct intf_hdl*,int ,int ,void*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

s32 FUNC_4(struct intf_hdl *VAR_1, u32 VAR_2, u32 VAR_3, void *VAR_4)
{
 struct adapter *VAR_5;
 struct dvobj_priv *VAR_6;
 struct sdio_data *VAR_7;

 struct sdio_func *VAR_8;
 bool VAR_9;
 s32 VAR_10 = -VAR_0;

 VAR_5 = VAR_1->padapter;
 VAR_6 = VAR_1->pintf_dev;
 VAR_7 = &VAR_6->intf_data;

 if (VAR_5->bSurpriseRemoved) {

  return VAR_10;
 }
 VAR_8 = VAR_7->func;
 VAR_9 = FUNC_1(VAR_8);

 if (VAR_9)
  FUNC_2(VAR_8);
 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_9)
  FUNC_3(VAR_8);
 return VAR_10;
}
