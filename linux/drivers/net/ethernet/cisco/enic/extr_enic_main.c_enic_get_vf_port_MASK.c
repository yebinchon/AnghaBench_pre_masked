
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct enic_port_profile {int set; int host_uuid; int instance_uuid; int name; int request; } ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enic*,int,struct enic_port_profile*,int*) ;
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
 int FUNC_1 (struct enic*,int,int ,int *) ;
 struct enic* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_14, int VAR_15,
 struct sk_buff *VAR_16)
{
 struct enic *VAR_17 = FUNC_2(VAR_14);
 u16 VAR_18 = VAR_12;
 struct enic_port_profile *VAR_19;
 int VAR_20;

 FUNC_0(VAR_17, VAR_15, VAR_19, &VAR_20);
 if (VAR_20)
  return VAR_20;

 if (!(VAR_19->set & VAR_1))
  return -VAR_5;

 VAR_20 = FUNC_1(VAR_17, VAR_15, VAR_19->request, &VAR_18);
 if (VAR_20)
  return VAR_20;

 if (FUNC_4(VAR_16, VAR_9, VAR_19->request) ||
     FUNC_4(VAR_16, VAR_10, VAR_18) ||
     ((VAR_19->set & VAR_4) &&
      FUNC_3(VAR_16, VAR_8, VAR_11, VAR_19->name)) ||
     ((VAR_19->set & VAR_3) &&
      FUNC_3(VAR_16, VAR_7, VAR_13,
       VAR_19->instance_uuid)) ||
     ((VAR_19->set & VAR_2) &&
      FUNC_3(VAR_16, VAR_6, VAR_13, VAR_19->host_uuid)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -VAR_0;
}
