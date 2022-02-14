
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct net_device {int dummy; } ;
struct fib_rule_hdr {int action; scalar_t__ family; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {int rtnl; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*,int *) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fib_rule_hdr*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 struct fib_rule_hdr* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(const struct net_device *VAR_14, __u8 VAR_15, bool VAR_16)
{
 struct fib_rule_hdr *VAR_17;
 struct nlmsghdr *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20;

 if ((VAR_15 == VAR_0 || VAR_15 == VAR_12) &&
     !FUNC_3())
  return 0;

 VAR_19 = FUNC_10(FUNC_12(), VAR_10);
 if (!VAR_19)
  return -VAR_4;

 VAR_18 = FUNC_11(VAR_19, 0, 0, 0, sizeof(*VAR_17), 0);
 if (!VAR_18)
  goto nla_put_failure;


 VAR_18->nlmsg_flags |= VAR_11;

 VAR_17 = FUNC_7(VAR_18);
 FUNC_4(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->family = VAR_15;
 VAR_17->action = VAR_9;

 if (FUNC_6(VAR_19, VAR_8, VAR_13))
  goto nla_put_failure;

 if (FUNC_6(VAR_19, VAR_6, 1))
  goto nla_put_failure;

 if (FUNC_5(VAR_19, VAR_7, VAR_5))
  goto nla_put_failure;

 FUNC_8(VAR_19, VAR_18);


 VAR_19->sk = FUNC_0(VAR_14)->rtnl;
 if (VAR_16) {
  VAR_20 = FUNC_2(VAR_19, VAR_18, ((void*)0));
  if (VAR_20 == -VAR_1)
   VAR_20 = 0;
 } else {
  VAR_20 = FUNC_1(VAR_19, VAR_18, ((void*)0));
  if (VAR_20 == -VAR_3)
   VAR_20 = 0;
 }
 FUNC_9(VAR_19);

 return VAR_20;

nla_put_failure:
 FUNC_9(VAR_19);

 return -VAR_2;
}
