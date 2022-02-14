
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_oob {int block_status; } ;
struct sm_ftl {int block_size; scalar_t__ unstable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sm_oob*,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (struct sm_ftl*) ;
 int FUNC_3 (struct sm_ftl*,int,int,int,int *,struct sm_oob*) ;

__attribute__((used)) static void FUNC_4(struct sm_ftl *VAR_2, int VAR_3, int VAR_4)
{
 struct sm_oob VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0xFF, VAR_0);
 VAR_5.block_status = 0xF0;

 if (VAR_2->unstable)
  return;

 if (FUNC_2(VAR_2))
  return;

 FUNC_1("marking block %d of zone %d as bad", VAR_4, VAR_3);




 for (VAR_6 = 0; VAR_6 < VAR_2->block_size; VAR_6 += VAR_1)
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6, ((void*)0), &VAR_5);
}
