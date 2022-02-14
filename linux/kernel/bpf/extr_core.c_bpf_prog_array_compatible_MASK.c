
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {scalar_t__ type; scalar_t__ jited; scalar_t__ kprobe_override; } ;
struct bpf_array {scalar_t__ owner_prog_type; scalar_t__ owner_jited; } ;



bool FUNC_0(struct bpf_array *VAR_0,
          const struct bpf_prog *VAR_1)
{
 if (VAR_1->kprobe_override)
  return 0;

 if (!VAR_0->owner_prog_type) {



  VAR_0->owner_prog_type = VAR_1->type;
  VAR_0->owner_jited = VAR_1->jited;

  return 1;
 }

 return VAR_0->owner_prog_type == VAR_1->type &&
        VAR_0->owner_jited == VAR_1->jited;
}
