
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
typedef enum iwl_d3_status { ____Placeholder_iwl_d3_status } iwl_d3_status ;
struct TYPE_2__ {int (* d3_resume ) (struct iwl_trans*,int*,int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct iwl_trans*,int*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct iwl_trans *VAR_0,
          enum iwl_d3_status *VAR_1,
          bool VAR_2, bool VAR_3)
{
 FUNC_0();
 if (!VAR_0->ops->d3_resume)
  return 0;

 return VAR_0->ops->d3_resume(VAR_0, VAR_1, VAR_2, VAR_3);
}
