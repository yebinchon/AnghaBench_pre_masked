
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dquot_warn {int dummy; } ;
struct TYPE_7__ {scalar_t__ dqb_curspace; scalar_t__ dqb_rsvspace; scalar_t__ dqb_bhardlimit; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_btime; } ;
struct TYPE_6__ {size_t type; } ;
struct dquot {int dq_dqb_lock; TYPE_3__ dq_dqb; TYPE_2__ dq_id; int dq_flags; struct super_block* dq_sb; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_5__ {scalar_t__ dqi_bgrace; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dquot*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct dquot_warn*,struct dquot*,int ) ;
 TYPE_4__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct dquot *VAR_7, qsize_t VAR_8,
      qsize_t VAR_9, unsigned int VAR_10,
      struct dquot_warn *VAR_11)
{
 qsize_t VAR_12;
 struct super_block *VAR_13 = VAR_7->dq_sb;
 int VAR_14 = 0;

 FUNC_5(&VAR_7->dq_dqb_lock);
 if (!FUNC_4(VAR_13, VAR_7->dq_id.type) ||
     FUNC_7(VAR_2, &VAR_7->dq_flags))
  goto finish;

 VAR_12 = VAR_7->dq_dqb.dqb_curspace + VAR_7->dq_dqb.dqb_rsvspace
  + VAR_8 + VAR_9;

 if (VAR_7->dq_dqb.dqb_bhardlimit &&
     VAR_12 > VAR_7->dq_dqb.dqb_bhardlimit &&
            !FUNC_0(VAR_7)) {
  if (VAR_10 & VAR_1)
   FUNC_2(VAR_11, VAR_7, VAR_4);
  VAR_14 = -VAR_3;
  goto finish;
 }

 if (VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_12 > VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_7->dq_dqb.dqb_btime &&
     FUNC_1() >= VAR_7->dq_dqb.dqb_btime &&
            !FUNC_0(VAR_7)) {
  if (VAR_10 & VAR_1)
   FUNC_2(VAR_11, VAR_7, VAR_5);
  VAR_14 = -VAR_3;
  goto finish;
 }

 if (VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_12 > VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_7->dq_dqb.dqb_btime == 0) {
  if (VAR_10 & VAR_1) {
   FUNC_2(VAR_11, VAR_7, VAR_6);
   VAR_7->dq_dqb.dqb_btime = FUNC_1() +
       FUNC_3(VAR_13)->info[VAR_7->dq_id.type].dqi_bgrace;
  } else {




   VAR_14 = -VAR_3;
   goto finish;
  }
 }
finish:





 if (VAR_10 & VAR_0)
  VAR_14 = 0;
 if (!VAR_14) {
  VAR_7->dq_dqb.dqb_rsvspace += VAR_9;
  VAR_7->dq_dqb.dqb_curspace += VAR_8;
 }
 FUNC_6(&VAR_7->dq_dqb_lock);
 return VAR_14;
}
