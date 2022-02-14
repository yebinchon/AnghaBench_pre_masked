
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {int (* get_register ) (struct si470x_device*,size_t) ;int* registers; size_t band; } ;
struct TYPE_2__ {int rangelow; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct si470x_device*) ;
 int FUNC_1 (struct si470x_device*,size_t) ;

__attribute__((used)) static int FUNC_2(struct si470x_device *VAR_3, unsigned int *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_6 = VAR_3->get_register(VAR_3, VAR_0);
 VAR_5 = VAR_3->registers[VAR_0] & VAR_1;


 *VAR_4 = VAR_5 * FUNC_0(VAR_3) + VAR_2[VAR_3->band].rangelow;

 return VAR_6;
}
