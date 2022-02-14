
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sdio_data {scalar_t__ block_transfer_len; } ;
struct intf_hdl {struct adapter* padapter; } ;
struct hal_com_data {int SdioRxFIFOCnt; } ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct sdio_data intf_data; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,scalar_t__,int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct intf_hdl*,scalar_t__,scalar_t__,int *) ;
 TYPE_1__* FUNC_4 (struct adapter*) ;

__attribute__((used)) static u32 FUNC_5(
 struct intf_hdl *VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 u8 *VAR_5
)
{
 struct adapter *VAR_6;
 struct sdio_data *VAR_7;
 struct hal_com_data *VAR_8;
 u32 VAR_9;
 s32 VAR_10;


 VAR_6 = VAR_2->padapter;
 VAR_7 = &FUNC_4(VAR_6)->intf_data;
 VAR_8 = FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_3, VAR_8->SdioRxFIFOCnt++, &VAR_3);

 VAR_9 = VAR_4;
 if (VAR_4 > VAR_7->block_transfer_len)
  VAR_4 = FUNC_2(VAR_4, VAR_7->block_transfer_len);


 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_10)
  return VAR_0;
 return VAR_1;
}
