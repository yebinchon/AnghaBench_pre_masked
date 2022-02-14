
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int flags; char* name; scalar_t__ name_base; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct tty_driver *VAR_1, int VAR_2, char *VAR_3)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_0(VAR_3, "%s", VAR_1->name);
 else
  return FUNC_0(VAR_3, "%s%d", VAR_1->name,
          VAR_2 + VAR_1->name_base);
}
