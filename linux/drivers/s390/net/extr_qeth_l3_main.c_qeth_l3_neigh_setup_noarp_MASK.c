
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {TYPE_1__* ops; int output; int ha; int nud_state; } ;
struct TYPE_2__ {int connected_output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct neighbour *VAR_1)
{
 VAR_1->nud_state = VAR_0;
 FUNC_0(VAR_1->ha, "FAKELL", 6);
 VAR_1->output = VAR_1->ops->connected_output;
 return 0;
}
