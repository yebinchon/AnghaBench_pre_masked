
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {int db_mask; int db_shift; int db_peer_shift; int db_valid_mask; scalar_t__ self_partition; scalar_t__ peer_partition; TYPE_2__* stdev; TYPE_1__* mmio_peer_dbmsg; TYPE_1__* mmio_self_dbmsg; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int odb_mask; int idb_mask; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct switchtec_ntb *VAR_0)
{
 VAR_0->db_mask = 0x0FFFFFFFFFFFFFFFULL;

 if (VAR_0->mmio_peer_dbmsg != VAR_0->mmio_self_dbmsg) {
  VAR_0->db_shift = 0;
  VAR_0->db_peer_shift = 0;
  VAR_0->db_valid_mask = VAR_0->db_mask;
 } else if (VAR_0->self_partition < VAR_0->peer_partition) {
  VAR_0->db_shift = 0;
  VAR_0->db_peer_shift = 32;
  VAR_0->db_valid_mask = 0x0FFFFFFF;
 } else {
  VAR_0->db_shift = 32;
  VAR_0->db_peer_shift = 0;
  VAR_0->db_valid_mask = 0x0FFFFFFF;
 }

 FUNC_1(~VAR_0->db_mask, &VAR_0->mmio_self_dbmsg->idb_mask);
 FUNC_1(VAR_0->db_valid_mask << VAR_0->db_peer_shift,
    &VAR_0->mmio_peer_dbmsg->odb_mask);

 FUNC_0(&VAR_0->stdev->dev, "dbs: shift %d/%d, mask %016llx\n",
  VAR_0->db_shift, VAR_0->db_peer_shift, VAR_0->db_valid_mask);
}
