
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_proto {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_func_proto const*) ;
 scalar_t__ FUNC_1 (struct bpf_func_proto const*) ;
 scalar_t__ FUNC_2 (struct bpf_func_proto const*,int) ;

__attribute__((used)) static int FUNC_3(const struct bpf_func_proto *VAR_1, int VAR_2)
{
 return FUNC_1(VAR_1) &&
        FUNC_0(VAR_1) &&
        FUNC_2(VAR_1, VAR_2) ? 0 : -VAR_0;
}
