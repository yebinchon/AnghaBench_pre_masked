
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ mmio; } ;
struct TYPE_2__ {unsigned int offset; int size; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = (VAR_3 * VAR_0) +
       VAR_1[VAR_4].offset;

 if (VAR_1[VAR_4].size == 2)
  return FUNC_1(VAR_2->mmio + VAR_5);
 return FUNC_0(VAR_2->mmio + VAR_5);
}
