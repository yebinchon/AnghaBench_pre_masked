
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app_bpf {unsigned int cmsg_key_sz; unsigned int cmsg_val_sz; } ;
struct cmsg_req_map_op {int dummy; } ;



__attribute__((used)) static unsigned int
FUNC_0(struct nfp_app_bpf *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = sizeof(struct cmsg_req_map_op);
 VAR_2 += (VAR_0->cmsg_key_sz + VAR_0->cmsg_val_sz) * VAR_1;

 return VAR_2;
}
