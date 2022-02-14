
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_vf_info {int rx_ctx_id; } ;
struct qlcnic_sriov {int dummy; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_vf_info*,int,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_vf_info*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_3,
       struct qlcnic_vf_info *VAR_4,
       struct qlcnic_cmd_args *VAR_5)
{
 struct qlcnic_sriov *VAR_6 = VAR_3->ahw->sriov;
 int VAR_7 = -VAR_0;
 u16 VAR_8;

 if (FUNC_0(VAR_3) && FUNC_3(VAR_4))
  return VAR_7;

 VAR_8 = VAR_5->req.arg[1] >> 16;

 if (!VAR_4->rx_ctx_id) {
  FUNC_1(VAR_6, VAR_4, VAR_8);
  return 0;
 }

 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, 0,
        VAR_2);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_8, VAR_1);

 if (VAR_7) {
  if (FUNC_0(VAR_3))
   FUNC_2(VAR_3, VAR_4, 0,
          VAR_1);
  return VAR_7;
 }

 FUNC_1(VAR_6, VAR_4, VAR_8);
 return VAR_7;
}
