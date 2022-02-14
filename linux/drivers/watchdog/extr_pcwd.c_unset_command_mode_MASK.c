
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ command_mode; int io_lock; scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{

 FUNC_2(&VAR_3.io_lock);
 FUNC_0(0x00, VAR_3.io_addr + 2);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_3.io_lock);

 VAR_3.command_mode = 0;

 if (VAR_2 >= VAR_0)
  FUNC_1("command_mode=%d\n", VAR_3.command_mode);
}
