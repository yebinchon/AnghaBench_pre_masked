
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* write_crb ) (struct qlcnic_adapter*,char*,int ,size_t) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,char*,int ,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0, char *VAR_1,
        loff_t VAR_2, size_t VAR_3)
{
 VAR_0->ahw->hw_ops->write_crb(VAR_0, VAR_1, VAR_2, VAR_3);
}
