
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_mem ) (struct iwl_trans*,int ,void const*,int) ;} ;


 int FUNC_0 (struct iwl_trans*,int ,void const*,int) ;

__attribute__((used)) static inline int FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1,
          const void *VAR_2, int VAR_3)
{
 return VAR_0->ops->write_mem(VAR_0, VAR_1, VAR_2, VAR_3);
}
