
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int eth_proto; int ip_proto; } ;
struct flow_rule {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;

__attribute__((used)) static int
FUNC_2(struct qede_dev *VAR_2, struct flow_rule *VAR_3,
       struct qede_arfs_tuple *VAR_4)
{
 VAR_4->ip_proto = VAR_1;
 VAR_4->eth_proto = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
