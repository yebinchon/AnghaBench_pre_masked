
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {TYPE_1__* wlc; } ;
struct TYPE_2__ {int fastpwrup_dly; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct brcms_hardware*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_2)
{

 FUNC_2(40);


 FUNC_0((FUNC_1(VAR_2, VAR_1) ==
    VAR_0), VAR_2->wlc->fastpwrup_dly);
}
