
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {void* peer_nr_lut_mw; void* peer_nr_direct_mw; TYPE_1__* stdev; TYPE_2__* mmio_peer_ctrl; int peer_direct_mw_to_bar; void* nr_lut_mw; void* nr_direct_mw; TYPE_2__* mmio_self_ctrl; int direct_mw_to_bar; } ;
struct TYPE_4__ {int lut_table_entries; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,void*,void*) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int ,TYPE_2__*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct switchtec_ntb *VAR_0)
{
 VAR_0->nr_direct_mw = FUNC_2(VAR_0->direct_mw_to_bar,
           VAR_0->mmio_self_ctrl);

 VAR_0->nr_lut_mw = FUNC_1(&VAR_0->mmio_self_ctrl->lut_table_entries);
 VAR_0->nr_lut_mw = FUNC_3(VAR_0->nr_lut_mw);

 FUNC_0(&VAR_0->stdev->dev, "MWs: %d direct, %d lut\n",
  VAR_0->nr_direct_mw, VAR_0->nr_lut_mw);

 VAR_0->peer_nr_direct_mw = FUNC_2(VAR_0->peer_direct_mw_to_bar,
         VAR_0->mmio_peer_ctrl);

 VAR_0->peer_nr_lut_mw =
  FUNC_1(&VAR_0->mmio_peer_ctrl->lut_table_entries);
 VAR_0->peer_nr_lut_mw = FUNC_3(VAR_0->peer_nr_lut_mw);

 FUNC_0(&VAR_0->stdev->dev, "Peer MWs: %d direct, %d lut\n",
  VAR_0->peer_nr_direct_mw, VAR_0->peer_nr_lut_mw);

}
