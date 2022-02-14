
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ mmio; } ;
struct TYPE_2__ {unsigned int offset; int size; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = (VAR_3 * VAR_0) +
       VAR_1[VAR_5].offset;

 if (VAR_1[VAR_5].size == 2)
  FUNC_1(VAR_4, VAR_2->mmio + VAR_6);
 else
  FUNC_0(VAR_4, VAR_2->mmio + VAR_6);
}
