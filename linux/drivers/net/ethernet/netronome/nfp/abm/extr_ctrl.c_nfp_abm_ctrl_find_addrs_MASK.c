
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_rtsym {int dummy; } ;
struct nfp_pf {int cpp; } ;
struct nfp_abm {int red_support; int num_bands; int num_prios; int action_mask; struct nfp_rtsym const* q_stats; struct nfp_rtsym const* qm_stats; struct nfp_rtsym const* q_lvls; int dscp_mask; int prio_map_len; int pf_id; TYPE_1__* app; } ;
struct TYPE_2__ {struct nfp_pf* pf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nfp_rtsym const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct nfp_rtsym const*) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 struct nfp_rtsym* FUNC_5 (struct nfp_abm*,int ,int ) ;
 int FUNC_6 (struct nfp_abm*) ;
 scalar_t__ FUNC_7 (struct nfp_abm*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (struct nfp_pf*,int ,int) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct nfp_abm *VAR_13)
{
 struct nfp_pf *VAR_14 = VAR_13->app->pf;
 const struct nfp_rtsym *VAR_15;
 int VAR_16;

 VAR_13->pf_id = FUNC_8(VAR_14->cpp);


 VAR_16 = FUNC_10(VAR_14, VAR_11, 1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_13->red_support = VAR_16;


 VAR_16 = FUNC_10(VAR_14, VAR_3, 1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_13->num_bands = VAR_16;

 VAR_16 = FUNC_10(VAR_14, VAR_4, 1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_13->num_prios = VAR_16;


 VAR_16 = FUNC_10(VAR_14, VAR_2,
      FUNC_0(VAR_1));
 if (VAR_16 < 0)
  return VAR_16;
 VAR_13->action_mask = VAR_16;

 VAR_13->prio_map_len = FUNC_6(VAR_13);
 VAR_13->dscp_mask = FUNC_1(7, 8 - FUNC_11(VAR_13->num_prios));


 if (!FUNC_4(VAR_13->num_bands) || !FUNC_4(VAR_13->num_prios) ||
     VAR_13->num_bands > VAR_12 || VAR_13->num_prios > VAR_12 ||
     (VAR_13->num_bands == 1) != (VAR_13->num_prios == 1)) {
  FUNC_9(VAR_14->cpp,
   "invalid priomap description num bands: %u and num prios: %u\n",
   VAR_13->num_bands, VAR_13->num_prios);
  return -VAR_0;
 }


 if (!VAR_13->red_support)
  return 0;

 VAR_15 = FUNC_5(VAR_13, VAR_6,
     VAR_5);
 if (FUNC_2(VAR_15))
  return FUNC_3(VAR_15);
 VAR_13->q_lvls = VAR_15;

 VAR_15 = FUNC_5(VAR_13, VAR_8,
     VAR_7);
 if (FUNC_2(VAR_15))
  return FUNC_3(VAR_15);
 VAR_13->qm_stats = VAR_15;

 if (FUNC_7(VAR_13)) {
  VAR_15 = FUNC_5(VAR_13, VAR_10,
      VAR_9);
  if (FUNC_2(VAR_15))
   return FUNC_3(VAR_15);
  VAR_13->q_stats = VAR_15;
 }

 return 0;
}
