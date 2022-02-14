
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int fc; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmac*,int) ;

__attribute__((used)) static int FUNC_1(struct cmac *VAR_5, int VAR_6, int VAR_7,
          int VAR_8)
{
 if (VAR_6 >= 0 && VAR_6 != VAR_4)
  return -1;
 if (VAR_7 >= 0 && VAR_7 != VAR_0)
  return -1;
 if (VAR_8 & ~(VAR_3 | VAR_2))
  return -1;

 if (VAR_8 != VAR_5->instance->fc) {
  VAR_5->instance->fc = (u8) VAR_8;
  if (VAR_5->instance->enabled & VAR_1)
   FUNC_0(VAR_5, VAR_1);
 }
 return 0;
}
