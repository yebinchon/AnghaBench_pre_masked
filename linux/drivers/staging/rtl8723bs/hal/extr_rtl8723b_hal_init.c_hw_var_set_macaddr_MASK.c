
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = VAR_0;

 for (VAR_4 = 0 ; VAR_4 < 6; VAR_4++)
  FUNC_1(FUNC_0(VAR_1), (VAR_5+VAR_4), VAR_3[VAR_4]);
}
