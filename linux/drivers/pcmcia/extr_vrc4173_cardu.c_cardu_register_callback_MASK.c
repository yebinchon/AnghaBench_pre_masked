
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* handler ) (void*,unsigned int) ;void* info; } ;
typedef TYPE_1__ vrc4173_socket_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1,
                                           void (*VAR_2)(void *, unsigned int),
                                           void * VAR_3)
{
 vrc4173_socket_t *VAR_4 = &VAR_0[VAR_1];

 VAR_4->handler = VAR_2;
 VAR_4->info = VAR_3;

 return 0;
}
