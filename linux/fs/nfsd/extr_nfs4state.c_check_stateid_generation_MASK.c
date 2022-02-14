
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ si_generation; } ;
typedef TYPE_1__ stateid_t ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_1(stateid_t *VAR_3, stateid_t *VAR_4, bool VAR_5)
{




 if (VAR_5 && VAR_3->si_generation == 0)
  return VAR_0;

 if (VAR_3->si_generation == VAR_4->si_generation)
  return VAR_0;


 if (FUNC_0(VAR_3, VAR_4))
  return VAR_1;
 return VAR_2;
}
