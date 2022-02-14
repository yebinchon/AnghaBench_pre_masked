
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; } ;
typedef enum wb_reason { ____Placeholder_wb_reason } wb_reason ;


 int FUNC_0 (struct super_block*,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_0, enum wb_reason VAR_1)
{
 if (!FUNC_1(&VAR_0->s_umount))
  return;

 FUNC_0(VAR_0, FUNC_2(), VAR_1, 1);
 FUNC_3(&VAR_0->s_umount);
}
