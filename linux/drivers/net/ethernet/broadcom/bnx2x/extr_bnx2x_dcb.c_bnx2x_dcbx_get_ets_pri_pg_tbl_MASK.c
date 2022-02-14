
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_2,
    u32 *VAR_3,
    u32 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3[VAR_5] = FUNC_0(VAR_4, VAR_5);

  FUNC_1(VAR_0, "set_configuration_ets_pg[%d] = 0x%x\n",
     VAR_5, VAR_3[VAR_5]);
 }
}
