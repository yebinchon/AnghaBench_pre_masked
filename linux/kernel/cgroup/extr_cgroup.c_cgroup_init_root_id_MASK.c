
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_root {int hierarchy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct cgroup_root*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cgroup_root *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2);

 VAR_4 = FUNC_0(&VAR_1, VAR_3, 0, 0, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->hierarchy_id = VAR_4;
 return 0;
}
