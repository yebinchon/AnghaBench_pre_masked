
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys {char* name; char* legacy_name; } ;
struct cgroup {TYPE_1__* root; } ;
struct cftype {int flags; int name; struct cgroup_subsys* ss; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cgroup*) ;
 int FUNC_1 (char*,int ,char*,char const*,char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static char *FUNC_3(struct cgroup *VAR_4, const struct cftype *VAR_5,
         char *VAR_6)
{
 struct cgroup_subsys *VAR_7 = VAR_5->ss;

 if (VAR_5->ss && !(VAR_5->flags & VAR_1) &&
     !(VAR_4->root->flags & VAR_3)) {
  const char *VAR_8 = (VAR_5->flags & VAR_0) ? ".__DEBUG__." : "";

  FUNC_1(VAR_6, VAR_2, "%s%s.%s",
    VAR_8, FUNC_0(VAR_4) ? VAR_7->name : VAR_7->legacy_name,
    VAR_5->name);
 } else {
  FUNC_2(VAR_6, VAR_5->name, VAR_2);
 }
 return VAR_6;
}
