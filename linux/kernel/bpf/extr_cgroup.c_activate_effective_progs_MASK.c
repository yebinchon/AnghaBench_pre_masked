
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * effective; } ;
struct cgroup {TYPE_1__ bpf; } ;
struct bpf_prog_array {int dummy; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int FUNC_0 (struct bpf_prog_array*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct bpf_prog_array*,int ) ;

__attribute__((used)) static void FUNC_3(struct cgroup *VAR_1,
         enum bpf_attach_type VAR_2,
         struct bpf_prog_array *VAR_3)
{
 FUNC_2(VAR_1->bpf.effective[VAR_2], VAR_3,
      FUNC_1(&VAR_0));



 FUNC_0(VAR_3);
}
