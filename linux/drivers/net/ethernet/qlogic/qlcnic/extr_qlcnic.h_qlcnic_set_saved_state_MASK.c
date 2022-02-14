
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* set_saved_state ) (void*,int ,int ) ;} ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0,
       void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 VAR_0->ahw->hw_ops->set_saved_state(VAR_1, VAR_2, VAR_3);
}
