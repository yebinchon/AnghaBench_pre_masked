
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct esas2r_request {struct esas2r_disc_context* interrupt_cx; int comp_cb; TYPE_3__* vda_rsp_data; } ;
struct esas2r_disc_context {scalar_t__ raid_grp_ix; int scan_gen; int state; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_grp_info {scalar_t__ grp_index; } ;
struct TYPE_4__ {struct atto_vda_grp_info grp_info; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ mgt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,int ,int ,int ,int,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct atto_vda_grp_info*,int ,int) ;

__attribute__((used)) static bool FUNC_7(struct esas2r_adapter *VAR_4,
          struct esas2r_request *VAR_5)
{
 struct esas2r_disc_context *VAR_6 =
  (struct esas2r_disc_context *)VAR_5->interrupt_cx;
 bool VAR_7;
 struct atto_vda_grp_info *VAR_8;

 FUNC_4();

 FUNC_3("raid_group_idx: %d", VAR_6->raid_grp_ix);

 if (VAR_6->raid_grp_ix >= VAR_2) {
  VAR_6->state = VAR_0;

  FUNC_5();

  return 0;
 }

 FUNC_2(VAR_5, VAR_4);

 VAR_8 = &VAR_5->vda_rsp_data->mgt_data.data.grp_info;

 FUNC_6(VAR_8, 0, sizeof(struct atto_vda_grp_info));

 FUNC_0(VAR_4,
        VAR_5,
        VAR_1,
        VAR_6->scan_gen,
        0,
        sizeof(struct atto_vda_grp_info),
        ((void*)0));

 VAR_8->grp_index = VAR_6->raid_grp_ix;

 VAR_5->comp_cb = VAR_3;

 VAR_5->interrupt_cx = VAR_6;

 VAR_7 = FUNC_1(VAR_4, VAR_5);

 FUNC_5();

 return VAR_7;
}
