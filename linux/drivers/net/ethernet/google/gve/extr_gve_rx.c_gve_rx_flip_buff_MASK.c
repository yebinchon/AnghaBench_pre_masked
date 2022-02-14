
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gve_rx_slot_page_info {int page_offset; } ;
struct gve_rx_data_slot {int qpl_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct gve_rx_slot_page_info *VAR_1,
        struct gve_rx_data_slot *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_2->qpl_offset);

 VAR_1->page_offset ^= VAR_0 / 2;
 VAR_3 ^= VAR_0 / 2;
 VAR_2->qpl_offset = FUNC_1(VAR_3);
}
