
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int phys_port; } ;
struct beiscsi_hba {int port_name; TYPE_3__ fw_config; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct TYPE_9__ {int status; } ;
struct TYPE_10__ {TYPE_4__ resp_hdr; int req_hdr; } ;
struct TYPE_6__ {int port_names; } ;
struct TYPE_7__ {TYPE_1__ resp; } ;
struct be_cmd_get_port_name {TYPE_5__ h; TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,int,int ) ;
 struct be_cmd_get_port_name* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (int *) ;

int FUNC_9(struct be_ctrl_info *VAR_5, struct beiscsi_hba *VAR_6)
{
 int VAR_7 = 0;
 struct be_mcc_wrb *VAR_8;
 struct be_cmd_get_port_name *VAR_9;

 FUNC_6(&VAR_5->mbox_lock);
 VAR_8 = FUNC_8(&VAR_5->mbox_mem);
 FUNC_5(VAR_8, 0, sizeof(*VAR_8));
 VAR_9 = FUNC_4(VAR_8);

 FUNC_2(VAR_8, sizeof(*VAR_9), 1, 0);
 FUNC_0(&VAR_9->h.req_hdr, VAR_1,
      VAR_4,
      VAR_2);
 VAR_7 = FUNC_1(VAR_5);
 VAR_6->port_name = 0;
 if (!VAR_7) {
  VAR_6->port_name = VAR_9->p.resp.port_names >>
      (VAR_6->fw_config.phys_port * 8) & 0xff;
 } else {
  FUNC_3(VAR_6, VAR_3, VAR_0,
       "BG_%d : GET_PORT_NAME ret 0x%x status 0x%x\n",
       VAR_7, VAR_9->h.resp_hdr.status);
 }

 if (VAR_6->port_name == 0)
  VAR_6->port_name = '?';

 FUNC_7(&VAR_5->mbox_lock);
 return VAR_7;
}
