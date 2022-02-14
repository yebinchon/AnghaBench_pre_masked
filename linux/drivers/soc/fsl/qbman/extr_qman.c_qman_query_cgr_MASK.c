
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qm_mcr_querycgr {int dummy; } ;
union qm_mc_result {int verb; scalar_t__ result; struct qm_mcr_querycgr querycgr; } ;
struct TYPE_3__ {int cgid; } ;
union qm_mc_command {TYPE_1__ cgr; } ;
struct qman_portal {TYPE_2__* config; int p; } ;
struct qman_cgr {int cgrid; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 struct qman_portal* FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct qman_cgr *VAR_5,
     struct qm_mcr_querycgr *VAR_6)
{
 union qm_mc_command *VAR_7;
 union qm_mc_result *VAR_8;
 struct qman_portal *VAR_9 = FUNC_2();
 int VAR_10 = 0;

 VAR_7 = FUNC_7(&VAR_9->p);
 VAR_7->cgr.cgid = VAR_5->cgrid;
 FUNC_5(&VAR_9->p, VAR_2);
 if (!FUNC_6(&VAR_9->p, &VAR_8)) {
  VAR_10 = -VAR_1;
  goto out;
 }
 FUNC_0((VAR_8->verb & VAR_4) == VAR_2);
 if (VAR_8->result == VAR_3)
  *VAR_6 = VAR_8->querycgr;
 else {
  FUNC_1(VAR_9->config->dev, "QUERY_CGR failed: %s\n",
   FUNC_3(VAR_8->result));
  VAR_10 = -VAR_0;
 }
out:
 FUNC_4();
 return VAR_10;
}
