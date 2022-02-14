
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dquot_warn {int dummy; } ;
struct TYPE_7__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_itime; } ;
struct TYPE_6__ {size_t type; } ;
struct dquot {int dq_dqb_lock; TYPE_3__ dq_dqb; TYPE_2__ dq_id; int dq_sb; int dq_flags; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_5__ {scalar_t__ dqi_igrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dquot*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct dquot_warn*,struct dquot*,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct dquot *VAR_5, qsize_t VAR_6,
       struct dquot_warn *VAR_7)
{
 qsize_t VAR_8;
 int VAR_9 = 0;

 FUNC_5(&VAR_5->dq_dqb_lock);
 VAR_8 = VAR_5->dq_dqb.dqb_curinodes + VAR_6;
 if (!FUNC_4(VAR_5->dq_sb, VAR_5->dq_id.type) ||
     FUNC_7(VAR_0, &VAR_5->dq_flags))
  goto add;

 if (VAR_5->dq_dqb.dqb_ihardlimit &&
     VAR_8 > VAR_5->dq_dqb.dqb_ihardlimit &&
            !FUNC_0(VAR_5)) {
  FUNC_2(VAR_7, VAR_5, VAR_2);
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_5->dq_dqb.dqb_isoftlimit &&
     VAR_8 > VAR_5->dq_dqb.dqb_isoftlimit &&
     VAR_5->dq_dqb.dqb_itime &&
     FUNC_1() >= VAR_5->dq_dqb.dqb_itime &&
            !FUNC_0(VAR_5)) {
  FUNC_2(VAR_7, VAR_5, VAR_3);
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_5->dq_dqb.dqb_isoftlimit &&
     VAR_8 > VAR_5->dq_dqb.dqb_isoftlimit &&
     VAR_5->dq_dqb.dqb_itime == 0) {
  FUNC_2(VAR_7, VAR_5, VAR_4);
  VAR_5->dq_dqb.dqb_itime = FUNC_1() +
      FUNC_3(VAR_5->dq_sb)->info[VAR_5->dq_id.type].dqi_igrace;
 }
add:
 VAR_5->dq_dqb.dqb_curinodes = VAR_8;

out:
 FUNC_6(&VAR_5->dq_dqb_lock);
 return VAR_9;
}
