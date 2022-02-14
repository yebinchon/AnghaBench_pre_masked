
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct viosrp_crq {int dummy; } ;
struct vio_dev {int dev; } ;
struct TYPE_2__ {int size; int mask; struct viosrp_crq* base_addr; int crq_token; } ;
struct scsi_info {TYPE_1__ cmd_q; struct vio_dev* dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct viosrp_crq*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static long FUNC_4(struct scsi_info *VAR_5, int VAR_6)
{
 int VAR_7;
 struct vio_dev *VAR_8 = VAR_5->dma_dev;


 VAR_7 = 1;

 VAR_5->cmd_q.size = VAR_7;

 VAR_5->cmd_q.base_addr =
  (struct viosrp_crq *)FUNC_3(VAR_3);
 if (!VAR_5->cmd_q.base_addr)
  return -VAR_2;

 VAR_5->cmd_q.mask = ((uint)VAR_7 * VAR_0) - 1;

 VAR_5->cmd_q.crq_token = FUNC_0(&VAR_8->dev,
      VAR_5->cmd_q.base_addr,
      VAR_4, VAR_1);
 if (FUNC_1(&VAR_8->dev, VAR_5->cmd_q.crq_token)) {
  FUNC_2((unsigned long)VAR_5->cmd_q.base_addr);
  return -VAR_2;
 }

 return 0;
}
