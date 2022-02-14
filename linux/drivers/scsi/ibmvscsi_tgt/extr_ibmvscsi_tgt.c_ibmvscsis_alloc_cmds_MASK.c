
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info {int free_cmd; scalar_t__ cmd_pool; } ;
struct ibmvscsis_cmd {int list; int work; struct scsi_info* adapter; int * abort_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_info *VAR_3, int VAR_4)
{
 struct ibmvscsis_cmd *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->free_cmd);
 VAR_3->cmd_pool = FUNC_2(VAR_4, sizeof(struct ibmvscsis_cmd),
      VAR_1);
 if (!VAR_3->cmd_pool)
  return -VAR_0;

 for (VAR_6 = 0, VAR_5 = (struct ibmvscsis_cmd *)VAR_3->cmd_pool; VAR_6 < VAR_4;
      VAR_6++, VAR_5++) {
  VAR_5->abort_cmd = ((void*)0);
  VAR_5->adapter = VAR_3;
  FUNC_1(&VAR_5->work, VAR_2);
  FUNC_3(&VAR_5->list, &VAR_3->free_cmd);
 }

 return 0;
}
