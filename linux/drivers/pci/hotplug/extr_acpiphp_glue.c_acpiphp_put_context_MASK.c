
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* self; } ;
struct acpiphp_context {TYPE_2__ hp; int bridge; scalar_t__ refcount; } ;
struct TYPE_3__ {int * hp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpiphp_context*) ;

__attribute__((used)) static void FUNC_2(struct acpiphp_context *VAR_0)
{
 if (--VAR_0->refcount)
  return;

 FUNC_0(VAR_0->bridge);
 VAR_0->hp.self->hp = ((void*)0);
 FUNC_1(VAR_0);
}
