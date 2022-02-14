
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; TYPE_1__* constraints; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* name; } ;



const char *FUNC_0(struct regulator_dev *VAR_0)
{
 if (VAR_0->constraints && VAR_0->constraints->name)
  return VAR_0->constraints->name;
 else if (VAR_0->desc->name)
  return VAR_0->desc->name;
 else
  return "";
}
