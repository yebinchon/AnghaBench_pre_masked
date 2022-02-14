
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int * s_li_request; } ;
struct ext4_li_request {int lr_request; struct ext4_sb_info* lr_sbi; } ;


 int FUNC_0 (struct ext4_li_request*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ext4_li_request *VAR_0)
{
 struct ext4_sb_info *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->lr_sbi;

 FUNC_1(&VAR_0->lr_request);
 VAR_1->s_li_request = ((void*)0);
 FUNC_0(VAR_0);
}
