
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ hw_addr; } ;
struct TYPE_7__ {int next_to_clean; } ;
struct TYPE_6__ {int next_to_use; } ;
struct TYPE_5__ {int next_to_use; } ;
struct atl1_adapter {int mb_lock; TYPE_4__ hw; TYPE_3__ rrd_ring; TYPE_2__ rfd_ring; TYPE_1__ tpd_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct atl1_adapter *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_2(&VAR_7->mb_lock, VAR_8);

 VAR_9 = FUNC_0(&VAR_7->tpd_ring.next_to_use);
 VAR_10 = FUNC_0(&VAR_7->rfd_ring.next_to_use);
 VAR_11 = FUNC_0(&VAR_7->rrd_ring.next_to_clean);

 VAR_12 = ((VAR_10 & VAR_0) <<
  VAR_1) |
  ((VAR_11 & VAR_2) <<
  VAR_3) |
  ((VAR_9 & VAR_4) <<
  VAR_5);
 FUNC_1(VAR_12, VAR_7->hw.hw_addr + VAR_6);

 FUNC_3(&VAR_7->mb_lock, VAR_8);
}
