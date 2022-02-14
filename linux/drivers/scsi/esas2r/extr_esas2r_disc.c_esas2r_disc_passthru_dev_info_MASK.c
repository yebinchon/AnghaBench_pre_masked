
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct esas2r_request {struct esas2r_disc_context* interrupt_cx; int comp_cb; TYPE_3__* vda_rsp_data; } ;
struct esas2r_disc_context {int dev_ix; int scan_gen; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_devinfo {int dummy; } ;
struct TYPE_4__ {struct atto_vda_devinfo dev_info; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ mgt_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,int ,int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct atto_vda_devinfo*,int ,int) ;

__attribute__((used)) static bool FUNC_7(struct esas2r_adapter *VAR_2,
       struct esas2r_request *VAR_3)
{
 struct esas2r_disc_context *VAR_4 =
  (struct esas2r_disc_context *)VAR_3->interrupt_cx;
 bool VAR_5;
 struct atto_vda_devinfo *VAR_6;

 FUNC_4();

 FUNC_3("dev_ix: %d", VAR_4->dev_ix);

 FUNC_2(VAR_3, VAR_2);

 VAR_6 = &VAR_3->vda_rsp_data->mgt_data.data.dev_info;

 FUNC_6(VAR_6, 0, sizeof(struct atto_vda_devinfo));

 FUNC_0(VAR_2,
        VAR_3,
        VAR_0,
        VAR_4->scan_gen,
        VAR_4->dev_ix,
        sizeof(struct atto_vda_devinfo),
        ((void*)0));

 VAR_3->comp_cb = VAR_1;

 VAR_3->interrupt_cx = VAR_4;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_5();

 return VAR_5;
}
