
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {int ls_control_lvb; } ;
typedef char __le32 ;


 int VAR_0 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct lm_lockstruct *VAR_1, uint32_t VAR_2,
         char *VAR_3)
{
 __le32 VAR_4;
 FUNC_1(VAR_1->ls_control_lvb, VAR_3, VAR_0);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_1->ls_control_lvb, &VAR_4, sizeof(__le32));
}
