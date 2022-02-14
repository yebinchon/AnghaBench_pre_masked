
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qla_qpair {int srb_mempool; } ;
typedef int srb_t ;
typedef int scsi_qla_host_t ;
typedef int gfp_t ;
typedef int fc_port_t ;


 int FUNC_0 (struct qla_qpair*,int ) ;
 int FUNC_1 (struct qla_qpair*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,struct qla_qpair*,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline srb_t *
FUNC_5(scsi_qla_host_t *VAR_0, struct qla_qpair *VAR_1,
    fc_port_t *VAR_2, gfp_t VAR_3)
{
 srb_t *VAR_4 = ((void*)0);
 uint8_t VAR_5;

 FUNC_0(VAR_1, VAR_5);
 if (FUNC_4(VAR_5))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1->srb_mempool, VAR_3);
 if (VAR_4)
  FUNC_3(VAR_4, VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_1);
 return VAR_4;
}
