
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int dst_ipv6; int src_ipv6; } ;
struct in6_addr {int dummy; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ipv6_addrs {TYPE_2__* key; TYPE_1__* mask; } ;
typedef int addr ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {int dst; int src; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_2 (struct flow_rule*,int ) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct in6_addr*,int,int) ;
 scalar_t__ FUNC_6 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;
 int FUNC_7 (struct qede_dev*,struct qede_arfs_tuple*,struct in6_addr*) ;

__attribute__((used)) static int
FUNC_8(struct qede_dev *VAR_2, struct flow_rule *VAR_3,
     struct qede_arfs_tuple *VAR_4)
{
 struct in6_addr VAR_5, VAR_6;

 FUNC_5(&VAR_5, 0, sizeof(VAR_6));
 FUNC_5(&VAR_6, 0xff, sizeof(VAR_6));

 if (FUNC_2(VAR_3, VAR_1)) {
  struct flow_match_ipv6_addrs VAR_7;

  FUNC_1(VAR_3, &VAR_7);
  if ((FUNC_3(&VAR_7.key->src, &VAR_5, sizeof(VAR_6)) &&
       FUNC_3(&VAR_7.mask->src, &VAR_6, sizeof(VAR_6))) ||
      (FUNC_3(&VAR_7.key->dst, &VAR_5, sizeof(VAR_6)) &&
       FUNC_3(&VAR_7.mask->dst, &VAR_6, sizeof(VAR_6)))) {
   FUNC_0(VAR_2,
      "Do not support IPv6 address prefix/mask\n");
   return -VAR_0;
  }

  FUNC_4(&VAR_4->src_ipv6, &VAR_7.key->src, sizeof(VAR_6));
  FUNC_4(&VAR_4->dst_ipv6, &VAR_7.key->dst, sizeof(VAR_6));
 }

 if (FUNC_6(VAR_2, VAR_3, VAR_4))
  return -VAR_0;

 return FUNC_7(VAR_2, VAR_4, &VAR_5);
}
