
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int msg_enable; } ;


 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_0(VAR_0);

 VAR_2->msg_enable = VAR_1;
}
