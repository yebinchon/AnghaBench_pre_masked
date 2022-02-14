
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {int count; } ;
struct ipw_tty {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_tty*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct ipw_tty *VAR_5 = VAR_2->driver_data;


 if (!VAR_5)
  return -VAR_1;

 if (!VAR_5->port.count)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_3, VAR_4);
}
