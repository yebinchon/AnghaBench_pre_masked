
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int flags; int drv_sds_rings; TYPE_1__* ahw; } ;
struct TYPE_2__ {int num_msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (VAR_4->flags & VAR_3) {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_5 = VAR_4->ahw->num_msix;
 } else {
  VAR_5 = FUNC_0(VAR_4);

  VAR_6 = FUNC_3(VAR_4, VAR_5);
  if (VAR_6 == -VAR_0)
   return VAR_6;

  if (!(VAR_4->flags & VAR_1)) {
   FUNC_1(VAR_4);
   VAR_4->drv_sds_rings = VAR_2;

   VAR_6 = FUNC_2(VAR_4);
   if (VAR_6)
    return VAR_6;
  }
 }

 return 0;
}
