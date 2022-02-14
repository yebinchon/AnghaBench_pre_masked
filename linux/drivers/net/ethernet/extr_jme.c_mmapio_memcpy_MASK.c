
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jme_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct jme_adapter*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct jme_adapter *VAR_0, u32 *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4 += 4)
  VAR_1[VAR_4 >> 2] = FUNC_0(VAR_0, VAR_2 + VAR_4);
}
