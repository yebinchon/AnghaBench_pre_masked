
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_bpf {struct bpf_prog* prog; } ;
struct TYPE_3__ {int prog; } ;
struct cpsw_priv {TYPE_1__ xdpi; int xdp_prog; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bpf_prog*) ;
 int FUNC_1 (TYPE_1__*,struct netdev_bpf*) ;
 int FUNC_2 (TYPE_1__*,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_3(struct cpsw_priv *VAR_1, struct netdev_bpf *VAR_2)
{
 struct bpf_prog *VAR_3 = VAR_2->prog;

 if (!VAR_1->xdpi.prog && !VAR_3)
  return 0;

 if (!FUNC_1(&VAR_1->xdpi, VAR_2))
  return -VAR_0;

 FUNC_0(VAR_1->xdp_prog, VAR_3);

 FUNC_2(&VAR_1->xdpi, VAR_2);

 return 0;
}
