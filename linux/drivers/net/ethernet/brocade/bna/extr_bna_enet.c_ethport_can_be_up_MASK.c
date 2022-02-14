
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bna_ethport {int flags; TYPE_2__* bna; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ enet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(struct bna_ethport *VAR_4)
{
 int VAR_5 = 0;
 if (VAR_4->bna->enet.type == VAR_0)
  VAR_5 = ((VAR_4->flags & VAR_1) &&
    (VAR_4->flags & VAR_3) &&
    (VAR_4->flags & VAR_2));
 else
  VAR_5 = ((VAR_4->flags & VAR_1) &&
    (VAR_4->flags & VAR_3) &&
    !(VAR_4->flags & VAR_2));
 return VAR_5;
}
