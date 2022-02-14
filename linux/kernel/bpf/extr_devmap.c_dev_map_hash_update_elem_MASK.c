
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct bpf_map {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {int net_ns; } ;


 int FUNC_0 (int ,struct bpf_map*,void*,void*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct bpf_map *VAR_1, void *VAR_2, void *VAR_3,
       u64 VAR_4)
{
 return FUNC_0(VAR_0->nsproxy->net_ns,
      VAR_1, VAR_2, VAR_3, VAR_4);
}
