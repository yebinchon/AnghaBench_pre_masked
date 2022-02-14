
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v2_disk_dqinfo {void* dqi_free_entry; void* dqi_free_blk; void* dqi_blocks; void* dqi_flags; void* dqi_igrace; void* dqi_bgrace; } ;
struct super_block {TYPE_1__* s_op; } ;
struct quota_info {int dqio_sem; struct mem_dqinfo* info; } ;
struct qtree_mem_dqinfo {int dqi_free_entry; int dqi_free_blk; int dqi_blocks; } ;
struct mem_dqinfo {int dqi_igrace; int dqi_bgrace; int dqi_flags; struct qtree_mem_dqinfo* dqi_priv; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* quota_write ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct super_block*,char*) ;
 struct quota_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,int,char*,int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_3, int VAR_4)
{
 struct v2_disk_dqinfo VAR_5;
 struct quota_info *VAR_6 = FUNC_3(VAR_3);
 struct mem_dqinfo *VAR_7 = &VAR_6->info[VAR_4];
 struct qtree_mem_dqinfo *VAR_8 = VAR_7->dqi_priv;
 ssize_t VAR_9;

 FUNC_1(&VAR_6->dqio_sem);
 FUNC_4(&VAR_2);
 VAR_7->dqi_flags &= ~VAR_0;
 VAR_5.dqi_bgrace = FUNC_0(VAR_7->dqi_bgrace);
 VAR_5.dqi_igrace = FUNC_0(VAR_7->dqi_igrace);

 VAR_5.dqi_flags = FUNC_0(0);
 FUNC_5(&VAR_2);
 VAR_5.dqi_blocks = FUNC_0(VAR_8->dqi_blocks);
 VAR_5.dqi_free_blk = FUNC_0(VAR_8->dqi_free_blk);
 VAR_5.dqi_free_entry = FUNC_0(VAR_8->dqi_free_entry);
 VAR_9 = VAR_3->s_op->quota_write(VAR_3, VAR_4, (char *)&VAR_5,
        sizeof(struct v2_disk_dqinfo), VAR_1);
 FUNC_7(&VAR_6->dqio_sem);
 if (VAR_9 != sizeof(struct v2_disk_dqinfo)) {
  FUNC_2(VAR_3, "Can't write info structure");
  return -1;
 }
 return 0;
}
