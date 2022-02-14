
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {scalar_t__ CurrentChannelBW; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct adapter *VAR_1, u8 *VAR_2,
       u8 *VAR_3, u8 *VAR_4,
       u8 VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 u32 VAR_8, VAR_9;
 u8 VAR_10, VAR_11[2];

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_8 = VAR_2[VAR_10];

  VAR_8 = (VAR_8<<24) | (VAR_8<<16) |
        (VAR_8<<8) | VAR_8;
  *(VAR_6+VAR_10) = VAR_8;
 }

 if (VAR_1->HalData->CurrentChannelBW == VAR_0)
  VAR_11[0] = VAR_3[0];
 else
  VAR_11[0] = VAR_4[0];
 VAR_9 = VAR_11[0];
 VAR_9 = (VAR_9<<24) | (VAR_9<<16) |
       (VAR_9<<8) | VAR_9;
 *VAR_7 = VAR_9;
}
