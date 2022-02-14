
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct cmac *VAR_1)
{
 int VAR_2 = VAR_1->instance->index;

 FUNC_1(VAR_1->adapter, VAR_0[VAR_2],
    FUNC_0(VAR_0[VAR_2]));

 return 0;
}
