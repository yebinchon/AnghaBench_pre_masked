
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int queue_count; int n_phy; int * debugfs_port_reg; int * debugfs_regs; int * debugfs_complete_hdr; int * debugfs_cmd_hdr; int debugfs_iost; int debugfs_itct_cache; int debugfs_iost_cache; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 FUNC_0(VAR_2, VAR_1->debugfs_iost_cache);
 FUNC_0(VAR_2, VAR_1->debugfs_itct_cache);
 FUNC_0(VAR_2, VAR_1->debugfs_iost);

 for (VAR_3 = 0; VAR_3 < VAR_1->queue_count; VAR_3++)
  FUNC_0(VAR_2, VAR_1->debugfs_cmd_hdr[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_1->queue_count; VAR_3++)
  FUNC_0(VAR_2, VAR_1->debugfs_complete_hdr[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_1->debugfs_regs[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_1->n_phy; VAR_3++)
  FUNC_0(VAR_2, VAR_1->debugfs_port_reg[VAR_3]);
}
