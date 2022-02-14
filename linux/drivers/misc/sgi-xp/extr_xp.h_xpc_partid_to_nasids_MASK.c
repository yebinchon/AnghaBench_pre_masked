
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* partid_to_nasids ) (short,void*) ;} ;


 int FUNC_0 (short,void*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline enum xp_retval
FUNC_1(short VAR_2, void *VAR_3)
{
 if (!VAR_1.partid_to_nasids)
  return VAR_0;

 return VAR_1.partid_to_nasids(VAR_2, VAR_3);
}
