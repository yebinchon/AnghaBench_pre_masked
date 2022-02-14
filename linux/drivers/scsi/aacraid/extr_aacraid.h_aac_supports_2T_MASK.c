
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int options; } ;
struct aac_dev {TYPE_1__ adapter_info; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct aac_dev *VAR_1)
{
 return (VAR_1->adapter_info.options & VAR_0);
}
