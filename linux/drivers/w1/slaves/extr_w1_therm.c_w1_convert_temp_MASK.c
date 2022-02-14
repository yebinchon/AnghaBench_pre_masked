
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int (* convert ) (scalar_t__*) ;TYPE_1__* f; } ;
struct TYPE_4__ {scalar_t__ fid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline int FUNC_2(u8 VAR_1[9], u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
  if (VAR_0[VAR_3].f->fid == VAR_2)
   return VAR_0[VAR_3].convert(VAR_1);

 return 0;
}
