
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_4__* sd_vfs; TYPE_1__ sd_args; } ;
struct TYPE_7__ {int qb_value; int qb_limit; int qb_warn; } ;
struct gfs2_quota_data {scalar_t__ qd_change; scalar_t__ qd_last_warn; int qd_id; int qd_flags; TYPE_3__ qd_qb; } ;
struct gfs2_inode {TYPE_2__* i_qadata; int i_flags; int i_inode; } ;
struct gfs2_alloc_parms {scalar_t__ allowed; scalar_t__ min_target; scalar_t__ target; } ;
typedef scalar_t__ s64 ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_8__ {int s_dev; } ;
struct TYPE_6__ {size_t qa_qd_num; struct gfs2_quota_data** qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gfs2_quota_data*,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

int FUNC_13(struct gfs2_inode *VAR_11, kuid_t VAR_12, kgid_t VAR_13,
       struct gfs2_alloc_parms *VAR_14)
{
 struct gfs2_sbd *VAR_15 = FUNC_0(&VAR_11->i_inode);
 struct gfs2_quota_data *VAR_16;
 s64 VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 int VAR_21 = 0;

 VAR_14->allowed = VAR_7;
 if (!FUNC_11(VAR_2, &VAR_11->i_flags))
  return 0;

        if (VAR_15->sd_args.ar_quota != VAR_1)
                return 0;

 for (VAR_20 = 0; VAR_20 < VAR_11->i_qadata->qa_qd_num; VAR_20++) {
  VAR_16 = VAR_11->i_qadata->qa_qd[VAR_20];

  if (!(FUNC_6(VAR_16->qd_id, FUNC_4(VAR_12)) ||
        FUNC_6(VAR_16->qd_id, FUNC_3(VAR_13))))
   continue;

  VAR_18 = (s64)FUNC_1(VAR_16->qd_qb.qb_warn);
  VAR_19 = (s64)FUNC_1(VAR_16->qd_qb.qb_limit);
  VAR_17 = (s64)FUNC_1(VAR_16->qd_qb.qb_value);
  FUNC_8(&VAR_10);
  VAR_17 += VAR_16->qd_change;
  FUNC_9(&VAR_10);

  if (VAR_19 > 0 && (VAR_19 - VAR_17) < VAR_14->allowed)
   VAR_14->allowed = VAR_19 - VAR_17;

  if (VAR_19 && VAR_19 < (VAR_17 + (s64)VAR_14->target)) {


   if (!VAR_14->min_target || VAR_14->min_target > VAR_14->allowed) {
    if (!FUNC_10(VAR_4,
            &VAR_16->qd_flags)) {
     FUNC_5(VAR_16, "exceeded");
     FUNC_7(VAR_16->qd_id,
          VAR_15->sd_vfs->s_dev,
          VAR_5);
    }
    VAR_21 = -VAR_0;
    break;
   }
  } else if (VAR_18 && VAR_18 < VAR_17 &&
      FUNC_12(VAR_9, VAR_16->qd_last_warn +
      FUNC_2(VAR_15, VAR_8)
      * VAR_3)) {
   FUNC_7(VAR_16->qd_id,
        VAR_15->sd_vfs->s_dev, VAR_6);
   VAR_21 = FUNC_5(VAR_16, "warning");
   VAR_16->qd_last_warn = VAR_9;
  }
 }
 return VAR_21;
}
