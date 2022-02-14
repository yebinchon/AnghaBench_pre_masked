
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {size_t band; } ;
struct TYPE_2__ {unsigned int rangelow; int rangehigh; } ;


 TYPE_1__* VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 unsigned int FUNC_1 (struct si470x_device*) ;
 int FUNC_2 (struct si470x_device*,unsigned short) ;

int FUNC_3(struct si470x_device *VAR_1, unsigned int VAR_2)
{
 unsigned short VAR_3;

 VAR_2 = FUNC_0(VAR_2, VAR_0[VAR_1->band].rangelow,
      VAR_0[VAR_1->band].rangehigh);

 VAR_3 = (VAR_2 - VAR_0[VAR_1->band].rangelow) / FUNC_1(VAR_1);

 return FUNC_2(VAR_1, VAR_3);
}
