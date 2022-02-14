
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulp_cid_info {struct ulp_cid_info* cid_array; } ;
struct TYPE_2__ {int ulp_supported; } ;
struct beiscsi_hba {struct ulp_cid_info** cid_array_info; TYPE_1__ fw_config; struct ulp_cid_info* conn_table; struct ulp_cid_info* ep_array; struct ulp_cid_info* eh_sgl_hndl_base; struct ulp_cid_info* io_sgl_hndl_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct ulp_cid_info*) ;
 scalar_t__ FUNC_1 (int,void*) ;

__attribute__((used)) static void FUNC_2(struct beiscsi_hba *VAR_1)
{
 struct ulp_cid_info *VAR_2 = ((void*)0);
 int VAR_3;

 FUNC_0(VAR_1->io_sgl_hndl_base);
 FUNC_0(VAR_1->eh_sgl_hndl_base);
 FUNC_0(VAR_1->ep_array);
 FUNC_0(VAR_1->conn_table);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_1(VAR_3, (void *)&VAR_1->fw_config.ulp_supported)) {
   VAR_2 = VAR_1->cid_array_info[VAR_3];

   if (VAR_2) {
    FUNC_0(VAR_2->cid_array);
    FUNC_0(VAR_2);
    VAR_1->cid_array_info[VAR_3] = ((void*)0);
   }
  }
 }
}
