
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int odmpriv; } ;


 int FUNC_0 (struct adapter*,int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct adapter*,int*,int*,int*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,int ,int*,scalar_t__*) ;
 int FUNC_3 (struct adapter*,int,scalar_t__*) ;

void FUNC_4(struct adapter *VAR_0,
      u8 *VAR_1,
      u8 *VAR_2,
      u8 *VAR_3, u8 VAR_4)
{
 u32 VAR_5[2], VAR_6[2], VAR_7[2], VAR_8;
 u8 VAR_9;
 u8 VAR_10 = 0;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
   VAR_4, &VAR_6[0], &VAR_7[0]);

 FUNC_2(&VAR_0->HalData->odmpriv, 0,
     &VAR_9, &VAR_8);

 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  FUNC_0(VAR_0, VAR_4, VAR_10,
     &VAR_6[0], &VAR_7[0],
     &VAR_5[0]);

  if (VAR_9 == 1) {
   VAR_5[0] += VAR_8;
   VAR_5[1] += VAR_8;
  } else if (VAR_9 == 2) {
   VAR_5[0] -= VAR_8;
   VAR_5[1] -= VAR_8;
  }
  FUNC_3(VAR_0, VAR_10, &VAR_5[0]);
 }
}
