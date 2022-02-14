
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring_info {int rbr_index; int rbr_pending; int rbr_blocks_per_page; int rbr_table_size; int rbr_kick_thresh; int rx_channel; } ;
struct niu {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct niu*,struct rx_ring_info*,int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_0, struct rx_ring_info *VAR_1, gfp_t VAR_2)
{
 int VAR_3 = VAR_1->rbr_index;

 VAR_1->rbr_pending++;
 if ((VAR_1->rbr_pending % VAR_1->rbr_blocks_per_page) == 0) {
  int VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

  if (FUNC_4(VAR_4)) {
   VAR_1->rbr_pending--;
   return;
  }

  VAR_1->rbr_index += VAR_1->rbr_blocks_per_page;
  FUNC_0(VAR_1->rbr_index > VAR_1->rbr_table_size);
  if (VAR_1->rbr_index == VAR_1->rbr_table_size)
   VAR_1->rbr_index = 0;

  if (VAR_1->rbr_pending >= VAR_1->rbr_kick_thresh) {
   FUNC_3(FUNC_1(VAR_1->rx_channel), VAR_1->rbr_pending);
   VAR_1->rbr_pending = 0;
  }
 }
}
