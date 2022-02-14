
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_pdev_pktlog_enable_cmd {int ev_bitmap; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_3, u32 VAR_4)
{
 struct wmi_pdev_pktlog_enable_cmd *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_5));
 if (!VAR_6)
  return FUNC_0(-VAR_2);

 VAR_4 &= VAR_1;

 VAR_5 = (struct wmi_pdev_pktlog_enable_cmd *)VAR_6->data;
 VAR_5->ev_bitmap = FUNC_1(VAR_4);

 FUNC_2(VAR_3, VAR_0, "wmi enable pktlog filter 0x%08x\n",
     VAR_4);
 return VAR_6;
}
