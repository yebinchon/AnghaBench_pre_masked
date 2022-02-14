
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter_flags; } ;
struct il_priv {TYPE_1__ active; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct il_priv *VAR_1)
{
 return (VAR_1->active.filter_flags & VAR_0) ? 1 : 0;
}
