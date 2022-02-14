
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hal_com_data {int* sdio_tx_max_len; } ;
struct dvobj_priv {int dummy; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct dvobj_priv*,int ) ;

u32 FUNC_3(struct adapter *VAR_3, u8 VAR_4)
{
 struct dvobj_priv *VAR_5 = FUNC_1(VAR_3);
 struct hal_com_data *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_2(VAR_5, VAR_4);
 switch (VAR_7) {
 case 130:
  VAR_8 = VAR_6->sdio_tx_max_len[VAR_0];
  break;

 case 128:
  VAR_8 = VAR_6->sdio_tx_max_len[VAR_2];
  break;

 case 129:
  VAR_8 = VAR_6->sdio_tx_max_len[VAR_1];
  break;

 default:
  VAR_8 = VAR_6->sdio_tx_max_len[VAR_2];
  break;
 }

 return VAR_8;
}
