
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_prog_array_item {int dummy; } ;
struct bpf_prog_array {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct bpf_prog_array hdr; } ;


 TYPE_1__ VAR_0 ;
 struct bpf_prog_array* FUNC_0 (int,int ) ;

struct bpf_prog_array *FUNC_1(u32 VAR_1, gfp_t VAR_2)
{
 if (VAR_1)
  return FUNC_0(sizeof(struct bpf_prog_array) +
          sizeof(struct bpf_prog_array_item) *
          (VAR_1 + 1),
          VAR_2);

 return &VAR_0.hdr;
}
