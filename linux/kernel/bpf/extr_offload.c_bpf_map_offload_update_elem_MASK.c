
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct bpf_offloaded_map {TYPE_1__* dev_ops; scalar_t__ netdev; } ;
struct bpf_map {int dummy; } ;
struct TYPE_2__ {int (* map_update_elem ) (struct bpf_offloaded_map*,void*,void*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct bpf_offloaded_map* FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (struct bpf_offloaded_map*,void*,void*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct bpf_map *VAR_4,
    void *VAR_5, void *VAR_6, u64 VAR_7)
{
 struct bpf_offloaded_map *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = -VAR_2;

 if (FUNC_3(VAR_7 > VAR_0))
  return -VAR_1;

 FUNC_0(&VAR_3);
 if (VAR_8->netdev)
  VAR_9 = VAR_8->dev_ops->map_update_elem(VAR_8, VAR_5, VAR_6,
             VAR_7);
 FUNC_4(&VAR_3);

 return VAR_9;
}
