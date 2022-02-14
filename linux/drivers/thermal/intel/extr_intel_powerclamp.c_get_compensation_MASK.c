
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ confidence; int steady_comp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_4)
{
 unsigned int VAR_5 = 0;


 if (VAR_4 == 1 &&
  VAR_2[VAR_4].confidence >= VAR_0 &&
  VAR_2[VAR_4 + 1].confidence >= VAR_0 &&
  VAR_2[VAR_4 + 2].confidence >= VAR_0) {
  VAR_5 = (VAR_2[VAR_4].steady_comp +
   VAR_2[VAR_4 + 1].steady_comp +
   VAR_2[VAR_4 + 2].steady_comp) / 3;
 } else if (VAR_4 == VAR_1 - 1 &&
  VAR_2[VAR_4].confidence >= VAR_0 &&
  VAR_2[VAR_4 - 1].confidence >= VAR_0 &&
  VAR_2[VAR_4 - 2].confidence >= VAR_0) {
  VAR_5 = (VAR_2[VAR_4].steady_comp +
   VAR_2[VAR_4 - 1].steady_comp +
   VAR_2[VAR_4 - 2].steady_comp) / 3;
 } else if (VAR_2[VAR_4].confidence >= VAR_0 &&
  VAR_2[VAR_4 - 1].confidence >= VAR_0 &&
  VAR_2[VAR_4 + 1].confidence >= VAR_0) {
  VAR_5 = (VAR_2[VAR_4].steady_comp +
   VAR_2[VAR_4 - 1].steady_comp +
   VAR_2[VAR_4 + 1].steady_comp) / 3;
 }


 if (VAR_3)
  VAR_5 = VAR_4;

 if (VAR_5 + VAR_4 >= VAR_1)
  VAR_5 = VAR_1 - VAR_4 - 1;

 return VAR_5;
}
