
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct esas2r_request {struct esas2r_disc_context* interrupt_cx; int comp_cb; TYPE_3__* vda_rsp_data; } ;
struct esas2r_disc_context {scalar_t__ part_num; int * raid_grp_name; int scan_gen; int raid_grp_ix; int state; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vdapart_info {scalar_t__ part_no; int * grp_name; } ;
struct TYPE_4__ {struct atto_vdapart_info part_info; } ;
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
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct atto_vdapart_info*,int ,int) ;

__attribute__((used)) static bool FUNC_8(struct esas2r_adapter *VAR_4,
      struct esas2r_request *VAR_5)
{
 struct esas2r_disc_context *VAR_6 =
  (struct esas2r_disc_context *)VAR_5->interrupt_cx;
 bool VAR_7;
 struct atto_vdapart_info *VAR_8;

 FUNC_4();

 FUNC_3("part_num: %d", VAR_6->part_num);

 if (VAR_6->part_num >= VAR_2) {
  VAR_6->state = VAR_0;
  VAR_6->raid_grp_ix++;

  FUNC_5();

  return 0;
 }

 FUNC_2(VAR_5, VAR_4);

 VAR_8 = &VAR_5->vda_rsp_data->mgt_data.data.part_info;

 FUNC_7(VAR_8, 0, sizeof(struct atto_vdapart_info));

 FUNC_0(VAR_4,
        VAR_5,
        VAR_1,
        VAR_6->scan_gen,
        0,
        sizeof(struct atto_vdapart_info),
        ((void*)0));

 VAR_8->part_no = VAR_6->part_num;

 FUNC_6(&VAR_8->grp_name[0],
        &VAR_6->raid_grp_name[0],
        sizeof(VAR_8->grp_name));

 VAR_5->comp_cb = VAR_3;

 VAR_5->interrupt_cx = VAR_6;

 VAR_7 = FUNC_1(VAR_4, VAR_5);

 FUNC_5();

 return VAR_7;
}
