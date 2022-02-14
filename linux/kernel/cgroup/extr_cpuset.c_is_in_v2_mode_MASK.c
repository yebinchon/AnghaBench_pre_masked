
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* root; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 return FUNC_0(VAR_1) ||
       (VAR_1.root->flags & VAR_0);
}
