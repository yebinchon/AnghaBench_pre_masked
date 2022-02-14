
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_9__ {int mask; int addr; } ;
struct TYPE_7__ {int pfxlen; int addr; } ;
struct TYPE_10__ {TYPE_3__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_4__ u; } ;
struct TYPE_11__ {void* flags; int mask; int ip_addr; } ;
struct TYPE_8__ {void* flags; int mask; int ip_addr; } ;
struct TYPE_12__ {TYPE_5__ setdelip4; TYPE_2__ setdelip6; } ;
struct qeth_ipa_cmd {TYPE_6__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,void*) ;
 scalar_t__ VAR_2 ;
 struct qeth_ipa_cmd* FUNC_3 (struct qeth_cmd_buffer*) ;
 int FUNC_4 (int ,int *,int) ;
 struct qeth_cmd_buffer* FUNC_5 (struct qeth_card*,int,scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (struct qeth_ipaddr*,int) ;
 int VAR_3 ;
 int FUNC_8 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_5,
     struct qeth_ipaddr *VAR_6,
     enum qeth_ipa_cmds VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;
 __u8 VAR_10[16];
 u32 VAR_11;

 FUNC_1(VAR_5, 4, "setdelip");

 VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6->proto,
     FUNC_0(VAR_4));
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_8);

 VAR_11 = FUNC_7(VAR_6, VAR_7 == VAR_1);
 FUNC_2(VAR_5, 4, "flags%02X", VAR_11);

 if (VAR_6->proto == VAR_2) {
  FUNC_4(VAR_9->data.setdelip6.ip_addr, &VAR_6->u.a6.addr,
         sizeof(struct in6_addr));
  FUNC_6(VAR_10, VAR_6->u.a6.pfxlen);
  FUNC_4(VAR_9->data.setdelip6.mask, VAR_10,
         sizeof(struct in6_addr));
  VAR_9->data.setdelip6.flags = VAR_11;
 } else {
  FUNC_4(VAR_9->data.setdelip4.ip_addr, &VAR_6->u.a4.addr, 4);
  FUNC_4(VAR_9->data.setdelip4.mask, &VAR_6->u.a4.mask, 4);
  VAR_9->data.setdelip4.flags = VAR_11;
 }

 return FUNC_8(VAR_5, VAR_8, VAR_3, ((void*)0));
}
