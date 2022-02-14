
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {char* ls_control_lvb; } ;
typedef char __le32 ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct lm_lockstruct *VAR_1, uint32_t *VAR_2,
        char *VAR_3)
{
 __le32 VAR_4;
 FUNC_1(VAR_3, VAR_1->ls_control_lvb, VAR_0);
 FUNC_1(&VAR_4, VAR_3, sizeof(__le32));
 *VAR_2 = FUNC_0(VAR_4);
}
