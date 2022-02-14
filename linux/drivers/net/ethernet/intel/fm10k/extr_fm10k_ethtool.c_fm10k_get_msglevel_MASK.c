
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int msg_enable; } ;


 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct fm10k_intfc *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->msg_enable;
}
