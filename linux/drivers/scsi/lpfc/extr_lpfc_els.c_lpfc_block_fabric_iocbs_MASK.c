
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int fabric_block_timer; int bit_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, &VAR_2->bit_flags);

 if (!VAR_3)
  FUNC_0(&VAR_2->fabric_block_timer,
     VAR_1 + FUNC_1(100));

 return;
}
