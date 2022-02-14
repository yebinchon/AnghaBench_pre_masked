
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short ppr_able; } ;
typedef int AdvPortAddr ;
typedef TYPE_1__ ADV_DVC_VAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (int ,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(ADV_DVC_VAR *VAR_1,
    AdvPortAddr VAR_2, unsigned short VAR_3)
{
 FUNC_0(VAR_2, VAR_0, VAR_1->ppr_able);
 VAR_1->ppr_able |= VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_1->ppr_able);
}
