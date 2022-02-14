
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rapl_domain {TYPE_1__* rpl; int state; int name; TYPE_2__* rp; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int prim_id; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct rapl_domain*,int,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct rapl_domain *VAR_3)
{
 u64 VAR_4;
 int VAR_5;


 if (!FUNC_1(VAR_3, VAR_1, 0, &VAR_4)) {
  if (VAR_4) {
   FUNC_0("RAPL %s domain %s locked by BIOS\n",
    VAR_3->rp->name, VAR_3->name);
   VAR_3->state |= VAR_0;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_6 = VAR_3->rpl[VAR_5].prim_id;

  if (FUNC_1(VAR_3, VAR_6, 0, &VAR_4))
   VAR_3->rpl[VAR_5].name = ((void*)0);
 }
}
