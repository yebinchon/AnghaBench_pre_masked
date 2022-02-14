
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct bpf_prog *VAR_1, struct net_device *VAR_2)
{
 bool VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0);

 return VAR_3;
}
