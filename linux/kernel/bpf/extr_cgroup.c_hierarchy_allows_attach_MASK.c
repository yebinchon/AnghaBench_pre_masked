
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* flags; int * progs; } ;
struct cgroup {TYPE_1__ bpf; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct cgroup *VAR_2,
        enum bpf_attach_type VAR_3,
        u32 VAR_4)
{
 struct cgroup *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return 1;
 do {
  u32 VAR_6 = VAR_5->bpf.flags[VAR_3];
  u32 VAR_7;

  if (VAR_6 & VAR_0)
   return 1;
  VAR_7 = FUNC_2(&VAR_5->bpf.progs[VAR_3]);
  FUNC_0(VAR_7 > 1);
  if (VAR_7 == 1)
   return !!(VAR_6 & VAR_1);
  VAR_5 = FUNC_1(VAR_5);
 } while (VAR_5);
 return 1;
}
