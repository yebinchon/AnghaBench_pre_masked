
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {TYPE_1__* back; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct i40e_vsi *VAR_4)
{
 if (VAR_3 >= 8192 || (VAR_4->back->flags & VAR_0))
  return VAR_1;
 else
  return VAR_2;
}
