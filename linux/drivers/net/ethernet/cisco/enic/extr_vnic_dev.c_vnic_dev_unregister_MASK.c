
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_stats {int dummy; } ;
struct vnic_devcmd_notify {int dummy; } ;
struct vnic_devcmd_fw_info {int dummy; } ;
struct vnic_dev {scalar_t__ devcmd2; int fw_info_pa; scalar_t__ fw_info; int pdev; int stats_pa; scalar_t__ stats; int notify_pa; scalar_t__ notify; } ;


 int FUNC_0 (struct vnic_dev*) ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 (struct vnic_dev*) ;

void FUNC_3(struct vnic_dev *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->notify)
   FUNC_1(VAR_0->pdev,
    sizeof(struct vnic_devcmd_notify),
    VAR_0->notify,
    VAR_0->notify_pa);
  if (VAR_0->stats)
   FUNC_1(VAR_0->pdev,
    sizeof(struct vnic_stats),
    VAR_0->stats, VAR_0->stats_pa);
  if (VAR_0->fw_info)
   FUNC_1(VAR_0->pdev,
    sizeof(struct vnic_devcmd_fw_info),
    VAR_0->fw_info, VAR_0->fw_info_pa);
  if (VAR_0->devcmd2)
   FUNC_2(VAR_0);

  FUNC_0(VAR_0);
 }
}
