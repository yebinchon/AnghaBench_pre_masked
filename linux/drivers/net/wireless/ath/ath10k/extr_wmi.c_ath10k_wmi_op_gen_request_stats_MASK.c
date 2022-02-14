
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_request_stats_cmd {int stats_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u32 VAR_3)
{
 struct wmi_request_stats_cmd *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_request_stats_cmd *)VAR_5->data;
 VAR_4->stats_id = FUNC_1(VAR_3);

 FUNC_2(VAR_2, VAR_0, "wmi request stats 0x%08x\n",
     VAR_3);
 return VAR_5;
}
