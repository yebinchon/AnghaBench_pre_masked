
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qman_portal {int cgr_lock; int * cgrs; TYPE_1__* config; int cgr_cbs; } ;
struct qman_cgr {size_t cgrid; int (* cb ) (struct qman_portal*,struct qman_cgr*,int) ;int node; int chan; } ;
struct TYPE_4__ {scalar_t__ cscn_en; int cscn_targ; } ;
struct qm_mcr_querycgr {TYPE_2__ cgr; } ;
struct qm_mcc_initcgr {int we_mask; int cgr; } ;
struct TYPE_3__ {int dev; int channel; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qman_portal*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct qman_portal* FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct qman_cgr*,int,struct qm_mcc_initcgr*) ;
 int * VAR_4 ;
 scalar_t__ FUNC_11 (int *,size_t) ;
 int FUNC_12 (struct qman_cgr*,struct qm_mcr_querycgr*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct qman_portal*,struct qman_cgr*,int) ;

int FUNC_17(struct qman_cgr *VAR_5, u32 VAR_6,
      struct qm_mcc_initcgr *VAR_7)
{
 struct qm_mcr_querycgr VAR_8;
 int VAR_9;
 struct qman_portal *VAR_10;







 if (VAR_5->cgrid >= VAR_0)
  return -VAR_1;

 FUNC_6();
 VAR_10 = FUNC_4();
 VAR_4[VAR_5->cgrid] = FUNC_13();
 FUNC_7();

 VAR_5->chan = VAR_10->config->channel;
 FUNC_14(&VAR_10->cgr_lock);

 if (VAR_7) {
  struct qm_mcc_initcgr VAR_11 = *VAR_7;

  VAR_9 = FUNC_12(VAR_5, &VAR_8);
  if (VAR_9)
   goto out;

  FUNC_9(&VAR_11.cgr, FUNC_0(VAR_10),
         FUNC_1(VAR_8.cgr.cscn_targ));
  VAR_11.we_mask |= FUNC_2(VAR_3);


  if (VAR_6 & VAR_2)
   VAR_9 = FUNC_10(VAR_5, VAR_2,
         &VAR_11);
  else
   VAR_9 = FUNC_10(VAR_5, 0, &VAR_11);
  if (VAR_9)
   goto out;
 }

 FUNC_5(&VAR_5->node, &VAR_10->cgr_cbs);


 VAR_9 = FUNC_12(VAR_5, &VAR_8);
 if (VAR_9) {

  FUNC_3(VAR_10->config->dev, "CGR HW state partially modified\n");
  VAR_9 = 0;
  goto out;
 }
 if (VAR_5->cb && VAR_8.cgr.cscn_en &&
     FUNC_11(&VAR_10->cgrs[1], VAR_5->cgrid))
  VAR_5->cb(VAR_10, VAR_5, 1);
out:
 FUNC_15(&VAR_10->cgr_lock);
 FUNC_8();
 return VAR_9;
}
