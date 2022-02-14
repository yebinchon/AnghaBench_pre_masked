
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_tgt_cmd {int conf_compl_supported; TYPE_1__* qpair; } ;
struct TYPE_2__ {scalar_t__ enable_explicit_conf; scalar_t__ enable_class_2; } ;



__attribute__((used)) static inline int FUNC_0(struct qla_tgt_cmd *VAR_0,
    int VAR_1)
{
 if (VAR_0->qpair->enable_class_2)
  return 0;

 if (VAR_1)
  return VAR_0->conf_compl_supported;
 else
  return VAR_0->qpair->enable_explicit_conf &&
                    VAR_0->conf_compl_supported;
}
