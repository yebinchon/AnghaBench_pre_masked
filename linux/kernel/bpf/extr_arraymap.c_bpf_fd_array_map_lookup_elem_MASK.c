
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_map {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_fd_sys_lookup_elem ) (void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void** FUNC_1 (struct bpf_map*,void*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (void*) ;

int FUNC_5(struct bpf_map *VAR_2, void *VAR_3, u32 *VAR_4)
{
 void **VAR_5, *VAR_6;
 int VAR_7 = 0;

 if (!VAR_2->ops->map_fd_sys_lookup_elem)
  return -VAR_1;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 && (VAR_6 = FUNC_0(*VAR_5)))
  *VAR_4 = VAR_2->ops->map_fd_sys_lookup_elem(VAR_6);
 else
  VAR_7 = -VAR_0;
 FUNC_3();

 return VAR_7;
}
