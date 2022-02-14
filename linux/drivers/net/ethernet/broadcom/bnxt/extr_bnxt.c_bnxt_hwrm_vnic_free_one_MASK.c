
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct hwrm_vnic_free_input {int vnic_id; int member_0; } ;
struct bnxt {TYPE_1__* vnic_info; } ;
typedef int req ;
struct TYPE_2__ {scalar_t__ fw_vnic_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_free_input*,int ,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bnxt*,struct hwrm_vnic_free_input*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_3, u16 VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_3->vnic_info[VAR_4].fw_vnic_id != VAR_2) {
  struct hwrm_vnic_free_input VAR_6 = {0};

  FUNC_0(VAR_3, &VAR_6, VAR_1, -1, -1);
  VAR_6.vnic_id =
   FUNC_1(VAR_3->vnic_info[VAR_4].fw_vnic_id);

  VAR_5 = FUNC_2(VAR_3, &VAR_6, sizeof(VAR_6), VAR_0);
  VAR_3->vnic_info[VAR_4].fw_vnic_id = VAR_2;
 }
 return VAR_5;
}
