
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {scalar_t__ param; } ;
struct TYPE_8__ {int return_code; scalar_t__ seq_no; scalar_t__ number_of_replies; } ;
struct qeth_arp_query_data {int no_entries; char data; int reply_bits; } ;
struct TYPE_6__ {struct qeth_arp_query_data query_arp; } ;
struct TYPE_9__ {TYPE_3__ hdr; TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_4__ setassparms; } ;
struct TYPE_7__ {int prot_version; int return_code; } ;
struct qeth_ipa_cmd {TYPE_5__ data; TYPE_2__ hdr; } ;
struct qeth_card {int dummy; } ;
struct qeth_arp_query_info {int mask_bits; scalar_t__ udata_len; scalar_t__ udata_offset; scalar_t__ udata; int no_entries; } ;
struct qeth_arp_entrytype {int ip; } ;
struct qeth_arp_qi_entry5 {struct qeth_arp_entrytype type; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qeth_arp_entrytype*,int) ;
 scalar_t__ FUNC_3 (struct qeth_card*,struct qeth_arp_query_data*,struct qeth_arp_entrytype*,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_4,
  struct qeth_reply *VAR_5, unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;
 struct qeth_arp_query_data *VAR_8;
 struct qeth_arp_query_info *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 __u8 VAR_13;

 FUNC_0(VAR_4, 3, "arpquecb");

 VAR_9 = (struct qeth_arp_query_info *) VAR_5->param;
 VAR_7 = (struct qeth_ipa_cmd *) VAR_6;
 FUNC_1(VAR_4, 4, "%i", VAR_7->hdr.prot_version);
 if (VAR_7->hdr.return_code) {
  FUNC_0(VAR_4, 4, "arpcberr");
  FUNC_1(VAR_4, 4, "%i", VAR_7->hdr.return_code);
  return FUNC_6(VAR_7->hdr.return_code);
 }
 if (VAR_7->data.setassparms.hdr.return_code) {
  VAR_7->hdr.return_code = VAR_7->data.setassparms.hdr.return_code;
  FUNC_0(VAR_4, 4, "setaperr");
  FUNC_1(VAR_4, 4, "%i", VAR_7->hdr.return_code);
  return FUNC_6(VAR_7->hdr.return_code);
 }
 VAR_8 = &VAR_7->data.setassparms.data.query_arp;
 FUNC_1(VAR_4, 4, "anoen%i", VAR_8->no_entries);

 VAR_13 = (VAR_9->mask_bits & VAR_3) > 0;
 VAR_12 = VAR_13 ? VAR_2 : 0;
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_8->no_entries; ++VAR_10) {
  char *VAR_14;
  __u32 VAR_15;
  struct qeth_arp_entrytype *VAR_16;

  VAR_14 = &VAR_8->data + VAR_11;
  VAR_16 = &((struct qeth_arp_qi_entry5 *) VAR_14)->type;
  if (!FUNC_2(VAR_16, VAR_7->hdr.prot_version)) {
   FUNC_0(VAR_4, 4, "pmis");
   FUNC_1(VAR_4, 4, "%i", VAR_16->ip);
   break;
  }
  VAR_15 = FUNC_3(VAR_4, VAR_8, VAR_16,
   VAR_13);
  FUNC_1(VAR_4, 5, "esz%i", VAR_15);
  if (!VAR_15)
   break;

  if ((VAR_9->udata_len - VAR_9->udata_offset) < VAR_15) {
   FUNC_1(VAR_4, 4, "qaer3%i", -VAR_0);
   FUNC_5(VAR_9->udata, 0, 4);
   return -VAR_0;
  }

  FUNC_4(VAR_9->udata + VAR_9->udata_offset,
   &VAR_8->data + VAR_11 + VAR_12,
   VAR_15);
  VAR_11 += VAR_15 + VAR_12;
  VAR_9->udata_offset += VAR_15;
  ++VAR_9->no_entries;
 }

 if (VAR_7->data.setassparms.hdr.seq_no <
     VAR_7->data.setassparms.hdr.number_of_replies)
  return 1;
 FUNC_1(VAR_4, 4, "nove%i", VAR_9->no_entries);
 FUNC_4(VAR_9->udata, &VAR_9->no_entries, 4);


 if (VAR_9->mask_bits & VAR_3)
  VAR_8->reply_bits |= VAR_3;
 FUNC_4(VAR_9->udata + VAR_1, &VAR_8->reply_bits, 2);
 FUNC_1(VAR_4, 4, "rc%i", 0);
 return 0;
}
