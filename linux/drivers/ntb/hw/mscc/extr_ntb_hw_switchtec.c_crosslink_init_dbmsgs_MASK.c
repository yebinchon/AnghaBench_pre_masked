
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_ntb {int self_partition; int db_valid_mask; int db_peer_shift; TYPE_1__* mmio_peer_dbmsg; } ;
struct TYPE_2__ {int odb_mask; int msg_map; int imsg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct switchtec_ntb*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct switchtec_ntb *VAR_0)
{
 int VAR_1;
 u32 VAR_2 = 0;

 if (!FUNC_1(VAR_0))
  return;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->mmio_peer_dbmsg->imsg); VAR_1++) {
  int VAR_3 = VAR_1 | VAR_0->self_partition << 2;

  VAR_2 |= VAR_3 << VAR_1 * 8;
 }

 FUNC_2(VAR_2, &VAR_0->mmio_peer_dbmsg->msg_map);
 FUNC_3(VAR_0->db_valid_mask << VAR_0->db_peer_shift,
    &VAR_0->mmio_peer_dbmsg->odb_mask);
}
