
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct dnode {int* dirent; void* self; void* first_free; void* magic; } ;
typedef int secno ;
typedef int dnode_secno ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct super_block*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct super_block*,int ,int,int ) ;
 int FUNC_3 (struct super_block*,int) ;
 struct dnode* FUNC_4 (struct super_block*,int,struct quad_buffer_head*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct dnode*,int ,int) ;

struct dnode *FUNC_7(struct super_block *VAR_2, secno VAR_3,
    dnode_secno *VAR_4, struct quad_buffer_head *VAR_5)
{
 struct dnode *VAR_6;
 if (FUNC_5(VAR_2) > VAR_1) {
  if (!(*VAR_4 = FUNC_0(VAR_2, VAR_3)))
   if (!(*VAR_4 = FUNC_2(VAR_2, VAR_3, 4, 0))) return ((void*)0);
 } else {
  if (!(*VAR_4 = FUNC_2(VAR_2, VAR_3, 4, 0)))
   if (!(*VAR_4 = FUNC_0(VAR_2, VAR_3))) return ((void*)0);
 }
 if (!(VAR_6 = FUNC_4(VAR_2, *VAR_4, VAR_5))) {
  FUNC_3(VAR_2, *VAR_4);
  return ((void*)0);
 }
 FUNC_6(VAR_6, 0, 2048);
 VAR_6->magic = FUNC_1(VAR_0);
 VAR_6->first_free = FUNC_1(52);
 VAR_6->dirent[0] = 32;
 VAR_6->dirent[2] = 8;
 VAR_6->dirent[30] = 1;
 VAR_6->dirent[31] = 255;
 VAR_6->self = FUNC_1(*VAR_4);
 return VAR_6;
}
