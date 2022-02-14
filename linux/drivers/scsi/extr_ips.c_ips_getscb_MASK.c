
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* q_next; scalar_t__ flags; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_8__ {TYPE_1__* scb_freelist; } ;
typedef TYPE_2__ ips_ha_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static ips_scb_t *
FUNC_2(ips_ha_t * VAR_0)
{
 ips_scb_t *VAR_1;

 FUNC_0("ips_getscb", 1);

 if ((VAR_1 = VAR_0->scb_freelist) == ((void*)0)) {

  return (((void*)0));
 }

 VAR_0->scb_freelist = VAR_1->q_next;
 VAR_1->flags = 0;
 VAR_1->q_next = ((void*)0);

 FUNC_1(VAR_0, VAR_1);

 return (VAR_1);
}
