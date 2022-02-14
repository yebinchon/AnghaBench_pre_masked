
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_5__ {TYPE_1__* sel_fcf; } ;
struct qedf_ctx {void** data_src_addr; int dbg_ctx; TYPE_2__ ctlr; } ;
struct fc_frame_header {void** fh_d_id; } ;
struct fc_frame {int dummy; } ;
struct TYPE_6__ {void** granted_mac; } ;
struct TYPE_4__ {int fc_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,void**,int) ;
 int VAR_3 ;
 int FUNC_1 (void**,void**) ;
 int FUNC_2 (void**,void**) ;
 struct fc_frame_header* FUNC_3 (struct fc_frame*) ;
 TYPE_3__* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (void**,int ) ;
 int FUNC_6 (void**) ;

__attribute__((used)) static void FUNC_7(struct qedf_ctx *VAR_4, struct fc_frame *VAR_5)
{
 u8 *VAR_6;
 struct fc_frame_header *VAR_7 = FUNC_3(VAR_5);
 u8 VAR_8[3];
 int VAR_9 = 0;


 VAR_6 = FUNC_4(VAR_5)->granted_mac;
 if (!FUNC_6(VAR_6)) {
  FUNC_1(VAR_4->data_src_addr, VAR_6);
  VAR_9 = VAR_2;
 } else if (VAR_4->ctlr.sel_fcf->fc_map != 0) {
  FUNC_5(VAR_8, VAR_4->ctlr.sel_fcf->fc_map);
  VAR_4->data_src_addr[0] = VAR_8[0];
  VAR_4->data_src_addr[1] = VAR_8[1];
  VAR_4->data_src_addr[2] = VAR_8[2];
  VAR_4->data_src_addr[3] = VAR_7->fh_d_id[0];
  VAR_4->data_src_addr[4] = VAR_7->fh_d_id[1];
  VAR_4->data_src_addr[5] = VAR_7->fh_d_id[2];
  VAR_9 = VAR_0;
 } else {
  FUNC_2(VAR_4->data_src_addr, VAR_7->fh_d_id);
  VAR_9 = VAR_1;
 }

 FUNC_0(&(VAR_4->dbg_ctx), VAR_3,
     "QEDF data_src_mac=%pM method=%d.\n", VAR_4->data_src_addr, VAR_9);
}
