
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* get_cap_size ) (void*,int) ;} ;


 int FUNC_0 (void*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct qlcnic_adapter *VAR_0,
          void *VAR_1, int VAR_2)
{
 return VAR_0->ahw->hw_ops->get_cap_size(VAR_1, VAR_2);
}
