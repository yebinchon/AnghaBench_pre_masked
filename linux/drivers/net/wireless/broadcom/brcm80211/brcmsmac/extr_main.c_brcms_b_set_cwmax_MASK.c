
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {int d11core; TYPE_1__* band; } ;
struct TYPE_2__ {int CWmax; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_4, u16 VAR_5)
{
 VAR_4->band->CWmax = VAR_5;

 FUNC_2(VAR_4->d11core, FUNC_0(VAR_2),
       VAR_0 | VAR_1);
 (void)FUNC_1(VAR_4->d11core, FUNC_0(VAR_2));
 FUNC_2(VAR_4->d11core, FUNC_0(VAR_3), VAR_5);
}
