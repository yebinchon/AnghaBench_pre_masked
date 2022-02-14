
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* adapter_check_health ) (struct aac_dev*) ;} ;
struct aac_dev {TYPE_1__ a_ops; } ;


 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct aac_dev *VAR_0)
{
 if (FUNC_2(FUNC_0(VAR_0)))
  return -1;

 return (VAR_0)->a_ops.adapter_check_health(VAR_0);
}
