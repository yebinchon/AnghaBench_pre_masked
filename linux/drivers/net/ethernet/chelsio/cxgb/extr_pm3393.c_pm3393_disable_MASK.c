
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmac*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cmac *VAR_6, int VAR_7)
{
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_6, VAR_3, VAR_2);
 if (VAR_7 & VAR_1)
  FUNC_0(VAR_6, VAR_4, VAR_5);





 FUNC_1(20);

 VAR_6->instance->enabled &= ~VAR_7;
 return 0;
}
