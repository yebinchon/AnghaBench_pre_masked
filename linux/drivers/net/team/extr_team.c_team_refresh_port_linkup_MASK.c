
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int linkup; } ;
struct TYPE_3__ {int linkup; scalar_t__ linkup_enabled; } ;
struct team_port {int linkup; TYPE_2__ state; TYPE_1__ user; } ;


 int FUNC_0 (struct team_port*) ;

__attribute__((used)) static void FUNC_1(struct team_port *VAR_0)
{
 bool VAR_1 = VAR_0->user.linkup_enabled ? VAR_0->user.linkup :
            VAR_0->state.linkup;

 if (VAR_0->linkup != VAR_1) {
  VAR_0->linkup = VAR_1;
  FUNC_0(VAR_0);
 }
}
