
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qla_hw_data {scalar_t__ fw_type; TYPE_2__* hablob; } ;
struct qla82xx_uri_data_desc {int size; } ;
typedef int __le32 ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct TYPE_3__ {int * data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct qla82xx_uri_data_desc* FUNC_1 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static __le32
FUNC_2(struct qla_hw_data *VAR_4)
{
 struct qla82xx_uri_data_desc *VAR_5 = ((void*)0);

 if (VAR_4->fw_type == VAR_1) {
  VAR_5 = FUNC_1(VAR_4, VAR_2,
      VAR_3);
  if (VAR_5)
   return FUNC_0(VAR_5->size);
 }

 return FUNC_0(*(u32 *)&VAR_4->hablob->fw->data[VAR_0]);
}
