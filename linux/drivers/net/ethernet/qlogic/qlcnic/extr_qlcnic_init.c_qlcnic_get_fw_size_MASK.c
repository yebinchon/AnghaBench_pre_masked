
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct uni_data_desc {int size; } ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* fw; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ fw_type; } ;
struct TYPE_3__ {int * data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct uni_data_desc* FUNC_1 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct qlcnic_adapter *VAR_4)
{
 struct uni_data_desc *VAR_5;
 const u8 *VAR_6 = VAR_4->fw->data;

 VAR_5 = FUNC_1(VAR_4, VAR_2,
      VAR_3);

 if (VAR_4->ahw->fw_type == VAR_1)
  return FUNC_0(VAR_5->size);
 else
  return FUNC_0(*(__le32 *)&VAR_6[VAR_0]);
}
