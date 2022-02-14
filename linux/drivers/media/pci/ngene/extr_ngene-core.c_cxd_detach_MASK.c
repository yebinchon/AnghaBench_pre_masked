
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene_ci {int * en; } ;
struct ngene {TYPE_1__* channel; struct ngene_ci ci; } ;
struct TYPE_2__ {int ** i2c_client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ngene *VAR_0)
{
 struct ngene_ci *VAR_1 = &VAR_0->ci;

 FUNC_0(VAR_1->en);

 FUNC_1(VAR_0->channel[0].i2c_client[0]);
 VAR_0->channel[0].i2c_client[0] = ((void*)0);
 VAR_1->en = ((void*)0);
}
