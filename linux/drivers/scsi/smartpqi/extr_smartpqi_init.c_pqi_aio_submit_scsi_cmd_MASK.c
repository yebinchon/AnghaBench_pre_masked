
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; int cmnd; } ;
struct pqi_scsi_dev {int aio_handle; } ;
struct pqi_queue_group {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;


 int FUNC_0 (struct pqi_ctrl_info*,struct scsi_cmnd*,int ,int ,int ,struct pqi_queue_group*,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct pqi_ctrl_info *VAR_0,
 struct pqi_scsi_dev *VAR_1, struct scsi_cmnd *VAR_2,
 struct pqi_queue_group *VAR_3)
{
 return FUNC_0(VAR_0, VAR_2, VAR_1->aio_handle,
  VAR_2->cmnd, VAR_2->cmd_len, VAR_3, ((void*)0), 0);
}
