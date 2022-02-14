
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct super_block {TYPE_1__* s_op; } ;
struct qtree_mem_dqinfo {int dqi_blocksize_bits; int dqi_usable_bs; int dqi_type; struct super_block* dqi_sb; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* quota_read ) (struct super_block*,int ,char*,int ,int) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct super_block*,int ,char*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct qtree_mem_dqinfo *VAR_0, uint VAR_1, char *VAR_2)
{
 struct super_block *VAR_3 = VAR_0->dqi_sb;

 FUNC_0(VAR_2, 0, VAR_0->dqi_usable_bs);
 return VAR_3->s_op->quota_read(VAR_3, VAR_0->dqi_type, VAR_2,
        VAR_0->dqi_usable_bs, VAR_1 << VAR_0->dqi_blocksize_bits);
}
