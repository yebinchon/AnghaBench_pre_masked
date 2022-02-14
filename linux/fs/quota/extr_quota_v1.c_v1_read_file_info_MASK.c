
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v1_disk_dqblk {scalar_t__ dqb_btime; scalar_t__ dqb_itime; } ;
struct super_block {TYPE_1__* s_op; } ;
struct quota_info {int dqio_sem; TYPE_2__* info; } ;
struct TYPE_4__ {int dqi_max_spc_limit; int dqi_max_ino_limit; scalar_t__ dqi_bgrace; scalar_t__ dqi_igrace; } ;
struct TYPE_3__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct quota_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int,char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_4, int VAR_5)
{
 struct quota_info *VAR_6 = FUNC_1(VAR_4);
 struct v1_disk_dqblk VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6->dqio_sem);
 VAR_8 = VAR_4->s_op->quota_read(VAR_4, VAR_5, (char *)&VAR_7,
    sizeof(struct v1_disk_dqblk), FUNC_4(0));
 if (VAR_8 != sizeof(struct v1_disk_dqblk)) {
  if (VAR_8 >= 0)
   VAR_8 = -VAR_0;
  goto out;
 }
 VAR_8 = 0;

 VAR_6->info[VAR_5].dqi_max_spc_limit = 0xffffffffULL << VAR_3;
 VAR_6->info[VAR_5].dqi_max_ino_limit = 0xffffffff;
 VAR_6->info[VAR_5].dqi_igrace =
   VAR_7.dqb_itime ? VAR_7.dqb_itime : VAR_2;
 VAR_6->info[VAR_5].dqi_bgrace =
   VAR_7.dqb_btime ? VAR_7.dqb_btime : VAR_1;
out:
 FUNC_3(&VAR_6->dqio_sem);
 return VAR_8;
}
