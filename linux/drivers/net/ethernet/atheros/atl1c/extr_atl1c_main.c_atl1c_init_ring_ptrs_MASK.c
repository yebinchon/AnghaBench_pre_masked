
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_tpd_ring {int count; struct atl1c_buffer* buffer_info; int next_to_clean; scalar_t__ next_to_use; } ;
struct atl1c_rrd_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct atl1c_rfd_ring {int count; struct atl1c_buffer* buffer_info; scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {struct atl1c_rrd_ring rrd_ring; struct atl1c_rfd_ring rfd_ring; struct atl1c_tpd_ring* tpd_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_buffer*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct atl1c_adapter *VAR_2)
{
 struct atl1c_tpd_ring *VAR_3 = VAR_2->tpd_ring;
 struct atl1c_rfd_ring *VAR_4 = &VAR_2->rfd_ring;
 struct atl1c_rrd_ring *VAR_5 = &VAR_2->rrd_ring;
 struct atl1c_buffer *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_3[VAR_7].next_to_use = 0;
  FUNC_1(&VAR_3[VAR_7].next_to_clean, 0);
  VAR_6 = VAR_3[VAR_7].buffer_info;
  for (VAR_8 = 0; VAR_8 < VAR_3->count; VAR_8++)
   FUNC_0(&VAR_6[VAR_7],
     VAR_0);
 }
 VAR_4->next_to_use = 0;
 VAR_4->next_to_clean = 0;
 VAR_5->next_to_use = 0;
 VAR_5->next_to_clean = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_6 = &VAR_4->buffer_info[VAR_8];
  FUNC_0(VAR_6, VAR_0);
 }
}
