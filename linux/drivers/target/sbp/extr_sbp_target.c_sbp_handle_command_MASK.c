
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {int tag; } ;
struct sbp_target_request {TYPE_1__ status; int sense_buf; int cmd_buf; TYPE_2__ se_cmd; int orb_pointer; struct sbp_login_descriptor* login; } ;
struct sbp_session {int se_sess; } ;
struct sbp_login_descriptor {int login_lun; struct sbp_session* sess; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (struct sbp_target_request*,int *,int*) ;
 int FUNC_7 (struct sbp_target_request*) ;
 int FUNC_8 (struct sbp_target_request*) ;
 int FUNC_9 (struct sbp_target_request*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int ,int ,int,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_11(struct sbp_target_request *VAR_4)
{
 struct sbp_login_descriptor *VAR_5 = VAR_4->login;
 struct sbp_session *VAR_6 = VAR_5->sess;
 int VAR_7, VAR_8;
 u32 VAR_9;
 enum dma_data_direction VAR_10;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7) {
  FUNC_5("sbp_handle_command: fetch command failed: %d\n", VAR_7);
  goto err;
 }

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7) {
  FUNC_5("sbp_handle_command: fetch page table failed: %d\n",
   VAR_7);
  goto err;
 }

 VAR_8 = VAR_4->login->login_lun;
 FUNC_6(VAR_4, &VAR_9, &VAR_10);

 FUNC_5("sbp_handle_command ORB:0x%llx unpacked_lun:%d data_len:%d data_dir:%d\n",
   VAR_4->orb_pointer, VAR_8, VAR_9, VAR_10);


 VAR_4->se_cmd.tag = VAR_4->orb_pointer;
 if (FUNC_10(&VAR_4->se_cmd, VAR_6->se_sess, VAR_4->cmd_buf,
         VAR_4->sense_buf, VAR_8, VAR_9,
         VAR_3, VAR_10, VAR_2))
  goto err;

 return;

err:
 VAR_4->status.status |= FUNC_4(
  FUNC_2(VAR_1) |
  FUNC_0(0) |
  FUNC_1(1) |
  FUNC_3(VAR_0));
 FUNC_9(VAR_4);
}
