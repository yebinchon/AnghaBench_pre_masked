
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring_info {int rbr_blocks_per_page; int rbr_index; int rbr_table_size; } ;
struct niu {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct niu*,struct rx_ring_info*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_0, struct rx_ring_info *VAR_1, gfp_t VAR_2)
{
 int VAR_3 = VAR_1->rbr_blocks_per_page;
 int VAR_4, VAR_5 = VAR_1->rbr_index;

 VAR_4 = 0;
 while (VAR_5 < (VAR_1->rbr_table_size - VAR_3)) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
  if (FUNC_1(VAR_4))
   break;

  VAR_5 += VAR_3;
 }

 VAR_1->rbr_index = VAR_5;
 return VAR_4;
}
