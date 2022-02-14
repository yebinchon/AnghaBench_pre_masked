
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rx_ring_info {int dummy; } ;
struct niu {int num_rx_rings; struct rx_ring_info* rx_rings; TYPE_1__* parent; } ;
struct TYPE_2__ {int rxdma_clock_divider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,struct rx_ring_info*) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*,unsigned long) ;
 int FUNC_5 (struct niu*,unsigned long) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct niu *VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7 = VAR_4;
 int VAR_8, VAR_9;

 FUNC_4(VAR_5, VAR_6);
 FUNC_6(VAR_3, VAR_5->parent->rxdma_clock_divider);
 FUNC_6(VAR_0, VAR_1 | (VAR_7 & VAR_2));
 FUNC_5(VAR_5, VAR_6);



 FUNC_3(VAR_5);
 FUNC_0(VAR_5);

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_rx_rings; VAR_9++) {
  struct rx_ring_info *VAR_10 = &VAR_5->rx_rings[VAR_9];

  VAR_8 = FUNC_2(VAR_5, VAR_10);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
