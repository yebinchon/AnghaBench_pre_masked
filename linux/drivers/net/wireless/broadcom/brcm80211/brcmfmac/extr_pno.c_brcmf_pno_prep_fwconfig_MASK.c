
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_sched_scan_request {TYPE_1__* scan_plans; } ;
struct brcmf_pno_info {int n_reqs; struct cfg80211_sched_scan_request** reqs; } ;
struct brcmf_pno_config_le {int dummy; } ;
struct brcmf_gscan_bucket_config {int bucket_end_index; int bucket_freq_multiple; int flag; int repeat; int max_freq_multiple; } ;
struct TYPE_2__ {int interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct cfg80211_sched_scan_request*,struct brcmf_pno_config_le*) ;
 int FUNC_5 (int,int) ;
 struct brcmf_gscan_bucket_config* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct brcmf_gscan_bucket_config*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct brcmf_pno_config_le*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct brcmf_pno_info *VAR_6,
       struct brcmf_pno_config_le *VAR_7,
       struct brcmf_gscan_bucket_config **VAR_8,
       u32 *VAR_9)
{
 struct cfg80211_sched_scan_request *VAR_10;
 struct brcmf_gscan_bucket_config *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_2(VAR_5, "n_reqs=%d\n", VAR_6->n_reqs);
 if (FUNC_1(!VAR_6->n_reqs))
  return -VAR_2;





 *VAR_9 = VAR_6->reqs[0]->scan_plans[0].interval;
 for (VAR_12 = 1; VAR_12 < VAR_6->n_reqs; VAR_12++) {
  VAR_10 = VAR_6->reqs[VAR_12];
  *VAR_9 = FUNC_5(VAR_10->scan_plans[0].interval, *VAR_9);
 }
 if (*VAR_9 < VAR_1) {
  FUNC_2(VAR_5, "scan period too small, using minimum\n");
  *VAR_9 = VAR_1;
 }

 *VAR_8 = ((void*)0);
 VAR_11 = FUNC_6(VAR_6->n_reqs, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 FUNC_9(VAR_7, 0, sizeof(*VAR_7));
 for (VAR_12 = 0; VAR_12 < VAR_6->n_reqs; VAR_12++) {
  VAR_10 = VAR_6->reqs[VAR_12];
  VAR_14 = FUNC_4(VAR_10, VAR_7);
  if (VAR_14 < 0) {
   VAR_13 = VAR_14;
   goto fail;
  }
  VAR_11[VAR_12].bucket_end_index = VAR_14 - 1;
  VAR_11[VAR_12].bucket_freq_multiple =
   VAR_10->scan_plans[0].interval / *VAR_9;

  if (!VAR_11[VAR_12].bucket_freq_multiple)
   VAR_11[VAR_12].bucket_freq_multiple = 1;
  VAR_11[VAR_12].flag = VAR_0;
 }

 if (FUNC_0()) {
  FUNC_3("base period=%u\n", *VAR_9);
  for (VAR_12 = 0; VAR_12 < VAR_6->n_reqs; VAR_12++) {
   FUNC_3("[%d] period %u max %u repeat %u flag %x idx %u\n",
      VAR_12, VAR_11[VAR_12].bucket_freq_multiple,
      FUNC_8(VAR_11[VAR_12].max_freq_multiple),
      VAR_11[VAR_12].repeat, VAR_11[VAR_12].flag,
      VAR_11[VAR_12].bucket_end_index);
  }
 }
 *VAR_8 = VAR_11;
 return VAR_6->n_reqs;

fail:
 FUNC_7(VAR_11);
 return VAR_13;
}
