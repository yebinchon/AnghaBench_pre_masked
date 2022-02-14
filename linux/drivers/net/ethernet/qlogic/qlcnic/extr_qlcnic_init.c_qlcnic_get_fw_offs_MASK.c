
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct uni_data_desc {int findex; } ;
struct qlcnic_adapter {TYPE_2__* fw; TYPE_1__* ahw; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {scalar_t__ fw_type; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 struct uni_data_desc* FUNC_1 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static u8 *
FUNC_2(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5 = VAR_0;
 struct uni_data_desc *VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_2,
      VAR_3);
 if (VAR_4->ahw->fw_type == VAR_1)
  VAR_5 = FUNC_0(VAR_6->findex);

 return (u8 *)&VAR_4->fw->data[VAR_5];
}
