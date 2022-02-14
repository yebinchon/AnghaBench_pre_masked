
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_fdt {int dummy; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int fdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int *,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(struct qlcnic_adapter *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 VAR_4 = sizeof(struct qlcnic_fdt);
 VAR_3 = VAR_4 / sizeof(u32);

 if (FUNC_1(VAR_2))
  return -VAR_0;

 FUNC_0(&VAR_2->ahw->fdt, 0, VAR_4);
 VAR_5 = FUNC_2(VAR_2, VAR_1,
      (u8 *)&VAR_2->ahw->fdt,
      VAR_3);
 FUNC_4((u32 *)&VAR_2->ahw->fdt, VAR_3);
 FUNC_3(VAR_2);
 return VAR_5;
}
