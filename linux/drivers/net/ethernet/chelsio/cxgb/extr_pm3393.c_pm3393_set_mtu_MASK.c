
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmac*,int) ;
 int FUNC_1 (struct cmac*,int) ;
 int FUNC_2 (struct cmac*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cmac *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6->instance->enabled;

 VAR_7 += VAR_1 + VAR_0;


 if (VAR_8)
  FUNC_0(VAR_6, VAR_2 | VAR_3);

 FUNC_2(VAR_6, VAR_4, VAR_7);
 FUNC_2(VAR_6, VAR_5, VAR_7);

 if (VAR_8)
  FUNC_1(VAR_6, VAR_8);
 return 0;
}
