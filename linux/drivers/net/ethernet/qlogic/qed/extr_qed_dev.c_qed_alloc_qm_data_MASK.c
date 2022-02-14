
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_qm_info {void* wfq_data; void* qm_port_params; void* qm_vport_params; void* qm_pq_params; } ;
struct qed_hwfn {TYPE_1__* cdev; struct qed_qm_info qm_info; } ;
struct TYPE_2__ {int num_ports_in_engine; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_2)
{
 struct qed_qm_info *VAR_3 = &VAR_2->qm_info;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto alloc_err;

 VAR_3->qm_pq_params = FUNC_1(FUNC_2(VAR_2),
     sizeof(*VAR_3->qm_pq_params),
     VAR_1);
 if (!VAR_3->qm_pq_params)
  goto alloc_err;

 VAR_3->qm_vport_params = FUNC_1(FUNC_3(VAR_2),
        sizeof(*VAR_3->qm_vport_params),
        VAR_1);
 if (!VAR_3->qm_vport_params)
  goto alloc_err;

 VAR_3->qm_port_params = FUNC_1(VAR_2->cdev->num_ports_in_engine,
       sizeof(*VAR_3->qm_port_params),
       VAR_1);
 if (!VAR_3->qm_port_params)
  goto alloc_err;

 VAR_3->wfq_data = FUNC_1(FUNC_3(VAR_2),
        sizeof(*VAR_3->wfq_data),
        VAR_1);
 if (!VAR_3->wfq_data)
  goto alloc_err;

 return 0;

alloc_err:
 FUNC_0(VAR_2, "Failed to allocate memory for QM params\n");
 FUNC_5(VAR_2);
 return -VAR_0;
}
