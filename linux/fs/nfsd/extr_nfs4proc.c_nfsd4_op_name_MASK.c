
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* op_name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(unsigned VAR_1)
{
 if (VAR_1 < FUNC_0(VAR_0))
  return VAR_0[VAR_1].op_name;
 return "unknown_operation";
}
