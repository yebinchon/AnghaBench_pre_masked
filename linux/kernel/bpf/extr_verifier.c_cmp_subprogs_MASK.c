
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_subprog_info {int start; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((struct bpf_subprog_info *)VAR_0)->start -
        ((struct bpf_subprog_info *)VAR_1)->start;
}
