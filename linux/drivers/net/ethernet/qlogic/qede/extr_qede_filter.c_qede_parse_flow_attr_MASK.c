
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int dummy; } ;
struct TYPE_3__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_basic {TYPE_2__* key; } ;
struct flow_dissector {int used_keys; } ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ ip_proto; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qede_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct flow_rule*,struct flow_match_basic*) ;
 scalar_t__ FUNC_3 (struct flow_rule*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qede_arfs_tuple*,int ,int) ;
 int FUNC_6 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;
 int FUNC_7 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;
 int FUNC_8 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;
 int FUNC_9 (struct qede_dev*,struct flow_rule*,struct qede_arfs_tuple*) ;

__attribute__((used)) static int
FUNC_10(struct qede_dev *VAR_12, __be16 VAR_13,
       struct flow_rule *VAR_14, struct qede_arfs_tuple *VAR_15)
{
 struct flow_dissector *VAR_16 = VAR_14->match.dissector;
 int VAR_17 = -VAR_0;
 u8 VAR_18 = 0;

 FUNC_5(VAR_15, 0, sizeof(*VAR_15));

 if (VAR_16->used_keys &
     ~(FUNC_0(VAR_6) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_5) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_9))) {
  FUNC_1(VAR_12, "Unsupported key set:0x%x\n",
     VAR_16->used_keys);
  return -VAR_1;
 }

 if (VAR_13 != FUNC_4(VAR_3) &&
     VAR_13 != FUNC_4(VAR_4)) {
  FUNC_1(VAR_12, "Unsupported proto=0x%x\n", VAR_13);
  return -VAR_2;
 }

 if (FUNC_3(VAR_14, VAR_5)) {
  struct flow_match_basic VAR_19;

  FUNC_2(VAR_14, &VAR_19);
  VAR_18 = VAR_19.key->ip_proto;
 }

 if (VAR_18 == VAR_10 && VAR_13 == FUNC_4(VAR_3))
  VAR_17 = FUNC_6(VAR_12, VAR_14, VAR_15);
 else if (VAR_18 == VAR_10 && VAR_13 == FUNC_4(VAR_4))
  VAR_17 = FUNC_7(VAR_12, VAR_14, VAR_15);
 else if (VAR_18 == VAR_11 && VAR_13 == FUNC_4(VAR_3))
  VAR_17 = FUNC_8(VAR_12, VAR_14, VAR_15);
 else if (VAR_18 == VAR_11 && VAR_13 == FUNC_4(VAR_4))
  VAR_17 = FUNC_9(VAR_12, VAR_14, VAR_15);
 else
  FUNC_1(VAR_12, "Invalid protocol request\n");

 return VAR_17;
}
