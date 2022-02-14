
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int request_bits; } ;
struct TYPE_6__ {TYPE_1__ query_arp; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_4__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct qeth_arp_query_info {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (int,char*,int ,int) ;
 int FUNC_3 (int ) ;
 struct qeth_ipa_cmd* FUNC_4 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_5 (struct qeth_card*,int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (struct qeth_card*,struct qeth_cmd_buffer*,int ,struct qeth_arp_query_info*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_5,
 enum qeth_prot_versions VAR_6,
 struct qeth_arp_query_info *VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;
 int VAR_10;

 FUNC_1(VAR_5, 3, "qarpipv%i", VAR_6);

 VAR_8 = FUNC_5(VAR_5, VAR_1,
           VAR_2,
           FUNC_3(VAR_4), VAR_6);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_4(VAR_8);
 VAR_9->data.setassparms.data.query_arp.request_bits = 0x000F;
 VAR_10 = FUNC_6(VAR_5, VAR_8, VAR_3, VAR_7);
 if (VAR_10)
  FUNC_2(2, "Error while querying ARP cache on device %x: %#x\n",
     FUNC_0(VAR_5), VAR_10);
 return VAR_10;
}
