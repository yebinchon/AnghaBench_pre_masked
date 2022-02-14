
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_info {int hotplug_work; struct vop_device* vpdev; } ;
struct vop_device {TYPE_1__* hw_ops; } ;
struct seq_file {struct vop_info* private; } ;
struct mic_vqconfig {int address; int num; int used_address; } ;
struct mic_device_desc {int type; int num_vq; int feature_len; int config_len; int status; } ;
struct mic_device_ctrl {int config_change; int vdev_reset; int guest_ack; int host_ack; int used_address_updated; int vdev; int c2h_vdev_db; int h2c_vdev_db; } ;
struct mic_bootparam {int magic; int h2c_config_db; int node_id; int c2h_scif_db; int h2c_scif_db; int scif_host_dma_addr; int scif_card_dma_addr; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_2__ {struct mic_bootparam* (* get_dp ) (struct vop_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mic_device_desc*) ;
 scalar_t__ FUNC_1 (struct mic_device_desc*) ;
 struct mic_vqconfig* FUNC_2 (struct mic_device_desc*) ;
 int * FUNC_3 (struct mic_device_desc*) ;
 scalar_t__ FUNC_4 (struct mic_device_desc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct seq_file*,char*,int,...) ;
 int FUNC_7 (struct seq_file*,char*) ;
 struct mic_bootparam* FUNC_8 (struct vop_device*) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_1, void *VAR_2)
{
 struct mic_device_desc *VAR_3;
 struct mic_device_ctrl *VAR_4;
 struct mic_vqconfig *VAR_5;
 __u32 *VAR_6;
 __u8 *VAR_7;
 struct vop_info *VAR_8 = VAR_1->private;
 struct vop_device *VAR_9 = VAR_8->vpdev;
 struct mic_bootparam *VAR_10 = VAR_9->hw_ops->get_dp(VAR_9);
 int VAR_11, VAR_12;

 FUNC_6(VAR_1, "Bootparam: magic 0x%x\n",
     VAR_10->magic);
 FUNC_6(VAR_1, "Bootparam: h2c_config_db %d\n",
     VAR_10->h2c_config_db);
 FUNC_6(VAR_1, "Bootparam: node_id %d\n",
     VAR_10->node_id);
 FUNC_6(VAR_1, "Bootparam: c2h_scif_db %d\n",
     VAR_10->c2h_scif_db);
 FUNC_6(VAR_1, "Bootparam: h2c_scif_db %d\n",
     VAR_10->h2c_scif_db);
 FUNC_6(VAR_1, "Bootparam: scif_host_dma_addr 0x%llx\n",
     VAR_10->scif_host_dma_addr);
 FUNC_6(VAR_1, "Bootparam: scif_card_dma_addr 0x%llx\n",
     VAR_10->scif_card_dma_addr);

 for (VAR_11 = sizeof(*VAR_10);
  VAR_11 < VAR_0; VAR_11 += FUNC_1(VAR_3)) {
  VAR_3 = (void *)VAR_10 + VAR_11;
  VAR_4 = (void *)VAR_3 + FUNC_0(VAR_3);


  if (VAR_3->type == 0)
   break;

  if (VAR_3->type == -1)
   continue;

  FUNC_6(VAR_1, "Type %d ", VAR_3->type);
  FUNC_6(VAR_1, "Num VQ %d ", VAR_3->num_vq);
  FUNC_6(VAR_1, "Feature Len %d\n", VAR_3->feature_len);
  FUNC_6(VAR_1, "Config Len %d ", VAR_3->config_len);
  FUNC_6(VAR_1, "Shutdown Status %d\n", VAR_3->status);

  for (VAR_12 = 0; VAR_12 < VAR_3->num_vq; VAR_12++) {
   VAR_5 = FUNC_2(VAR_3) + VAR_12;
   FUNC_6(VAR_1, "vqconfig[%d]: ", VAR_12);
   FUNC_6(VAR_1, "address 0x%llx ",
       VAR_5->address);
   FUNC_6(VAR_1, "num %d ", VAR_5->num);
   FUNC_6(VAR_1, "used address 0x%llx\n",
       VAR_5->used_address);
  }

  VAR_6 = (__u32 *)FUNC_4(VAR_3);
  FUNC_6(VAR_1, "Features: Host 0x%x ", VAR_6[0]);
  FUNC_6(VAR_1, "Guest 0x%x\n", VAR_6[1]);

  VAR_7 = FUNC_3(VAR_3);
  for (VAR_12 = 0; VAR_12 < VAR_3->config_len; VAR_12++)
   FUNC_6(VAR_1, "config[%d]=%d\n", VAR_12, VAR_7[VAR_12]);

  FUNC_7(VAR_1, "Device control:\n");
  FUNC_6(VAR_1, "Config Change %d ", VAR_4->config_change);
  FUNC_6(VAR_1, "Vdev reset %d\n", VAR_4->vdev_reset);
  FUNC_6(VAR_1, "Guest Ack %d ", VAR_4->guest_ack);
  FUNC_6(VAR_1, "Host ack %d\n", VAR_4->host_ack);
  FUNC_6(VAR_1, "Used address updated %d ",
      VAR_4->used_address_updated);
  FUNC_6(VAR_1, "Vdev 0x%llx\n", VAR_4->vdev);
  FUNC_6(VAR_1, "c2h doorbell %d ", VAR_4->c2h_vdev_db);
  FUNC_6(VAR_1, "h2c doorbell %d\n", VAR_4->h2c_vdev_db);
 }
 FUNC_5(&VAR_8->hotplug_work);
 return 0;
}
