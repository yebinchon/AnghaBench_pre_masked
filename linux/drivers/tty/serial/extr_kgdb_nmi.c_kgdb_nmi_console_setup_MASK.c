
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct console {int dummy; } ;
struct TYPE_4__ {int (* enable_nmi ) (int) ;} ;
struct TYPE_3__ {int is_console; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct console *VAR_2, char *VAR_3)
{
 VAR_0.enable_nmi(1);






 VAR_1->is_console = 1;

 return 0;
}
