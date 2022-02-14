
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_2__* dq_op; } ;
struct qc_info {int i_fieldmask; int i_flags; int i_ino_timelimit; int i_spc_timelimit; } ;
struct mem_dqinfo {int dqi_flags; int dqi_igrace; int dqi_bgrace; TYPE_1__* dqi_format; } ;
struct TYPE_6__ {struct mem_dqinfo* info; } ;
struct TYPE_5__ {int (* write_info ) (struct super_block*,int) ;} ;
struct TYPE_4__ {scalar_t__ qf_fmt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct super_block*,int) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int) ;

int FUNC_6(struct super_block *VAR_11, int VAR_12, struct qc_info *VAR_13)
{
 struct mem_dqinfo *VAR_14;
 int VAR_15 = 0;

 if ((VAR_13->i_fieldmask & VAR_8) ||
     (VAR_13->i_fieldmask & VAR_6))
  return -VAR_1;
 if (!FUNC_2(VAR_11, VAR_12))
  return -VAR_2;
 VAR_14 = FUNC_1(VAR_11)->info + VAR_12;
 if (VAR_13->i_fieldmask & VAR_4) {
  if ((VAR_13->i_flags & VAR_3 &&
       VAR_14->dqi_format->qf_fmt_id != VAR_9))
   return -VAR_1;
 }
 FUNC_3(&VAR_10);
 if (VAR_13->i_fieldmask & VAR_7)
  VAR_14->dqi_bgrace = VAR_13->i_spc_timelimit;
 if (VAR_13->i_fieldmask & VAR_5)
  VAR_14->dqi_igrace = VAR_13->i_ino_timelimit;
 if (VAR_13->i_fieldmask & VAR_4) {
  if (VAR_13->i_flags & VAR_3)
   VAR_14->dqi_flags |= VAR_0;
  else
   VAR_14->dqi_flags &= ~VAR_0;
 }
 FUNC_4(&VAR_10);
 FUNC_0(VAR_11, VAR_12);

 VAR_11->dq_op->write_info(VAR_11, VAR_12);
 return VAR_15;
}
