
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct afu_cmd {int queue; } ;


 int FUNC_0 (int *) ;
 struct afu_cmd* FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static inline struct afu_cmd *FUNC_2(struct scsi_cmnd *VAR_0)
{
 struct afu_cmd *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->queue);
 return VAR_1;
}
