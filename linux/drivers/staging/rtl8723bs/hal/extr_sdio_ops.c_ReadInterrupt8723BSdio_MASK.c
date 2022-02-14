
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int sdio_himr; } ;


 TYPE_1__* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct adapter*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_2(struct adapter *VAR_1, u32 *VAR_2)
{
 u32 VAR_3, VAR_4;
 u8 VAR_5, VAR_6;


 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_1)->sdio_himr;


 VAR_6 = 0;
 while (VAR_4) {
  VAR_6++;
  VAR_4 >>= 8;
 }

 VAR_3 = 0;
 while (VAR_6 != 0) {
  VAR_6--;
  VAR_5 = FUNC_1(VAR_1, VAR_0 + VAR_6);
  VAR_3 |= (VAR_5 << (8 * VAR_6));
 }

 *VAR_2 = VAR_3;

 return 1;
}
