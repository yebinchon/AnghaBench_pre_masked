
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_ops {scalar_t__ atomic_write_len; } ;
struct cgroup_subsys {int dummy; } ;
struct cftype {char* name; scalar_t__ max_write_len; struct cgroup_subsys* ss; struct kernfs_ops* kf_ops; scalar_t__ seq_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cftype*) ;
 struct kernfs_ops VAR_3 ;
 struct kernfs_ops VAR_4 ;
 struct kernfs_ops* FUNC_2 (struct kernfs_ops*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct cgroup_subsys *VAR_5, struct cftype *VAR_6)
{
 struct cftype *VAR_7;

 for (VAR_7 = VAR_6; VAR_7->name[0] != '\0'; VAR_7++) {
  struct kernfs_ops *VAR_8;

  FUNC_0(VAR_7->ss || VAR_7->kf_ops);

  if (VAR_7->seq_start)
   VAR_8 = &VAR_3;
  else
   VAR_8 = &VAR_4;





  if (VAR_7->max_write_len && VAR_7->max_write_len != VAR_2) {
   VAR_8 = FUNC_2(VAR_8, sizeof(*VAR_8), VAR_1);
   if (!VAR_8) {
    FUNC_1(VAR_6);
    return -VAR_0;
   }
   VAR_8->atomic_write_len = VAR_7->max_write_len;
  }

  VAR_7->kf_ops = VAR_8;
  VAR_7->ss = VAR_5;
 }

 return 0;
}
