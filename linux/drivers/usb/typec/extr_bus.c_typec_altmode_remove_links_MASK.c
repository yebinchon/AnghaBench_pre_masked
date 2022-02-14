
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int kobj; } ;
struct TYPE_10__ {TYPE_4__ dev; } ;
struct altmode {TYPE_5__ adev; TYPE_3__* partner; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;
struct TYPE_8__ {TYPE_2__ adev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct altmode *VAR_0)
{
 FUNC_0(&VAR_0->partner->adev.dev.kobj, "partner");
 FUNC_0(&VAR_0->adev.dev.kobj, "port");
}
