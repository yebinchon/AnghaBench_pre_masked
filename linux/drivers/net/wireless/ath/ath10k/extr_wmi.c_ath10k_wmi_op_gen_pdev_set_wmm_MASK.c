
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_wmm_params_all_arg {int ac_vo; int ac_vi; int ac_bk; int ac_be; } ;
struct wmi_pdev_set_wmm_params {int ac_vo; int ac_vi; int ac_bk; int ac_be; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2,
          const struct wmi_wmm_params_all_arg *VAR_3)
{
 struct wmi_pdev_set_wmm_params *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_pdev_set_wmm_params *)VAR_5->data;
 FUNC_3(&VAR_4->ac_be, &VAR_3->ac_be);
 FUNC_3(&VAR_4->ac_bk, &VAR_3->ac_bk);
 FUNC_3(&VAR_4->ac_vi, &VAR_3->ac_vi);
 FUNC_3(&VAR_4->ac_vo, &VAR_3->ac_vo);

 FUNC_1(VAR_2, VAR_0, "wmi pdev set wmm params\n");
 return VAR_5;
}
