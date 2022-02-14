
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atmel_pmecc_user {TYPE_2__* pmecc; } ;
struct TYPE_4__ {TYPE_1__* caps; } ;
struct TYPE_3__ {int correct_erased_chunks; } ;



bool FUNC_0(struct atmel_pmecc_user *VAR_0)
{
 return VAR_0->pmecc->caps->correct_erased_chunks;
}
