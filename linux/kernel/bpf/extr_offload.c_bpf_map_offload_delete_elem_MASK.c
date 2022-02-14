
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_offloaded_map {TYPE_1__* dev_ops; scalar_t__ netdev; } ;
struct bpf_map {int dummy; } ;
struct TYPE_2__ {int (* map_delete_elem ) (struct bpf_offloaded_map*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct bpf_offloaded_map* FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (struct bpf_offloaded_map*,void*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct bpf_map *VAR_2, void *VAR_3)
{
 struct bpf_offloaded_map *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_1);
 if (VAR_4->netdev)
  VAR_5 = VAR_4->dev_ops->map_delete_elem(VAR_4, VAR_3);
 FUNC_3(&VAR_1);

 return VAR_5;
}
