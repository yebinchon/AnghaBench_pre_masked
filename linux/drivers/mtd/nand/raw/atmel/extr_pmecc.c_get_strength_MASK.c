
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t cfg; } ;
struct atmel_pmecc_user {TYPE_3__ cache; TYPE_2__* pmecc; } ;
struct TYPE_5__ {TYPE_1__* caps; } ;
struct TYPE_4__ {int* strengths; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct atmel_pmecc_user *VAR_1)
{
 const int *VAR_2 = VAR_1->pmecc->caps->strengths;

 return VAR_2[VAR_1->cache.cfg & VAR_0];
}
