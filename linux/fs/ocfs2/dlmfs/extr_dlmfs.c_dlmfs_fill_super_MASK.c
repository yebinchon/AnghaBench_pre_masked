
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct super_block * VAR_6,
       void * VAR_7,
       int VAR_8)
{
 VAR_6->s_maxbytes = VAR_2;
 VAR_6->s_blocksize = VAR_4;
 VAR_6->s_blocksize_bits = VAR_3;
 VAR_6->s_magic = VAR_0;
 VAR_6->s_op = &VAR_5;
 VAR_6->s_root = FUNC_0(FUNC_1(VAR_6));
 if (!VAR_6->s_root)
  return -VAR_1;
 return 0;
}
