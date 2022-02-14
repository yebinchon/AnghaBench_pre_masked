
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tx_desc {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t
FUNC_2(struct sk_buff *VAR_6, struct net_device *VAR_7,
         netdev_features_t VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6)->gso_size;
 int VAR_10 = VAR_9 ? VAR_1 : VAR_4;
 int VAR_11 = FUNC_1(VAR_6);

 if ((VAR_9 || VAR_6->ip_summed == VAR_0) && VAR_11 > VAR_10)
  VAR_8 &= ~(VAR_2 | VAR_3);
 else if ((VAR_6->len + sizeof(struct tx_desc)) > VAR_5)
  VAR_8 &= ~VAR_3;

 return VAR_8;
}
