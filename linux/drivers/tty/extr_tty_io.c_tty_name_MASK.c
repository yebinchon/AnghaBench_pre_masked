
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {char const* name; } ;



const char *FUNC_0(const struct tty_struct *VAR_0)
{
 if (!VAR_0)
  return "NULL tty";
 return VAR_0->name;
}
