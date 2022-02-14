
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_offload_ops {int dummy; } ;
struct bpf_offload_dev {int netdevs; void* priv; struct bpf_prog_offload_ops const* ops; } ;


 int VAR_0 ;
 struct bpf_offload_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct bpf_offload_dev* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

struct bpf_offload_dev *
FUNC_6(const struct bpf_prog_offload_ops *VAR_6, void *VAR_7)
{
 struct bpf_offload_dev *VAR_8;
 int VAR_9;

 FUNC_2(&VAR_2);
 if (!VAR_4) {
  VAR_9 = FUNC_4(&VAR_3, &VAR_5);
  if (VAR_9)
   return FUNC_0(VAR_9);
  VAR_4 = 1;
 }
 FUNC_5(&VAR_2);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->ops = VAR_6;
 VAR_8->priv = VAR_7;
 FUNC_1(&VAR_8->netdevs);

 return VAR_8;
}
