
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qtnf_mac_info {int coverage_class; int lretry_limit; int sretry_limit; void* rts_thr; void* frag_thr; } ;
struct qtnf_wmac {int macid; struct qtnf_mac_info macinfo; } ;
struct qlink_tlv_rlimit {int rlimit; } ;
struct qlink_tlv_hdr {scalar_t__ val; int type; int len; } ;
struct qlink_tlv_frag_rts_thr {int thr; } ;
struct qlink_tlv_cclass {int cclass; } ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,size_t,...) ;

__attribute__((used)) static int FUNC_4(struct qtnf_wmac *VAR_1,
      const u8 *VAR_2, size_t VAR_3)
{
 struct qtnf_mac_info *VAR_4;
 struct qlink_tlv_frag_rts_thr *VAR_5;
 struct qlink_tlv_rlimit *VAR_6;
 struct qlink_tlv_cclass *VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 size_t VAR_10;
 const struct qlink_tlv_hdr *VAR_11;

 VAR_4 = &VAR_1->macinfo;

 VAR_11 = (struct qlink_tlv_hdr *)VAR_2;
 while (VAR_3 >= sizeof(struct qlink_tlv_hdr)) {
  VAR_8 = FUNC_0(VAR_11->type);
  VAR_9 = FUNC_0(VAR_11->len);
  VAR_10 = VAR_9 + sizeof(struct qlink_tlv_hdr);

  if (VAR_10 > VAR_3) {
   FUNC_3("MAC%u: malformed TLV 0x%.2X; LEN: %u\n",
    VAR_1->macid, VAR_8, VAR_9);
   return -VAR_0;
  }

  switch (VAR_8) {
  case 131:
   VAR_5 = (void *)VAR_11;
   VAR_4->frag_thr = FUNC_1(VAR_5->thr);
   break;
  case 129:
   VAR_5 = (void *)VAR_11;
   VAR_4->rts_thr = FUNC_1(VAR_5->thr);
   break;
  case 128:
   VAR_6 = (void *)VAR_11;
   VAR_4->sretry_limit = VAR_6->rlimit;
   break;
  case 130:
   VAR_6 = (void *)VAR_11;
   VAR_4->lretry_limit = VAR_6->rlimit;
   break;
  case 132:
   VAR_7 = (void *)VAR_11;
   VAR_4->coverage_class = VAR_7->cclass;
   break;
  default:
   FUNC_2("MAC%u: Unknown TLV type: %#x\n", VAR_1->macid,
          FUNC_0(VAR_11->type));
   break;
  }

  VAR_3 -= VAR_10;
  VAR_11 = (struct qlink_tlv_hdr *)(VAR_11->val + VAR_9);
 }

 if (VAR_3) {
  FUNC_3("MAC%u: malformed TLV buf; bytes left: %zu\n",
   VAR_1->macid, VAR_3);
  return -VAR_0;
 }

 return 0;
}
