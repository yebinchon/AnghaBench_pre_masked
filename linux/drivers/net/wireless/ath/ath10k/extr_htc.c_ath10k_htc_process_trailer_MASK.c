
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; int id; } ;
struct ath10k_htc_record {TYPE_1__ hdr; struct ath10k_htc_lookahead_bundle* lookahead_bundle; int lookahead_report; int credit_report; } ;
struct ath10k_htc_lookahead_report {int dummy; } ;
struct ath10k_htc_lookahead_bundle {int dummy; } ;
struct ath10k_htc_credit_report {int dummy; } ;
struct ath10k_htc {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,char*,int *,int) ;
 int FUNC_1 (struct ath10k_htc*,int ,size_t,int) ;
 int FUNC_2 (struct ath10k_htc*,int ,size_t,int,void*,int*) ;
 int FUNC_3 (struct ath10k_htc*,struct ath10k_htc_lookahead_bundle*,size_t,int,void*,int*) ;
 int FUNC_4 (struct ath10k*,char*,...) ;

int FUNC_5(struct ath10k_htc *VAR_2,
          u8 *VAR_3,
          int VAR_4,
          enum ath10k_htc_ep_id VAR_5,
          void *VAR_6,
          int *VAR_7)
{
 struct ath10k_htc_lookahead_bundle *VAR_8;
 struct ath10k *VAR_9 = VAR_2->ar;
 int VAR_10 = 0;
 struct ath10k_htc_record *VAR_11;
 u8 *VAR_12;
 int VAR_13;
 size_t VAR_14;

 VAR_12 = VAR_3;
 VAR_13 = VAR_4;

 while (VAR_4 > 0) {
  VAR_11 = (struct ath10k_htc_record *)VAR_3;

  if (VAR_4 < sizeof(VAR_11->hdr)) {
   VAR_10 = -VAR_1;
   break;
  }

  if (VAR_11->hdr.len > VAR_4) {

   FUNC_4(VAR_9, "Invalid record length: %d\n",
        VAR_11->hdr.len);
   VAR_10 = -VAR_1;
   break;
  }

  switch (VAR_11->hdr.id) {
  case 130:
   VAR_14 = sizeof(struct ath10k_htc_credit_report);
   if (VAR_11->hdr.len < VAR_14) {
    FUNC_4(VAR_9, "Credit report too long\n");
    VAR_10 = -VAR_1;
    break;
   }
   FUNC_1(VAR_2,
        VAR_11->credit_report,
        VAR_11->hdr.len,
        VAR_5);
   break;
  case 129:
   VAR_14 = sizeof(struct ath10k_htc_lookahead_report);
   if (VAR_11->hdr.len < VAR_14) {
    FUNC_4(VAR_9, "Lookahead report too long\n");
    VAR_10 = -VAR_1;
    break;
   }
   VAR_10 = FUNC_2(VAR_2,
             VAR_11->lookahead_report,
             VAR_11->hdr.len,
             VAR_5,
             VAR_6,
             VAR_7);
   break;
  case 128:
   VAR_8 = VAR_11->lookahead_bundle;
   VAR_10 = FUNC_3(VAR_2,
             VAR_8,
             VAR_11->hdr.len,
             VAR_5,
             VAR_6,
             VAR_7);
   break;
  default:
   FUNC_4(VAR_9, "Unhandled record: id:%d length:%d\n",
        VAR_11->hdr.id, VAR_11->hdr.len);
   break;
  }

  if (VAR_10)
   break;


  VAR_3 += sizeof(VAR_11->hdr) + VAR_11->hdr.len;
  VAR_4 -= sizeof(VAR_11->hdr) + VAR_11->hdr.len;
 }

 if (VAR_10)
  FUNC_0(VAR_9, VAR_0, "htc rx bad trailer", "",
    VAR_12, VAR_13);

 return VAR_10;
}
