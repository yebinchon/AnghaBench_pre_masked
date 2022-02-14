
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ hw_addr; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
struct atl1_adapter {TYPE_3__ hw; TYPE_2__ rrd_ring; TYPE_1__ rfd_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atl1_adapter *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;


 VAR_13 = VAR_10->rfd_ring.count;
 VAR_11 = VAR_13 / 16;
 if (VAR_11 < 2)
  VAR_11 = 2;
 VAR_12 = VAR_13 * 7 / 8;

 VAR_13 = ((VAR_11 & VAR_6) << VAR_7) |
  ((VAR_12 & VAR_8) << VAR_9);
 FUNC_0(VAR_13, VAR_10->hw.hw_addr + VAR_1);


 VAR_13 = VAR_10->rrd_ring.count;
 VAR_12 = VAR_13 / 16;
 VAR_11 = VAR_13 * 7 / 8;
 if (VAR_12 < 2)
  VAR_12 = 2;
 VAR_13 = ((VAR_11 & VAR_2) << VAR_3) |
  ((VAR_12 & VAR_4) << VAR_5);
 FUNC_0(VAR_13, VAR_10->hw.hw_addr + VAR_0);
}
