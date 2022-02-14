
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_local_disk_chunk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct super_block *VAR_1)
{
 return ((VAR_1->s_blocksize - sizeof(struct ocfs2_local_disk_chunk) -
   VAR_0) << 3) /
        FUNC_0(VAR_1);
}
