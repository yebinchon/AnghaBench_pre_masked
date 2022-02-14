
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {size_t priority; } ;
struct net_device {int dummy; } ;


 size_t FUNC_0 (struct sk_buff*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static u16
FUNC_1(struct net_device *VAR_1, struct sk_buff *VAR_2,
    struct net_device *VAR_3)
{
 VAR_2->priority = FUNC_0(VAR_2, ((void*)0));
 return VAR_0[VAR_2->priority];
}
