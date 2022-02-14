
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver; } ;
struct TYPE_2__ {char const* name; } ;



const char *FUNC_0(const struct tty_struct *VAR_0)
{
 if (!VAR_0 || !VAR_0->driver)
  return "";
 return VAR_0->driver->name;
}
