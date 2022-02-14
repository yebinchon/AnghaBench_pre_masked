
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v1_disk_dqblk {int dqb_btime; int dqb_itime; } ;
struct super_block {TYPE_2__* s_op; } ;
struct quota_info {int dqio_sem; TYPE_1__* info; } ;
struct TYPE_4__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;int (* quota_write ) (struct super_block*,int,char*,int,int ) ;} ;
struct TYPE_3__ {int dqi_bgrace; int dqi_igrace; int dqi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct quota_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*,int,char*,int,int ) ;
 int FUNC_5 (struct super_block*,int,char*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_3, int VAR_4)
{
 struct quota_info *VAR_5 = FUNC_1(VAR_3);
 struct v1_disk_dqblk VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5->dqio_sem);
 VAR_7 = VAR_3->s_op->quota_read(VAR_3, VAR_4, (char *)&VAR_6,
    sizeof(struct v1_disk_dqblk), FUNC_7(0));
 if (VAR_7 != sizeof(struct v1_disk_dqblk)) {
  if (VAR_7 >= 0)
   VAR_7 = -VAR_1;
  goto out;
 }
 FUNC_2(&VAR_2);
 VAR_5->info[VAR_4].dqi_flags &= ~VAR_0;
 VAR_6.dqb_itime = VAR_5->info[VAR_4].dqi_igrace;
 VAR_6.dqb_btime = VAR_5->info[VAR_4].dqi_bgrace;
 FUNC_3(&VAR_2);
 VAR_7 = VAR_3->s_op->quota_write(VAR_3, VAR_4, (char *)&VAR_6,
       sizeof(struct v1_disk_dqblk), FUNC_7(0));
 if (VAR_7 == sizeof(struct v1_disk_dqblk))
  VAR_7 = 0;
 else if (VAR_7 > 0)
  VAR_7 = -VAR_1;
out:
 FUNC_6(&VAR_5->dqio_sem);
 return VAR_7;
}
