
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg_domain; int deflt; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3 = 1;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2].reg_domain) {
   VAR_3 = VAR_0[VAR_2].deflt;
   break;
  }
 return VAR_3;
}
