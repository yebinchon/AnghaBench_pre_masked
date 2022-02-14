
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mem_dqinfo {int dqi_blocks; int dqi_chunks; int dqi_flags; } ;
struct ocfs2_local_disk_dqinfo {void* dqi_blocks; void* dqi_chunks; void* dqi_flags; } ;
struct mem_dqinfo {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct buffer_head *VAR_2, void *VAR_3)
{
 struct mem_dqinfo *VAR_4 = VAR_3;
 struct ocfs2_mem_dqinfo *VAR_5 = VAR_4->dqi_priv;
 struct ocfs2_local_disk_dqinfo *VAR_6;

 VAR_6 = (struct ocfs2_local_disk_dqinfo *)(VAR_2->b_data +
      VAR_0);
 FUNC_1(&VAR_1);
 VAR_6->dqi_flags = FUNC_0(VAR_5->dqi_flags);
 VAR_6->dqi_chunks = FUNC_0(VAR_5->dqi_chunks);
 VAR_6->dqi_blocks = FUNC_0(VAR_5->dqi_blocks);
 FUNC_2(&VAR_1);
}
