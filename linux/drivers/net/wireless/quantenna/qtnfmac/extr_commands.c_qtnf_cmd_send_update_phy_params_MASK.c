
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int retry_short; int retry_long; int coverage_class; int rts_threshold; int frag_threshold; } ;
struct sk_buff {int dummy; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qlink_cmd {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 struct wiphy* FUNC_0 (struct qtnf_wmac*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;

int FUNC_7(struct qtnf_wmac *VAR_12, u32 VAR_13)
{
 struct wiphy *VAR_14 = FUNC_0(VAR_12);
 struct sk_buff *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_3(VAR_12->macid, 0,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_15)
  return -VAR_0;

 FUNC_1(VAR_12->bus);

 if (VAR_13 & VAR_8)
  FUNC_5(VAR_15, VAR_3,
      VAR_14->frag_threshold);
 if (VAR_13 & VAR_11)
  FUNC_5(VAR_15, VAR_5,
      VAR_14->rts_threshold);
 if (VAR_13 & VAR_7)
  FUNC_6(VAR_15, VAR_2,
     VAR_14->coverage_class);

 if (VAR_13 & VAR_9)
  FUNC_6(VAR_15, VAR_4,
     VAR_14->retry_long);

 if (VAR_13 & VAR_10)
  FUNC_6(VAR_15, VAR_6,
     VAR_14->retry_short);

 VAR_16 = FUNC_4(VAR_12->bus, VAR_15);
 if (VAR_16)
  goto out;

out:
 FUNC_2(VAR_12->bus);

 return VAR_16;
}
