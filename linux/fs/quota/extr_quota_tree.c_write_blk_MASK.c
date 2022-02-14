
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct super_block {TYPE_1__* s_op; } ;
struct qtree_mem_dqinfo {int dqi_blocksize_bits; int dqi_usable_bs; int dqi_type; struct super_block* dqi_sb; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* quota_write ) (struct super_block*,int ,char*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,char*) ;
 int FUNC_1 (struct super_block*,int ,char*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct qtree_mem_dqinfo *VAR_1, uint VAR_2, char *VAR_3)
{
 struct super_block *VAR_4 = VAR_1->dqi_sb;
 ssize_t VAR_5;

 VAR_5 = VAR_4->s_op->quota_write(VAR_4, VAR_1->dqi_type, VAR_3,
        VAR_1->dqi_usable_bs, VAR_2 << VAR_1->dqi_blocksize_bits);
 if (VAR_5 != VAR_1->dqi_usable_bs) {
  FUNC_0(VAR_4, "dquota write failed");
  if (VAR_5 >= 0)
   VAR_5 = -VAR_0;
 }
 return VAR_5;
}
