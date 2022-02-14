
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct dsa_switch {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_4, int VAR_5,
    u32 VAR_6, uint8_t *VAR_7)
{
 int VAR_8;

 if (VAR_6 != VAR_1)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_0(VAR_7 + VAR_8 * VAR_0, VAR_3[VAR_8].string,
         VAR_0);
 }
}
