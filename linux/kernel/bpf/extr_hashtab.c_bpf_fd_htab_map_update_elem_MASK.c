
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct file {int dummy; } ;
struct bpf_map {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_fd_put_ptr ) (void*) ;void* (* map_fd_get_ptr ) (struct bpf_map*,struct file*,int ) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct bpf_map*,void*,void**,int ) ;
 void* FUNC_3 (struct bpf_map*,struct file*,int ) ;
 int FUNC_4 (void*) ;

int FUNC_5(struct bpf_map *VAR_0, struct file *VAR_1,
    void *VAR_2, void *VAR_3, u64 VAR_4)
{
 void *VAR_5;
 int VAR_6;
 u32 VAR_7 = *(u32 *)VAR_3;

 VAR_5 = VAR_0->ops->map_fd_get_ptr(VAR_0, VAR_1, VAR_7);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_0, VAR_2, &VAR_5, VAR_4);
 if (VAR_6)
  VAR_0->ops->map_fd_put_ptr(VAR_5);

 return VAR_6;
}
