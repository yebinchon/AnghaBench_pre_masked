
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_bd {scalar_t__ flags; scalar_t__ buffer_length; scalar_t__ buffer_addr_hi; scalar_t__ buffer_addr_lo; } ;
struct TYPE_4__ {int bd_valid; struct iscsi_bd* bd_tbl; } ;
struct bnx2i_cmd {TYPE_2__ io_tbl; TYPE_1__* conn; } ;
struct TYPE_3__ {int hba; } ;


 int FUNC_0 (int ,struct bnx2i_cmd*) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_cmd *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->conn->hba, VAR_0);
 if (!VAR_1) {
  struct iscsi_bd *VAR_2 = VAR_0->io_tbl.bd_tbl;

  VAR_2[0].buffer_addr_lo = VAR_2[0].buffer_addr_hi = 0;
  VAR_2[0].buffer_length = VAR_2[0].flags = 0;
 }
 VAR_0->io_tbl.bd_valid = VAR_1;
}
