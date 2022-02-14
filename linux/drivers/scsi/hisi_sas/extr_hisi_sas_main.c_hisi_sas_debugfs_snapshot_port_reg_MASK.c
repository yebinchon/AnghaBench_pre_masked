
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hisi_sas_debugfs_reg {int count; scalar_t__ (* read_port_reg ) (struct hisi_hba*,int,scalar_t__) ;scalar_t__ base_off; } ;
struct hisi_hba {int n_phy; scalar_t__* debugfs_port_reg; TYPE_1__* hw; } ;
struct TYPE_2__ {struct hisi_sas_debugfs_reg* debugfs_reg_port; } ;


 scalar_t__ FUNC_0 (struct hisi_hba*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_0)
{
 const struct hisi_sas_debugfs_reg *VAR_1 =
  VAR_0->hw->debugfs_reg_port;
 int VAR_2, VAR_3;
 u32 VAR_4;
 u32 *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_phy; VAR_3++) {
  VAR_5 = (u32 *)VAR_0->debugfs_port_reg[VAR_3];
  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++, VAR_5++) {
   VAR_4 = VAR_1->base_off + 4 * VAR_2;
   *VAR_5 = VAR_1->read_port_reg(VAR_0, VAR_3,
             VAR_4);
  }
 }
}
