
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ speed_t ;
struct TYPE_3__ {scalar_t__ high; scalar_t__ rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static speed_t FUNC_1(speed_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_1 <= VAR_0[VAR_2].high)
   break;
 }

 return VAR_0[VAR_2].rate;
}
