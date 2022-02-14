
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct octeon_mgmt {int lock; scalar_t__ agl; } ;
struct TYPE_2__ {int rx_dropped; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct octeon_mgmt* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct octeon_mgmt *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;
 u64 VAR_5, VAR_6;


 VAR_5 = FUNC_0(VAR_3->agl + VAR_1);
 VAR_6 = FUNC_0(VAR_3->agl + VAR_0);

 if (VAR_5 || VAR_6) {

  FUNC_2(&VAR_3->lock, VAR_4);
  VAR_2->stats.rx_errors += VAR_6;
  VAR_2->stats.rx_dropped += VAR_5;
  FUNC_3(&VAR_3->lock, VAR_4);
 }
}
