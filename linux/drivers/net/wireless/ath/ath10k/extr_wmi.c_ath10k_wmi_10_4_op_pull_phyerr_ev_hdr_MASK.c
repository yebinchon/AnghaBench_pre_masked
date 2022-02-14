
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_phyerr_hdr_arg {int num_phyerrs; int buf_len; scalar_t__ phyerrs; void* tsf_u32; void* tsf_l32; } ;
struct wmi_10_4_phyerr_event {int tsf_u32; int tsf_l32; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1,
       struct sk_buff *VAR_2,
       struct wmi_phyerr_hdr_arg *VAR_3)
{
 struct wmi_10_4_phyerr_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;


 VAR_3->num_phyerrs = 1;

 VAR_3->tsf_l32 = FUNC_0(VAR_4->tsf_l32);
 VAR_3->tsf_u32 = FUNC_0(VAR_4->tsf_u32);
 VAR_3->buf_len = VAR_2->len;
 VAR_3->phyerrs = VAR_2->data;

 return 0;
}
