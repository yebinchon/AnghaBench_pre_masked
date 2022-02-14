
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hal_com_data {int CurrentChannel; int CurrentChannelBW; } ;
struct TYPE_2__ {int RegPwrTblSel; } ;
struct adapter {TYPE_1__ registrypriv; } ;
typedef scalar_t__ s8 ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct adapter*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct adapter*,int ,int ,int,int ,int*) ;
 scalar_t__ FUNC_3 (struct adapter*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct adapter*,int ,int ,int ,int ,int ,int ) ;

u8 FUNC_5(
 struct adapter *VAR_4,
 u8 VAR_5,
 u8 VAR_6,
 enum CHANNEL_WIDTH VAR_7,
 u8 VAR_8
)
{
 struct hal_com_data *VAR_9 = FUNC_0(VAR_4);
 s8 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 bool VAR_13 = 0;



 VAR_10 = (s8) FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_13);
 VAR_11 = FUNC_1(VAR_4, VAR_0, VAR_2, VAR_3, VAR_6);

 VAR_12 = FUNC_4(
  VAR_4,
  VAR_4->registrypriv.RegPwrTblSel,
  (u8)(!VAR_13),
  VAR_9->CurrentChannelBW,
  VAR_5,
  VAR_6,
  VAR_9->CurrentChannel
 );

 VAR_11 = VAR_11 > VAR_12 ? VAR_12 : VAR_11;
 VAR_10 += VAR_11;

 VAR_10 += FUNC_3(VAR_4, VAR_5, VAR_6);

 if (VAR_10 > VAR_1)
  VAR_10 = VAR_1;


 return (u8) VAR_10;
}
