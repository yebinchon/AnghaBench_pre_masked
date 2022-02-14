
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_recovery_chunk {int rc_chunk; int rc_list; void* rc_bitmap; } ;
struct ocfs2_local_disk_chunk {int dqc_bitmap; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_recovery_chunk*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2,
        struct ocfs2_local_disk_chunk *VAR_3,
        int VAR_4,
        struct list_head *VAR_5)
{
 struct ocfs2_recovery_chunk *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct ocfs2_recovery_chunk), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->rc_chunk = VAR_4;
 VAR_6->rc_bitmap = FUNC_1(VAR_2->s_blocksize, VAR_1);
 if (!VAR_6->rc_bitmap) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }
 FUNC_3(VAR_6->rc_bitmap, VAR_3->dqc_bitmap,
        (FUNC_4(VAR_2) + 7) >> 3);
 FUNC_2(&VAR_6->rc_list, VAR_5);
 return 0;
}
