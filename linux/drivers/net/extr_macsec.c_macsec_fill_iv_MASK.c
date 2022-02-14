
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gcm_iv {int pn; int sci; } ;
typedef int sci_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, sci_t VAR_1, u32 VAR_2)
{
 struct gcm_iv *VAR_3 = (struct gcm_iv *)VAR_0;

 VAR_3->sci = VAR_1;
 VAR_3->pn = FUNC_0(VAR_2);
}
