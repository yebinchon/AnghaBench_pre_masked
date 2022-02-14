
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {TYPE_1__* ahw; int max_sds_rings; int max_tx_rings; } ;
struct TYPE_2__ {int msix_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_5)
{
 u8 VAR_6 = VAR_0;
 u8 VAR_7 = VAR_1;

 VAR_5->max_tx_rings = VAR_3;
 VAR_5->max_sds_rings = VAR_2;

 if (!VAR_5->ahw->msix_supported) {
  VAR_6 = VAR_4;
  VAR_7 = VAR_4;
 }


 FUNC_1(VAR_5, VAR_7);
 FUNC_0(VAR_5, VAR_6);
}
