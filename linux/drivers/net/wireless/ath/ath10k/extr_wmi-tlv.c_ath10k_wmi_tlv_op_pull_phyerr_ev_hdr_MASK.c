
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_phyerr_ev {int buf_len; int tsf_u32; int tsf_l32; int num_phyerrs; } ;
struct wmi_phyerr_hdr_arg {void const* phyerrs; void* buf_len; void* tsf_u32; void* tsf_l32; void* num_phyerrs; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 void** FUNC_4 (struct ath10k*,int ,int ,int ) ;
 int FUNC_5 (void const**) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_4,
      struct sk_buff *VAR_5,
      struct wmi_phyerr_hdr_arg *VAR_6)
{
 const void **VAR_7;
 const struct wmi_tlv_phyerr_ev *VAR_8;
 const void *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_4, VAR_5->data, VAR_5->len, VAR_1);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  FUNC_3(VAR_4, "failed to parse tlv: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_8 = VAR_7[VAR_3];
 VAR_9 = VAR_7[VAR_2];

 if (!VAR_8 || !VAR_9) {
  FUNC_5(VAR_7);
  return -VAR_0;
 }

 VAR_6->num_phyerrs = FUNC_2(VAR_8->num_phyerrs);
 VAR_6->tsf_l32 = FUNC_2(VAR_8->tsf_l32);
 VAR_6->tsf_u32 = FUNC_2(VAR_8->tsf_u32);
 VAR_6->buf_len = FUNC_2(VAR_8->buf_len);
 VAR_6->phyerrs = VAR_9;

 FUNC_5(VAR_7);
 return 0;
}
