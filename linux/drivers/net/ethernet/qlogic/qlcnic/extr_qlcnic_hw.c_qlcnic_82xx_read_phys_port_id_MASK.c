
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int phys_port_id; int physical_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct qlcnic_adapter*,int *,int ) ;

int FUNC_2(struct qlcnic_adapter *VAR_2)
{
 u8 VAR_3[VAR_0];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3,
         VAR_2->ahw->physical_port);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_2->ahw->phys_port_id, VAR_3, VAR_0);
 VAR_2->flags |= VAR_1;

 return 0;
}
