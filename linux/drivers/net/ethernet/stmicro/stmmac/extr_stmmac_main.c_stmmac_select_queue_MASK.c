
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int real_num_tx_queues; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct sk_buff*,int *) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_2(struct net_device *VAR_2, struct sk_buff *VAR_3,
          struct net_device *VAR_4)
{
 if (FUNC_1(VAR_3)->gso_type & (VAR_0 | VAR_1)) {






  return 0;
 }

 return FUNC_0(VAR_2, VAR_3, ((void*)0)) % VAR_2->real_num_tx_queues;
}
