
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wmi_phyerr_ev_arg {int buf_len; int * buf; } ;
struct phyerr_tlv {int tag; int len; } ;
struct phyerr_fft_report {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int) ;
 int FUNC_2 (struct ath10k*,struct wmi_phyerr_ev_arg*,struct phyerr_fft_report const*,size_t,int ) ;
 int FUNC_3 (struct ath10k*,char*,int) ;

void FUNC_4(struct ath10k *VAR_1,
        struct wmi_phyerr_ev_arg *VAR_2,
        u64 VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 struct phyerr_tlv *VAR_8;
 const void *VAR_9;
 const struct phyerr_fft_report *VAR_10;
 size_t VAR_11;

 VAR_4 = VAR_2->buf_len;

 while (VAR_7 < VAR_4) {
  if (VAR_7 + sizeof(*VAR_8) > VAR_4) {
   FUNC_3(VAR_1, "failed to parse phyerr tlv header at byte %d\n",
        VAR_7);
   return;
  }

  VAR_8 = (struct phyerr_tlv *)&VAR_2->buf[VAR_7];
  VAR_5 = FUNC_0(VAR_8->len);
  VAR_9 = &VAR_2->buf[VAR_7 + sizeof(*VAR_8)];

  if (VAR_7 + sizeof(*VAR_8) + VAR_5 > VAR_4) {
   FUNC_3(VAR_1, "failed to parse phyerr tlv payload at byte %d\n",
        VAR_7);
   return;
  }

  switch (VAR_8->tag) {
  case 128:
   if (sizeof(*VAR_10) > VAR_5) {
    FUNC_3(VAR_1, "failed to parse fft report at byte %d\n",
         VAR_7);
    return;
   }

   VAR_11 = VAR_5 - sizeof(*VAR_10);
   VAR_10 = VAR_9;
   VAR_6 = FUNC_2(VAR_1, VAR_2,
         VAR_10, VAR_11,
         VAR_3);
   if (VAR_6 < 0) {
    FUNC_1(VAR_1, VAR_0, "failed to process fft report: %d\n",
        VAR_6);
    return;
   }
   break;
  }

  VAR_7 += sizeof(*VAR_8) + VAR_5;
 }
}
