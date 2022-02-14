
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {int enable; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_fw_dump fw_dump; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

bool FUNC_2(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_fw_dump *VAR_3 = &VAR_2->ahw->fw_dump;
 bool VAR_4;
 u32 VAR_5;

 if (FUNC_1(VAR_2)) {
  VAR_5 = FUNC_0(VAR_2->ahw, VAR_0);
  VAR_4 = (VAR_5 & VAR_1) ? 0 : 1;
 } else {
  VAR_4 = VAR_3->enable;
 }

 return VAR_4;
}
