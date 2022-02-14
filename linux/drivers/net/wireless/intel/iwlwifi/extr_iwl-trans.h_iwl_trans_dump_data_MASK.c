
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans_dump_data {int dummy; } ;
struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {struct iwl_trans_dump_data* (* dump_data ) (struct iwl_trans*,int ) ;} ;


 struct iwl_trans_dump_data* FUNC_0 (struct iwl_trans*,int ) ;

__attribute__((used)) static inline struct iwl_trans_dump_data *
FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1)
{
 if (!VAR_0->ops->dump_data)
  return ((void*)0);
 return VAR_0->ops->dump_data(VAR_0, VAR_1);
}
