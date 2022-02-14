
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct qla_hw_data *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 if (VAR_2->flags.nic_core_reset_owner)
  return 1;
 else {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  VAR_4 = VAR_3 & (VAR_1 << (VAR_2->portnum * 4));
  return VAR_4;
 }
}
