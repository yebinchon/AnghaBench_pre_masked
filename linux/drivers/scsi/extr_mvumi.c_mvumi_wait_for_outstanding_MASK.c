
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hba {int fw_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvumi_hba*) ;
 scalar_t__ FUNC_1 (struct mvumi_hba*) ;

__attribute__((used)) static int FUNC_2(struct mvumi_hba *VAR_3)
{
 VAR_3->fw_state = VAR_1;
 FUNC_0(VAR_3);

 if (FUNC_1(VAR_3))
  return VAR_0;
 else
  return VAR_2;
}
