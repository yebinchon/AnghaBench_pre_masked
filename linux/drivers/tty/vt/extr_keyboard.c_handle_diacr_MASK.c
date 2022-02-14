
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_4__ {unsigned int diacr; unsigned int base; unsigned int result; } ;
struct TYPE_3__ {scalar_t__ kbdmode; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct vc_data*,int) ;
 int FUNC_2 (struct vc_data*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct vc_data *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_4;
 unsigned int VAR_9;

 VAR_4 = 0;

 if ((VAR_8 & ~0xff) == VAR_0) {
  if ((VAR_7 & ~0xff) == VAR_0)
   return VAR_8 | VAR_7;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   if (VAR_2[VAR_9].diacr == VAR_8 && VAR_2[VAR_9].base == VAR_7)
    return VAR_2[VAR_9].result;
 }

 if (VAR_7 == ' ' || VAR_7 == (VAR_0|0) || VAR_7 == VAR_8)
  return VAR_8;

 if (VAR_5->kbdmode == VAR_1)
  FUNC_2(VAR_6, VAR_8);
 else {
  int VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 != -1)
   FUNC_1(VAR_6, VAR_10);
 }

 return VAR_7;
}
