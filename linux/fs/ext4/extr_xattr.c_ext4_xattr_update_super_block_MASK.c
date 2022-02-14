
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_sbh; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *,struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct super_block*) ;

__attribute__((used)) static void FUNC_6(handle_t *VAR_0,
       struct super_block *VAR_1)
{
 if (FUNC_3(VAR_1))
  return;

 FUNC_0(FUNC_1(VAR_1)->s_sbh, "get_write_access");
 if (FUNC_4(VAR_0, FUNC_1(VAR_1)->s_sbh) == 0) {
  FUNC_5(VAR_1);
  FUNC_2(VAR_0, VAR_1);
 }
}
