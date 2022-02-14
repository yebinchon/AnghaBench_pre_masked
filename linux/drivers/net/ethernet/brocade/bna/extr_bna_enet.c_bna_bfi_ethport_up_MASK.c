
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bna_ethport {TYPE_2__* bna; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ enet; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bna_ethport*) ;
 int FUNC_1 (struct bna_ethport*) ;

__attribute__((used)) static void
FUNC_2(struct bna_ethport *VAR_1)
{
 if (VAR_1->bna->enet.type == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}
