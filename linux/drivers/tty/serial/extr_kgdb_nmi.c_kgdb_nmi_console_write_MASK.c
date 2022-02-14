
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct console {int dummy; } ;
struct TYPE_2__ {int (* write_char ) (char const) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_1, const char *VAR_2, uint VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_0->write_char(VAR_2[VAR_4]);
}
