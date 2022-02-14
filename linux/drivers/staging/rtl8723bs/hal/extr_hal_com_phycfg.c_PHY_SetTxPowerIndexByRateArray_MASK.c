
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int FUNC_0 (struct adapter*,int,int,int,int) ;
 int FUNC_1 (struct adapter*,int ,int,int) ;

void FUNC_2(
 struct adapter *VAR_0,
 u8 VAR_1,
 enum CHANNEL_WIDTH VAR_2,
 u8 VAR_3,
 u8 *VAR_4,
 u8 VAR_5
)
{
 u32 VAR_6 = 0;
 int VAR_7 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4[VAR_7], VAR_2, VAR_3);
  FUNC_1(VAR_0, VAR_6, VAR_1, VAR_4[VAR_7]);
 }
}
