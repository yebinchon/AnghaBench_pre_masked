
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int attach_flags; int attach_type; int target_fd; } ;
struct cgroup {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 scalar_t__ FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 (struct cgroup*,struct bpf_prog*,int ,int ) ;
 struct cgroup* FUNC_3 (int ) ;
 int FUNC_4 (struct cgroup*) ;

int FUNC_5(const union bpf_attr *VAR_0,
      enum bpf_prog_type VAR_1, struct bpf_prog *VAR_2)
{
 struct cgroup *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0->target_fd);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_0->attach_type,
    VAR_0->attach_flags);
 FUNC_4(VAR_3);
 return VAR_4;
}
