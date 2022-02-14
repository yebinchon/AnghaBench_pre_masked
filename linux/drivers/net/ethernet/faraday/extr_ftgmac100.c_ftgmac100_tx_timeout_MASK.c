
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftgmac100 {int reset_task; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct ftgmac100* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct ftgmac100 *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(0, VAR_2->base + VAR_0);


 FUNC_2(&VAR_2->reset_task);
}
