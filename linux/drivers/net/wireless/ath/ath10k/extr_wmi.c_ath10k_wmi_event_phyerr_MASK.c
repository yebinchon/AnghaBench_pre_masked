
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct wmi_phyerr_hdr_arg {int num_phyerrs; int buf_len; int tsf_u32; int tsf_l32; void* phyerrs; } ;
struct wmi_phyerr_ev_arg {int hdr_len; int buf_len; int phy_err_code; } ;
struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;



 int FUNC_1 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,struct wmi_phyerr_ev_arg*,int) ;
 int FUNC_4 (struct ath10k*,struct wmi_phyerr_ev_arg*,int) ;
 int FUNC_5 (struct ath10k*,void const*,int,struct wmi_phyerr_ev_arg*) ;
 int FUNC_6 (struct ath10k*,struct sk_buff*,struct wmi_phyerr_hdr_arg*) ;
 int VAR_1 ;

void FUNC_7(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct wmi_phyerr_hdr_arg VAR_4 = {};
 struct wmi_phyerr_ev_arg VAR_5 = {};
 const void *VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u64 VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_2, VAR_1);

 VAR_13 = FUNC_6(VAR_2, VAR_3, &VAR_4);
 if (VAR_13) {
  FUNC_2(VAR_2, "failed to parse phyerr event hdr: %d\n", VAR_13);
  return;
 }


 VAR_7 = VAR_4.num_phyerrs;

 VAR_12 = VAR_4.buf_len;

 VAR_11 = VAR_4.tsf_u32;
 VAR_11 <<= 32;
 VAR_11 |= VAR_4.tsf_l32;

 FUNC_1(VAR_2, VAR_0,
     "wmi event phyerr count %d tsf64 0x%llX\n",
     VAR_7, VAR_11);

 VAR_6 = VAR_4.phyerrs;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_13 = FUNC_5(VAR_2, VAR_6, VAR_12, &VAR_5);
  if (VAR_13) {
   FUNC_2(VAR_2, "failed to parse phyerr event (%d)\n",
        VAR_8);
   return;
  }

  VAR_12 -= VAR_5.hdr_len;
  VAR_9 = VAR_5.buf_len;
  VAR_10 = VAR_5.phy_err_code;

  if (VAR_12 < VAR_9) {
   FUNC_2(VAR_2, "single event (%d) wrong buf len\n", VAR_8);
   return;
  }

  VAR_12 -= VAR_9;

  switch (VAR_10) {
  case 129:
   FUNC_3(VAR_2, &VAR_5, VAR_11);
   break;
  case 128:
   FUNC_4(VAR_2, &VAR_5, VAR_11);
   break;
  case 130:
   FUNC_3(VAR_2, &VAR_5, VAR_11);
   FUNC_4(VAR_2, &VAR_5, VAR_11);
   break;
  default:
   break;
  }

  VAR_6 = VAR_6 + VAR_5.hdr_len + VAR_9;
 }
}
