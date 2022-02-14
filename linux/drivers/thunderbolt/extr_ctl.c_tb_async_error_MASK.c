
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ eof; } ;
struct ctl_pkg {TYPE_1__ frame; } ;
struct cfg_error_pkg {int error; } ;





 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct ctl_pkg *VAR_1)
{
 const struct cfg_error_pkg *VAR_2 = (const struct cfg_error_pkg *)VAR_1;

 if (VAR_1->frame.eof != VAR_0)
  return 0;

 switch (VAR_2->error) {
 case 128:
 case 129:
 case 130:
  return 1;

 default:
  return 0;
 }
}
