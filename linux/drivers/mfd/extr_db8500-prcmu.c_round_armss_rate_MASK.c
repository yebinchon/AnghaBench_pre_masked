
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ project; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned long* VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_4)
{
 unsigned long VAR_5 = 0;
 const unsigned long *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_3.version.project == VAR_0) {
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
 } else {
  VAR_6 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
 }


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = VAR_6[VAR_8];
  if (VAR_4 <= VAR_5)
   break;
 }


 return VAR_5;
}
