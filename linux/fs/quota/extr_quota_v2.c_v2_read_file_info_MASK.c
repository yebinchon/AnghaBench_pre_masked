
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v2r1_disk_dqblk {int dummy; } ;
struct v2r0_disk_dqblk {int dummy; } ;
struct v2_disk_dqinfo {int dqi_free_entry; int dqi_free_blk; int dqi_blocks; int dqi_igrace; int dqi_bgrace; } ;
struct v2_disk_dqheader {int dqh_version; } ;
struct super_block {TYPE_1__* s_op; } ;
struct quota_info {int dqio_sem; struct mem_dqinfo* info; } ;
struct qtree_mem_dqinfo {int dqi_type; int dqi_blocksize_bits; int dqi_usable_bs; int dqi_entry_size; int * dqi_ops; int dqi_qtree_depth; void* dqi_free_entry; void* dqi_free_blk; void* dqi_blocks; struct super_block* dqi_sb; } ;
struct mem_dqinfo {scalar_t__ dqi_fmt_id; int dqi_max_spc_limit; int dqi_max_ino_limit; scalar_t__ dqi_flags; void* dqi_igrace; void* dqi_bgrace; struct qtree_mem_dqinfo* dqi_priv; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 struct qtree_mem_dqinfo* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct qtree_mem_dqinfo*) ;
 int FUNC_4 (struct super_block*,char*) ;
 struct quota_info* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,int,char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,int,struct v2_disk_dqheader*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_11, int VAR_12)
{
 struct v2_disk_dqinfo VAR_13;
 struct v2_disk_dqheader VAR_14;
 struct quota_info *VAR_15 = FUNC_5(VAR_11);
 struct mem_dqinfo *VAR_16 = &VAR_15->info[VAR_12];
 struct qtree_mem_dqinfo *VAR_17;
 ssize_t VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 FUNC_0(&VAR_15->dqio_sem);
 VAR_20 = FUNC_8(VAR_11, VAR_12, &VAR_14);
 if (VAR_20 < 0)
  goto out;
 VAR_19 = FUNC_2(VAR_14.dqh_version);
 if ((VAR_16->dqi_fmt_id == VAR_4 && VAR_19 != 0) ||
     (VAR_16->dqi_fmt_id == VAR_5 && VAR_19 != 1)) {
  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_18 = VAR_11->s_op->quota_read(VAR_11, VAR_12, (char *)&VAR_13,
        sizeof(struct v2_disk_dqinfo), VAR_8);
 if (VAR_18 != sizeof(struct v2_disk_dqinfo)) {
  FUNC_4(VAR_11, "Can't read info structure");
  if (VAR_18 < 0)
   VAR_20 = VAR_18;
  else
   VAR_20 = -VAR_1;
  goto out;
 }
 VAR_16->dqi_priv = FUNC_1(sizeof(struct qtree_mem_dqinfo), VAR_3);
 if (!VAR_16->dqi_priv) {
  VAR_20 = -VAR_2;
  goto out;
 }
 VAR_17 = VAR_16->dqi_priv;
 if (VAR_19 == 0) {

  VAR_16->dqi_max_spc_limit = 0xffffffffLL << VAR_6;
  VAR_16->dqi_max_ino_limit = 0xffffffff;
 } else {





  VAR_16->dqi_max_spc_limit = 0x7fffffffffffffffLL;
  VAR_16->dqi_max_ino_limit = 0x7fffffffffffffffLL;
 }
 VAR_16->dqi_bgrace = FUNC_2(VAR_13.dqi_bgrace);
 VAR_16->dqi_igrace = FUNC_2(VAR_13.dqi_igrace);

 VAR_16->dqi_flags = 0;
 VAR_17->dqi_sb = VAR_11;
 VAR_17->dqi_type = VAR_12;
 VAR_17->dqi_blocks = FUNC_2(VAR_13.dqi_blocks);
 VAR_17->dqi_free_blk = FUNC_2(VAR_13.dqi_free_blk);
 VAR_17->dqi_free_entry = FUNC_2(VAR_13.dqi_free_entry);
 VAR_17->dqi_blocksize_bits = VAR_7;
 VAR_17->dqi_usable_bs = 1 << VAR_7;
 VAR_17->dqi_qtree_depth = FUNC_3(VAR_17);
 if (VAR_19 == 0) {
  VAR_17->dqi_entry_size = sizeof(struct v2r0_disk_dqblk);
  VAR_17->dqi_ops = &VAR_9;
 } else {
  VAR_17->dqi_entry_size = sizeof(struct v2r1_disk_dqblk);
  VAR_17->dqi_ops = &VAR_10;
 }
 VAR_20 = 0;
out:
 FUNC_7(&VAR_15->dqio_sem);
 return VAR_20;
}
