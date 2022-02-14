
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int last_state; TYPE_1__* chip; } ;
struct TYPE_4__ {int Doorbell; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

u32
FUNC_1(MPT_ADAPTER *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;


 VAR_3 = FUNC_0(&VAR_1->chip->Doorbell);
 VAR_4 = VAR_3 & VAR_0;


 VAR_1->last_state = VAR_4;

 return VAR_2 ? VAR_4 : VAR_3;
}
