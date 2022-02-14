
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_2__ {int (* enable_nmi ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const struct kernel_param *VAR_4)
{
 if (!FUNC_0(&VAR_2, -1, 0))
  return -VAR_0;
 VAR_1.enable_nmi(1);
 return 0;
}
