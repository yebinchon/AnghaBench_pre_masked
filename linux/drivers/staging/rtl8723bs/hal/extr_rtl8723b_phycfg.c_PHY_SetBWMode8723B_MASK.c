
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int CurrentChannel; } ;
struct adapter {int dummy; } ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int,int,int ,int,unsigned char,unsigned char,int ) ;

void FUNC_2(
 struct adapter *VAR_0,
 enum CHANNEL_WIDTH VAR_1,
 unsigned char VAR_2
)
{
 struct hal_com_data *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, 0, 1, VAR_3->CurrentChannel, VAR_1, VAR_2, VAR_2, VAR_3->CurrentChannel);
}
