
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hba {int max_io; int ib_shadow; int fw_outstanding; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct mvumi_hba *VAR_0)
{
 unsigned int VAR_1;
 if (FUNC_0(&VAR_0->fw_outstanding) >= (VAR_0->max_io - 1))
  return 0;
 VAR_1 = FUNC_1(VAR_0->ib_shadow);
 if (VAR_1 == 0xffff)
  return 0;
 return VAR_1;
}
