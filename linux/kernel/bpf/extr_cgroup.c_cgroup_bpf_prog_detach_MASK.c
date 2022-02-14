
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int attach_type; int attach_bpf_fd; int target_fd; } ;
struct cgroup {int dummy; } ;
typedef struct cgroup bpf_prog ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 scalar_t__ FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 struct cgroup* FUNC_2 (int ,int) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct cgroup*,struct cgroup*,int ,int ) ;
 struct cgroup* FUNC_5 (int ) ;
 int FUNC_6 (struct cgroup*) ;

int FUNC_7(const union bpf_attr *VAR_0, enum bpf_prog_type VAR_1)
{
 struct bpf_prog *VAR_2;
 struct cgroup *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_0->target_fd);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2 = FUNC_2(VAR_0->attach_bpf_fd, VAR_1);
 if (FUNC_0(VAR_2))
  VAR_2 = ((void*)0);

 VAR_4 = FUNC_4(VAR_3, VAR_2, VAR_0->attach_type, 0);
 if (VAR_2)
  FUNC_3(VAR_2);

 FUNC_6(VAR_3);
 return VAR_4;
}
