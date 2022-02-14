
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned int max_queues; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct fm10k_intfc {TYPE_2__ hw; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct net_device*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static unsigned int FUNC_4(struct net_device *VAR_0)
{
 struct fm10k_intfc *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2 = VAR_1->hw.mac.max_queues;
 u8 VAR_3 = FUNC_2(VAR_0);


 if (VAR_3 > 1)
  VAR_2 = FUNC_0((FUNC_1(VAR_2 / VAR_3) - 1));

 return VAR_2;
}
