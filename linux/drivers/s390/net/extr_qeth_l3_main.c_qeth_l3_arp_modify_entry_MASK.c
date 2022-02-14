
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct qeth_arp_cache_entry {int ipaddr; int macaddr; } ;
typedef enum qeth_arp_process_subcmds { ____Placeholder_qeth_arp_process_subcmds } qeth_arp_process_subcmds ;
struct TYPE_5__ {struct qeth_arp_cache_entry arp_entry; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ setassparms; } ;
struct TYPE_8__ {TYPE_3__ data; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int,char*,int,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (struct qeth_cmd_buffer*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 struct qeth_cmd_buffer* FUNC_8 (struct qeth_card*,int ,int,int ,int ) ;
 int FUNC_9 (struct qeth_card*,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_7,
        struct qeth_arp_cache_entry *VAR_8,
        enum qeth_arp_process_subcmds VAR_9)
{
 struct qeth_arp_cache_entry *VAR_10;
 struct qeth_cmd_buffer *VAR_11;
 int VAR_12;

 if (VAR_9 == VAR_3)
  FUNC_2(VAR_7, 3, "arpadd");
 else
  FUNC_2(VAR_7, 3, "arpdel");






 if (FUNC_1(VAR_7))
  return -VAR_1;
 if (!FUNC_9(VAR_7, VAR_2)) {
  return -VAR_1;
 }

 VAR_11 = FUNC_8(VAR_7, VAR_2, VAR_9,
           FUNC_4(VAR_5),
           VAR_4);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = &FUNC_5(VAR_11)->data.setassparms.data.arp_entry;
 FUNC_6(VAR_10->macaddr, VAR_8->macaddr);
 FUNC_7(VAR_10->ipaddr, VAR_8->ipaddr, 4);
 VAR_12 = FUNC_10(VAR_7, VAR_11, VAR_6, ((void*)0));
 if (VAR_12)
  FUNC_3(2, "Could not modify (cmd: %#x) ARP entry on device %x: %#x\n",
     VAR_9, FUNC_0(VAR_7), VAR_12);
 return VAR_12;
}
