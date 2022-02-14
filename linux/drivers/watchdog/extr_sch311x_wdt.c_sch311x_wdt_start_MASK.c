
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; scalar_t__ runtime_reg; } ;


 scalar_t__ VAR_0 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned char VAR_3;

 FUNC_3(&VAR_1.io_lock);


 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_1.runtime_reg + VAR_0);
 FUNC_1((VAR_3 & ~0x0d) | 0x0c, VAR_1.runtime_reg + VAR_0);

 FUNC_4(&VAR_1.io_lock);

}
