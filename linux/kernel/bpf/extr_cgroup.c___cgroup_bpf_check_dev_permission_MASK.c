
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * effective; } ;
struct cgroup {TYPE_1__ bpf; } ;
struct bpf_cgroup_dev_ctx {short access_type; int minor; int major; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bpf_cgroup_dev_ctx*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct cgroup* FUNC_3 (int ) ;

int FUNC_4(short VAR_2, u32 VAR_3, u32 VAR_4,
          short VAR_5, enum bpf_attach_type VAR_6)
{
 struct cgroup *VAR_7;
 struct bpf_cgroup_dev_ctx VAR_8 = {
  .access_type = (VAR_5 << 16) | VAR_2,
  .major = VAR_3,
  .minor = VAR_4,
 };
 int VAR_9 = 1;

 FUNC_1();
 VAR_7 = FUNC_3(VAR_1);
 VAR_9 = FUNC_0(VAR_7->bpf.effective[VAR_6], &VAR_8,
       VAR_0);
 FUNC_2();

 return !VAR_9;
}
