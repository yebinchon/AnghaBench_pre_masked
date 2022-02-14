
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct imon_panel_key_table {int hw_code; int keycode; } ;
struct imon_context {int release_code; TYPE_1__* dev_descr; } ;
struct TYPE_2__ {struct imon_panel_key_table* key_table; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct imon_context *VAR_1, u64 VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_0;
 struct imon_panel_key_table *VAR_5 = VAR_1->dev_descr->key_table;

 for (VAR_3 = 0; VAR_5[VAR_3].hw_code != 0; VAR_3++) {
  if (VAR_5[VAR_3].hw_code == (VAR_2 | 0xffee)) {
   VAR_4 = VAR_5[VAR_3].keycode;
   break;
  }
 }
 VAR_1->release_code = 0;
 return VAR_4;
}
