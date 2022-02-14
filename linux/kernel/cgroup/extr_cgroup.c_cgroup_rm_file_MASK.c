
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_file {int notify_timer; int * kn; } ;
struct cgroup {int kn; } ;
struct cftype {int file_offset; int ss; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (struct cgroup*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cgroup*,struct cftype const*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cgroup *VAR_3, const struct cftype *VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_4(&VAR_2);

 if (VAR_4->file_offset) {
  struct cgroup_subsys_state *VAR_6 = FUNC_0(VAR_3, VAR_4->ss);
  struct cgroup_file *VAR_7 = (void *)VAR_6 + VAR_4->file_offset;

  FUNC_5(&VAR_1);
  VAR_7->kn = ((void*)0);
  FUNC_6(&VAR_1);

  FUNC_2(&VAR_7->notify_timer);
 }

 FUNC_3(VAR_3->kn, FUNC_1(VAR_3, VAR_4, VAR_5));
}
