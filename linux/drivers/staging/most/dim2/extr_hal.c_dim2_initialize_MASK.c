
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int fcnt; TYPE_1__* dim2; } ;
struct TYPE_3__ {int ACTL; int HCTL; int HCMR1; int HCMR0; int MLBC0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_8 ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(bool VAR_9, u8 VAR_10)
{
 FUNC_1();


 FUNC_2(VAR_9 << VAR_7 |
        VAR_10 << VAR_5 |
        VAR_8.fcnt << VAR_4 |
        1 << VAR_6,
        &VAR_8.dim2->MLBC0);


 FUNC_2(0xFFFFFFFF, &VAR_8.dim2->HCMR0);
 FUNC_2(0xFFFFFFFF, &VAR_8.dim2->HCMR1);


 FUNC_2(FUNC_0(VAR_3), &VAR_8.dim2->HCTL);


 FUNC_2(VAR_1 << VAR_0 |
        1 << VAR_2, &VAR_8.dim2->ACTL);
}
