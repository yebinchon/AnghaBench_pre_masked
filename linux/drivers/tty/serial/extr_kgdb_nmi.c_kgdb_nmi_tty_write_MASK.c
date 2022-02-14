
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unchar ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {int (* write_char ) (int const) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, const unchar *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_0->write_char(VAR_2[VAR_4]);
 return VAR_3;
}
