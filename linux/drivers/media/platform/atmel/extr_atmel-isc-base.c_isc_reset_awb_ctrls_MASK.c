
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* gain; int * offset; } ;
struct isc_device {TYPE_1__ ctrls; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct isc_device *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {

  VAR_3->ctrls.gain[VAR_4] = 1 << 9;





  VAR_3->ctrls.offset[VAR_4] = VAR_2;
 }
}
