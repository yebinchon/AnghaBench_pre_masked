
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int enabled_tc; TYPE_2__* tc_info; } ;
struct i40e_vsi {int num_queue_pairs; struct i40e_ring** tx_rings; struct i40e_ring** rx_rings; TYPE_3__ tc_config; TYPE_1__* back; } ;
struct i40e_ring {int dcb_tc; } ;
struct TYPE_5__ {int qoffset; int qcount; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_2)
{
 struct i40e_ring *VAR_3, *VAR_4;
 u16 VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (!(VAR_2->back->flags & VAR_0)) {

  for (VAR_7 = 0; VAR_7 < VAR_2->num_queue_pairs; VAR_7++) {
   VAR_4 = VAR_2->rx_rings[VAR_7];
   VAR_3 = VAR_2->tx_rings[VAR_7];
   VAR_4->dcb_tc = 0;
   VAR_3->dcb_tc = 0;
  }
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (!(VAR_2->tc_config.enabled_tc & FUNC_0(VAR_8)))
   continue;

  VAR_5 = VAR_2->tc_config.tc_info[VAR_8].qoffset;
  VAR_6 = VAR_2->tc_config.tc_info[VAR_8].qcount;
  for (VAR_7 = VAR_5; VAR_7 < (VAR_5 + VAR_6); VAR_7++) {
   VAR_4 = VAR_2->rx_rings[VAR_7];
   VAR_3 = VAR_2->tx_rings[VAR_7];
   VAR_4->dcb_tc = VAR_8;
   VAR_3->dcb_tc = VAR_8;
  }
 }
}
