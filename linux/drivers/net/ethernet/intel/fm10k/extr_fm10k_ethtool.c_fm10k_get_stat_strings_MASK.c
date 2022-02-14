
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; unsigned int max_queues; } ;
struct TYPE_3__ {TYPE_2__ mac; } ;
struct fm10k_intfc {TYPE_1__ hw; } ;


 int FUNC_0 (int **,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6, u8 *VAR_7)
{
 struct fm10k_intfc *VAR_8 = FUNC_1(VAR_6);
 unsigned int VAR_9;

 FUNC_0(&VAR_7, VAR_2);

 FUNC_0(&VAR_7, VAR_0);

 FUNC_0(&VAR_7, VAR_1);

 if (VAR_8->hw.mac.type != VAR_5)
  FUNC_0(&VAR_7, VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_8->hw.mac.max_queues; VAR_9++) {
  FUNC_0(&VAR_7, VAR_4,
           "tx", VAR_9);

  FUNC_0(&VAR_7, VAR_4,
           "rx", VAR_9);
 }
}
