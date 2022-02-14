
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; scalar_t__* name; } ;
struct nameidata {scalar_t__ last_type; int flags; TYPE_1__ last; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct nameidata *VAR_4)
{
 if (VAR_4->last_type == VAR_0 && VAR_4->last.name[VAR_4->last.len])
  VAR_4->flags |= VAR_2 | VAR_1;

 VAR_4->flags &= ~VAR_3;
 return FUNC_0(VAR_4, 0);
}
