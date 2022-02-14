
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qm_mc_result {int verb; scalar_t__ result; } ;
struct qm_mcc_initcgr {int cgid; } ;
union qm_mc_command {struct qm_mcc_initcgr initcgr; } ;
typedef int u8 ;
typedef int u32 ;
struct qman_portal {int p; } ;
struct qman_cgr {int cgrid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct qman_portal* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct qman_cgr *VAR_7, u32 VAR_8,
    struct qm_mcc_initcgr *VAR_9)
{
 union qm_mc_command *VAR_10;
 union qm_mc_result *VAR_11;
 struct qman_portal *VAR_12 = FUNC_1();
 u8 VAR_13 = VAR_4;
 int VAR_14 = 0;

 VAR_10 = FUNC_5(&VAR_12->p);
 if (VAR_9)
  VAR_10->initcgr = *VAR_9;
 VAR_10->initcgr.cgid = VAR_7->cgrid;
 if (VAR_8 & VAR_2)
  VAR_13 = VAR_3;
 FUNC_3(&VAR_12->p, VAR_13);
 if (!FUNC_4(&VAR_12->p, &VAR_11)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 FUNC_0((VAR_11->verb & VAR_6) == VAR_13);
 if (VAR_11->result != VAR_5)
  VAR_14 = -VAR_0;

out:
 FUNC_2();
 return VAR_14;
}
