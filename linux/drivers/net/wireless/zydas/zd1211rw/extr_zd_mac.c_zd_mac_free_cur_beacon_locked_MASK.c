
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * cur_beacon; } ;
struct TYPE_3__ {int mutex; } ;
struct zd_mac {TYPE_2__ beacon; TYPE_1__ chip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct zd_mac *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->chip.mutex));

 FUNC_1(VAR_0->beacon.cur_beacon);
 VAR_0->beacon.cur_beacon = ((void*)0);
}
