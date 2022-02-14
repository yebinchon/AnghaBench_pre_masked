
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; int numdisabled; int numqueues; int group; int owner; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct tun_struct* FUNC_4 (struct net_device const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_15, const struct net_device *VAR_16)
{
 struct tun_struct *VAR_17 = FUNC_4(VAR_16);

 if (FUNC_6(VAR_15, VAR_12, VAR_17->flags & VAR_14))
  goto nla_put_failure;
 if (FUNC_7(VAR_17->owner) &&
     FUNC_5(VAR_15, VAR_9,
   FUNC_2(FUNC_0(), VAR_17->owner)))
  goto nla_put_failure;
 if (FUNC_3(VAR_17->group) &&
     FUNC_5(VAR_15, VAR_5,
   FUNC_1(FUNC_0(), VAR_17->group)))
  goto nla_put_failure;
 if (FUNC_6(VAR_15, VAR_11, !(VAR_17->flags & VAR_2)))
  goto nla_put_failure;
 if (FUNC_6(VAR_15, VAR_13, !!(VAR_17->flags & VAR_4)))
  goto nla_put_failure;
 if (FUNC_6(VAR_15, VAR_10, !!(VAR_17->flags & VAR_3)))
  goto nla_put_failure;
 if (FUNC_6(VAR_15, VAR_6,
         !!(VAR_17->flags & VAR_1)))
  goto nla_put_failure;
 if (VAR_17->flags & VAR_1) {
  if (FUNC_5(VAR_15, VAR_8, VAR_17->numqueues))
   goto nla_put_failure;
  if (FUNC_5(VAR_15, VAR_7,
    VAR_17->numdisabled))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_0;
}
