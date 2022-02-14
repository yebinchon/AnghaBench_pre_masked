
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct atl1c_tpd_ring {size_t next_to_use; size_t count; struct atl1c_buffer* buffer_info; scalar_t__ desc; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {int pdev; struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;


 struct atl1c_tpd_desc* FUNC_0 (struct atl1c_tpd_ring*,size_t) ;
 int FUNC_1 (int ,struct atl1c_buffer*) ;
 int FUNC_2 (struct atl1c_tpd_desc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct atl1c_adapter *VAR_0,
         struct atl1c_tpd_desc *VAR_1,
         enum atl1c_trans_queue VAR_2)
{
 struct atl1c_tpd_ring *VAR_3 = &VAR_0->tpd_ring[VAR_2];
 struct atl1c_buffer *VAR_4;
 struct atl1c_tpd_desc *VAR_5;
 u16 VAR_6, VAR_7;

 VAR_6 = VAR_1 - (struct atl1c_tpd_desc *)VAR_3->desc;
 VAR_7 = VAR_6;
 while (VAR_7 != VAR_3->next_to_use) {
  VAR_5 = FUNC_0(VAR_3, VAR_7);
  VAR_4 = &VAR_3->buffer_info[VAR_7];
  FUNC_1(VAR_0->pdev, VAR_4);
  FUNC_2(VAR_5, 0, sizeof(struct atl1c_tpd_desc));
  if (++VAR_7 == VAR_3->count)
   VAR_7 = 0;
 }
 VAR_3->next_to_use = VAR_6;
}
