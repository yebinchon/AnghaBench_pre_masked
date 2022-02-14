
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int dbg_intfc; int pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,scalar_t__) ;
 char* FUNC_1 (int ) ;

void FUNC_2(struct fm10k_intfc *VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_1->pdev);

 if (VAR_0)
  VAR_1->dbg_intfc = FUNC_0(VAR_2, VAR_0);
}
