
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ active; int exist; scalar_t__ new; } ;
struct pvc_device {TYPE_1__ state; TYPE_3__* ether; TYPE_2__* main; int dlci; int frad; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (int ,char*,int ,char*,char*,char*,char*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct pvc_device *VAR_0)
{
 FUNC_0(VAR_0->frad, "DLCI %d [%s%s%s]%s %s\n",
      VAR_0->dlci,
      VAR_0->main ? VAR_0->main->name : "",
      VAR_0->main && VAR_0->ether ? " " : "",
      VAR_0->ether ? VAR_0->ether->name : "",
      VAR_0->state.new ? " new" : "",
      !VAR_0->state.exist ? "deleted" :
      VAR_0->state.active ? "active" : "inactive");
}
