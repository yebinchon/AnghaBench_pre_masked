
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; scalar_t__ io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(void)
{
 int VAR_3 = VAR_1;

 FUNC_1(&VAR_2.io_lock);


 if ((FUNC_0(VAR_2.io_addr + 2) == 0xFF) ||
     (FUNC_0(VAR_2.io_addr + 3) == 0xFF))
  VAR_3 = VAR_0;
 FUNC_2(&VAR_2.io_lock);

 return VAR_3;
}
