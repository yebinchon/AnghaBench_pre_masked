
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1_tpd_ring {int next_to_clean; int next_to_use; } ;
struct atl1_rrd_ring {int next_to_clean; scalar_t__ next_to_use; } ;
struct atl1_rfd_ring {int next_to_use; scalar_t__ next_to_clean; } ;
struct atl1_adapter {struct atl1_rrd_ring rrd_ring; struct atl1_rfd_ring rfd_ring; struct atl1_tpd_ring tpd_ring; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct atl1_adapter *VAR_0)
{
 struct atl1_tpd_ring *VAR_1 = &VAR_0->tpd_ring;
 struct atl1_rfd_ring *VAR_2 = &VAR_0->rfd_ring;
 struct atl1_rrd_ring *VAR_3 = &VAR_0->rrd_ring;

 FUNC_0(&VAR_1->next_to_use, 0);
 FUNC_0(&VAR_1->next_to_clean, 0);

 VAR_2->next_to_clean = 0;
 FUNC_0(&VAR_2->next_to_use, 0);

 VAR_3->next_to_use = 0;
 FUNC_0(&VAR_3->next_to_clean, 0);
}
