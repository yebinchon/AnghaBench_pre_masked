
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct pqi_scsi_dev {int dummy; } ;
struct pqi_queue_group {int dummy; } ;
struct pqi_io_request {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;


 struct pqi_io_request* FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (struct pqi_ctrl_info*,struct pqi_io_request*,struct pqi_scsi_dev*,struct scsi_cmnd*,struct pqi_queue_group*) ;

__attribute__((used)) static inline int FUNC_2(struct pqi_ctrl_info *VAR_0,
 struct pqi_scsi_dev *VAR_1, struct scsi_cmnd *VAR_2,
 struct pqi_queue_group *VAR_3)
{
 struct pqi_io_request *VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_4,
  VAR_1, VAR_2, VAR_3);
}
