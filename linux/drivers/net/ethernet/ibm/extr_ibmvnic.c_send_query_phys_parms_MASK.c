
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ query_phys_parms; } ;
struct ibmvnic_adapter {scalar_t__ fw_done_rc; int fw_done; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union ibmvnic_crq*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ibmvnic_adapter *VAR_3)
{
 union ibmvnic_crq VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.query_phys_parms.first = VAR_1;
 VAR_4.query_phys_parms.cmd = VAR_2;
 FUNC_1(&VAR_3->fw_done);
 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_3(&VAR_3->fw_done);
 return VAR_3->fw_done_rc ? -VAR_0 : 0;
}
