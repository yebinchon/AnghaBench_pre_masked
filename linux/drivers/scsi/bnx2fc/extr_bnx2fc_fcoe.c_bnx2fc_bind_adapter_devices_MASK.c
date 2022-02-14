
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_hba {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2fc_hba*) ;
 scalar_t__ FUNC_1 (struct bnx2fc_hba*) ;
 int FUNC_2 (struct bnx2fc_hba*) ;

__attribute__((used)) static int FUNC_3(struct bnx2fc_hba *VAR_1)
{
 if (FUNC_1(VAR_1))
  goto mem_err;

 if (FUNC_0(VAR_1))
  goto mem_err;

 return 0;
mem_err:
 FUNC_2(VAR_1);
 return -VAR_0;
}
