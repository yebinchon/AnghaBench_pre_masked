
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct qc_state {int s_incoredqs; TYPE_2__* s_state; } ;
struct TYPE_5__ {int ar_quota; } ;
struct gfs2_sbd {TYPE_4__* sd_quota_inode; TYPE_1__ sd_args; } ;
struct TYPE_8__ {int i_blocks; } ;
struct TYPE_7__ {int i_no_addr; } ;
struct TYPE_6__ {int flags; int nextents; int blocks; int ino; } ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;



 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qc_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_6, struct qc_state *VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_6->s_fs_info;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 switch (VAR_8->sd_args.ar_quota) {
 case 128:
  VAR_7->s_state[VAR_4].flags |= VAR_2;
  VAR_7->s_state[VAR_0].flags |= VAR_2;

 case 130:
  VAR_7->s_state[VAR_4].flags |= VAR_1 |
        VAR_3;
  VAR_7->s_state[VAR_0].flags |= VAR_1 |
        VAR_3;
  break;
 case 129:
  break;
 }
 if (VAR_8->sd_quota_inode) {
  VAR_7->s_state[VAR_4].ino =
     FUNC_0(VAR_8->sd_quota_inode)->i_no_addr;
  VAR_7->s_state[VAR_4].blocks = VAR_8->sd_quota_inode->i_blocks;
 }
 VAR_7->s_state[VAR_4].nextents = 1;
 VAR_7->s_state[VAR_0] = VAR_7->s_state[VAR_4];
 VAR_7->s_incoredqs = FUNC_1(&VAR_5);
 return 0;
}
