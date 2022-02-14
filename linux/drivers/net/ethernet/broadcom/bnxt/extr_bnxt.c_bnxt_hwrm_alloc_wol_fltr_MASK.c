
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwrm_wol_filter_alloc_output {int wol_filter_id; } ;
struct hwrm_wol_filter_alloc_input {int mac_address; int enables; int wol_type; int port_id; int member_0; } ;
struct TYPE_3__ {int port_id; } ;
struct bnxt {int hwrm_cmd_lock; int wol_filter_id; TYPE_2__* dev; TYPE_1__ pf; struct hwrm_wol_filter_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_wol_filter_alloc_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_wol_filter_alloc_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct bnxt *VAR_5)
{
 struct hwrm_wol_filter_alloc_input VAR_6 = {0};
 struct hwrm_wol_filter_alloc_output *VAR_7 = VAR_5->hwrm_cmd_resp_addr;
 int VAR_8;

 FUNC_1(VAR_5, &VAR_6, VAR_2, -1, -1);
 VAR_6.port_id = FUNC_2(VAR_5->pf.port_id);
 VAR_6.wol_type = VAR_4;
 VAR_6.enables = FUNC_3(VAR_3);
 FUNC_4(VAR_6.mac_address, VAR_5->dev->dev_addr, VAR_0);
 FUNC_5(&VAR_5->hwrm_cmd_lock);
 VAR_8 = FUNC_0(VAR_5, &VAR_6, sizeof(VAR_6), VAR_1);
 if (!VAR_8)
  VAR_5->wol_filter_id = VAR_7->wol_filter_id;
 FUNC_6(&VAR_5->hwrm_cmd_lock);
 return VAR_8;
}
