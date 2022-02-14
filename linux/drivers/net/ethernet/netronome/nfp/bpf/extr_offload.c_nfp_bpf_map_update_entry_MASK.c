
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bpf_offloaded_map {int dev_priv; } ;


 int FUNC_0 (struct bpf_offloaded_map*,void*,void*,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static int
FUNC_3(struct bpf_offloaded_map *VAR_0,
    void *VAR_1, void *VAR_2, u64 VAR_3)
{
 FUNC_1(VAR_0->dev_priv, VAR_2);
 FUNC_2(VAR_0->dev_priv, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
