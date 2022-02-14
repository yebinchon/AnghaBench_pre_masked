
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int dummy; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int enable_ini; } ;


 int FUNC_0 (struct iwl_trans*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char*,struct device*) ;

void FUNC_3(struct device *VAR_1, struct iwl_trans *VAR_2)
{
 const struct firmware *VAR_3;
 int VAR_4;

 if (!VAR_0.enable_ini)
  return;

 VAR_4 = FUNC_2(&VAR_3, "iwl-dbg-tlv.ini", VAR_1);
 if (VAR_4)
  return;

 FUNC_0(VAR_2, VAR_3->data, VAR_3->size);

 FUNC_1(VAR_3);
}
