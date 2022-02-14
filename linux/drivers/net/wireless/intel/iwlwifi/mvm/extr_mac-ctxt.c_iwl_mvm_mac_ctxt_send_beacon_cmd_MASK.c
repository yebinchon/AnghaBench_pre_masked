
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; void* data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_host_cmd {int* len; scalar_t__* dataflags; void** data; int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_host_cmd*) ;

int FUNC_1(struct iwl_mvm *VAR_3,
         struct sk_buff *VAR_4,
         void *VAR_5, int VAR_6)
{
 struct iwl_host_cmd VAR_7 = {
  .id = VAR_0,
  .flags = VAR_1,
 };

 VAR_7.len[0] = VAR_6;
 VAR_7.data[0] = VAR_5;
 VAR_7.dataflags[0] = 0;
 VAR_7.len[1] = VAR_4->len;
 VAR_7.data[1] = VAR_4->data;
 VAR_7.dataflags[1] = VAR_2;

 return FUNC_0(VAR_3, &VAR_7);
}
