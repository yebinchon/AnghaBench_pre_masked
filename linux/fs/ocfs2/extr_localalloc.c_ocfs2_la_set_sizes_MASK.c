
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_super {void* local_alloc_default_bits; void* local_alloc_bits; struct super_block* sb; } ;


 unsigned int FUNC_0 (struct super_block*,int) ;
 unsigned int FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct super_block*) ;
 void* FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int,unsigned int,unsigned int) ;

void FUNC_5(struct ocfs2_super *VAR_0, int VAR_1)
{
 struct super_block *VAR_2 = VAR_0->sb;
 unsigned int VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2,
      FUNC_2(VAR_2) * 8);

 FUNC_4(VAR_1, VAR_4, VAR_3);

 if (VAR_1 == -1) {

  VAR_0->local_alloc_default_bits =
   FUNC_3(VAR_2, VAR_3);
 } else if (VAR_1 > VAR_4) {

  VAR_0->local_alloc_default_bits =
   FUNC_3(VAR_2, VAR_4);
 } else {
  VAR_0->local_alloc_default_bits =
   FUNC_3(VAR_2, VAR_1);
 }

 VAR_0->local_alloc_bits = VAR_0->local_alloc_default_bits;
}
