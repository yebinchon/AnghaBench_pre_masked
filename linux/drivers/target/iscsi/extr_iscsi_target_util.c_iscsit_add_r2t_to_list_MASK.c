
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct iscsi_r2t {int recovery_r2t; int r2t_list; void* xfer_len; void* offset; void* r2t_sn; } ;
struct iscsi_cmd {int r2t_lock; int conn; int cmd_r2t_list; int r2t_sn; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iscsi_cmd*,int ,int ) ;
 struct iscsi_r2t* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
 struct iscsi_cmd *VAR_3,
 u32 VAR_4,
 u32 VAR_5,
 int VAR_6,
 u32 VAR_7)
{
 struct iscsi_r2t *VAR_8;

 FUNC_5(&VAR_3->r2t_lock);

 FUNC_1((s32)VAR_5 < 0);

 VAR_8 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_8) {
  FUNC_6("Unable to allocate memory for struct iscsi_r2t.\n");
  return -1;
 }
 FUNC_0(&VAR_8->r2t_list);

 VAR_8->recovery_r2t = VAR_6;
 VAR_8->r2t_sn = (!VAR_7) ? VAR_3->r2t_sn++ : VAR_7;
 VAR_8->offset = VAR_4;
 VAR_8->xfer_len = VAR_5;
 FUNC_4(&VAR_8->r2t_list, &VAR_3->cmd_r2t_list);
 FUNC_8(&VAR_3->r2t_lock);

 FUNC_2(VAR_3, VAR_3->conn, VAR_1);

 FUNC_7(&VAR_3->r2t_lock);
 return 0;
}
