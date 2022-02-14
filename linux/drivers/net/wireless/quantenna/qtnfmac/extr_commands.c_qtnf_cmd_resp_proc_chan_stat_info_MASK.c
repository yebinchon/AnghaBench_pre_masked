
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qtnf_chan_stats {int chan_noise; void* cca_busy; void* cca_try; void* chan_num; void* cca_rx; void* cca_tx; } ;
struct qlink_tlv_hdr {scalar_t__ val; int type; int len; } ;
struct qlink_chan_stats {int chan_noise; int cca_try; int cca_busy; int cca_rx; int cca_tx; int chan_num; } ;


 int VAR_0 ;

 size_t FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,void*,void*,void*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,...) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qtnf_chan_stats *VAR_1,
      const u8 *VAR_2, size_t VAR_3)
{
 struct qlink_chan_stats *VAR_4;
 const struct qlink_tlv_hdr *VAR_5;
 size_t VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 VAR_5 = (struct qlink_tlv_hdr *)VAR_2;
 while (VAR_3 >= sizeof(struct qlink_tlv_hdr)) {
  VAR_8 = FUNC_0(VAR_5->type);
  VAR_7 = FUNC_0(VAR_5->len);
  VAR_6 = VAR_7 + sizeof(struct qlink_tlv_hdr);
  if (VAR_6 > VAR_3) {
   FUNC_4("malformed TLV 0x%.2X; LEN: %u\n",
    VAR_8, VAR_7);
   return -VAR_0;
  }
  switch (VAR_8) {
  case 128:
   if (FUNC_5(VAR_7 != sizeof(*VAR_4))) {
    FUNC_3("invalid CHANNEL_STATS entry size\n");
    return -VAR_0;
   }

   VAR_4 = (void *)VAR_5->val;

   VAR_1->chan_num = FUNC_1(VAR_4->chan_num);
   VAR_1->cca_tx = FUNC_1(VAR_4->cca_tx);
   VAR_1->cca_rx = FUNC_1(VAR_4->cca_rx);
   VAR_1->cca_busy = FUNC_1(VAR_4->cca_busy);
   VAR_1->cca_try = FUNC_1(VAR_4->cca_try);
   VAR_1->chan_noise = VAR_4->chan_noise;

   FUNC_2("chan(%u) try(%u) busy(%u) noise(%d)\n",
     VAR_1->chan_num, VAR_1->cca_try,
     VAR_1->cca_busy, VAR_1->chan_noise);
   break;
  default:
   FUNC_4("Unknown TLV type: %#x\n",
    FUNC_0(VAR_5->type));
  }
  VAR_3 -= VAR_6;
  VAR_5 = (struct qlink_tlv_hdr *)(VAR_5->val + VAR_7);
 }

 if (VAR_3) {
  FUNC_4("malformed TLV buf; bytes left: %zu\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
