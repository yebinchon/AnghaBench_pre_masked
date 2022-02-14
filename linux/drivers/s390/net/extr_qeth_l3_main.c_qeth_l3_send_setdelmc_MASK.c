
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_10__ {TYPE_4__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_5__ u; int mac; } ;
struct TYPE_7__ {int ip4; int * ip6; int mac; } ;
struct TYPE_8__ {TYPE_2__ setdelipm; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 scalar_t__ VAR_1 ;
 struct qeth_ipa_cmd* FUNC_2 (struct qeth_cmd_buffer*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int) ;
 struct qeth_cmd_buffer* FUNC_5 (struct qeth_card*,int,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_4,
   struct qeth_ipaddr *VAR_5, int VAR_6)
{
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_1(VAR_4, 4, "setdelmc");

 VAR_7 = FUNC_5(VAR_4, VAR_6, VAR_5->proto,
     FUNC_0(VAR_3));
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_8->data.setdelipm.mac, VAR_5->mac);
 if (VAR_5->proto == VAR_1)
  FUNC_4(VAR_8->data.setdelipm.ip6, &VAR_5->u.a6.addr,
         sizeof(struct in6_addr));
 else
  FUNC_4(&VAR_8->data.setdelipm.ip4, &VAR_5->u.a4.addr, 4);

 return FUNC_6(VAR_4, VAR_7, VAR_2, ((void*)0));
}
