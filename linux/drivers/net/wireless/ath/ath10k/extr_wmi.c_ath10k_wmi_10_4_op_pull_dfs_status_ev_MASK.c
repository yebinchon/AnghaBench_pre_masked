
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_dfs_status_ev_arg {int status; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ath10k *VAR_1, struct sk_buff *VAR_2,
          struct wmi_dfs_status_ev_arg *VAR_3)
{
 struct wmi_dfs_status_ev_arg *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 VAR_3->status = VAR_4->status;

 return 0;
}
