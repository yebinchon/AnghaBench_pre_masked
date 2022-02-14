
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {scalar_t__ dst_ipv4; scalar_t__ src_ipv4; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ipv4_addrs {TYPE_2__* key; TYPE_1__* mask; } ;
struct TYPE_4__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_3__ {scalar_t__ src; scalar_t__ dst; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 scalar_t__ FUNC_2 (struct flow_rule*,int ) ;
 scalar_t__ FUNC_3 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;
 int FUNC_4 (struct qede_dev*,struct qede_arfs_tuple*) ;

__attribute__((used)) static int
FUNC_5(struct qede_dev *VAR_3, struct flow_rule *VAR_4,
   struct qede_arfs_tuple *VAR_5)
{
 if (FUNC_2(VAR_4, VAR_1)) {
  struct flow_match_ipv4_addrs VAR_6;

  FUNC_1(VAR_4, &VAR_6);
  if ((VAR_6.key->src && VAR_6.mask->src != VAR_2) ||
      (VAR_6.key->dst && VAR_6.mask->dst != VAR_2)) {
   FUNC_0(VAR_3, "Do not support ipv4 prefix/masks\n");
   return -VAR_0;
  }

  VAR_5->src_ipv4 = VAR_6.key->src;
  VAR_5->dst_ipv4 = VAR_6.key->dst;
 }

 if (FUNC_3(VAR_3, VAR_4, VAR_5))
  return -VAR_0;

 return FUNC_4(VAR_3, VAR_5);
}
