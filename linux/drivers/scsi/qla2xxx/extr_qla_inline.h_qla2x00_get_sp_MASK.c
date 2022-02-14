
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_qpair {int dummy; } ;
struct TYPE_11__ {TYPE_3__* vha; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_12__ {TYPE_1__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef int gfp_t ;
typedef int fc_port_t ;
struct TYPE_10__ {struct qla_qpair* base_qpair; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,struct qla_qpair*,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline srb_t *
FUNC_4(scsi_qla_host_t *VAR_0, fc_port_t *VAR_1, gfp_t VAR_2)
{
 srb_t *VAR_3 = ((void*)0);
 uint8_t VAR_4;
 struct qla_qpair *VAR_5;

 FUNC_0(VAR_0, VAR_4);
 if (FUNC_3(VAR_4))
  return ((void*)0);

 VAR_5 = VAR_0->hw->base_qpair;
 VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_1, VAR_2);
 if (!VAR_3)
  goto done;

 VAR_3->vha = VAR_0;
done:
 if (!VAR_3)
  FUNC_1(VAR_0);
 return VAR_3;
}
