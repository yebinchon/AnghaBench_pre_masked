
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_map {TYPE_1__* ops; int usercnt; } ;
struct TYPE_2__ {int (* map_release_uref ) (struct bpf_map*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_map*) ;

__attribute__((used)) static void FUNC_2(struct bpf_map *VAR_0)
{
 if (FUNC_0(&VAR_0->usercnt)) {
  if (VAR_0->ops->map_release_uref)
   VAR_0->ops->map_release_uref(VAR_0);
 }
}
