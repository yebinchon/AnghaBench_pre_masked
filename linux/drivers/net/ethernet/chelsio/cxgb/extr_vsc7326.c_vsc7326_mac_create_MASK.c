
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac {TYPE_1__* instance; int * adapter; int * ops; } ;
struct TYPE_2__ {int index; scalar_t__ ticks; } ;
typedef TYPE_1__ cmac_instance ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmac* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static struct cmac *FUNC_3(adapter_t *VAR_3, int VAR_4)
{
 struct cmac *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(sizeof(*VAR_5) + sizeof(cmac_instance), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->ops = &VAR_2;
 VAR_5->instance = (cmac_instance *)(VAR_5 + 1);
 VAR_5->adapter = VAR_3;

 VAR_5->instance->index = VAR_4;
 VAR_5->instance->ticks = 0;

 VAR_7 = 0;
 do {
  u32 VAR_8, VAR_9;

  VAR_8 = VAR_9 = 0;
  FUNC_1(VAR_3, (VAR_1 << 2) + 4, &VAR_9);
  FUNC_2(1);
  FUNC_1(VAR_3, VAR_1 << 2, &VAR_8);
  FUNC_2(5);
  VAR_6 = (VAR_8 << 16) | VAR_9;
 } while ((++VAR_7 < 10000) && (VAR_6 == 0xffffffff));

 return VAR_5;
}
