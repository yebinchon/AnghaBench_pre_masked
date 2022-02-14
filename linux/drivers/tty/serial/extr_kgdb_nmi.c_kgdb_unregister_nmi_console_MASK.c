
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* enable_nmi ) (int ) ;} ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 int VAR_3;

 if (!VAR_0.enable_nmi)
  return 0;
 VAR_0.enable_nmi(0);

 VAR_3 = FUNC_3(&VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_0(VAR_2);

 return 0;
}
