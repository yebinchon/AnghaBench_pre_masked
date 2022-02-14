
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct ucounts {int dummy; } ;
struct css_set {int dummy; } ;
struct cgroup_namespace {struct css_set* root_cset; struct ucounts* ucounts; int user_ns; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cgroup_namespace* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cgroup_namespace*) ;
 struct cgroup_namespace* FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ucounts*) ;
 int FUNC_5 (struct cgroup_namespace*) ;
 int FUNC_6 (struct css_set*) ;
 int FUNC_7 (struct user_namespace*) ;
 struct ucounts* FUNC_8 (struct user_namespace*) ;
 int FUNC_9 (struct user_namespace*,int ) ;
 int FUNC_10 (struct css_set*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct css_set* FUNC_13 (int ) ;

struct cgroup_namespace *FUNC_14(unsigned long VAR_6,
     struct user_namespace *VAR_7,
     struct cgroup_namespace *VAR_8)
{
 struct cgroup_namespace *VAR_9;
 struct ucounts *VAR_10;
 struct css_set *VAR_11;

 FUNC_0(!VAR_8);

 if (!(VAR_6 & VAR_1)) {
  FUNC_5(VAR_8);
  return VAR_8;
 }


 if (!FUNC_9(VAR_7, VAR_0))
  return FUNC_1(-VAR_3);

 VAR_10 = FUNC_8(VAR_7);
 if (!VAR_10)
  return FUNC_1(-VAR_2);


 FUNC_11(&VAR_4);
 VAR_11 = FUNC_13(VAR_5);
 FUNC_6(VAR_11);
 FUNC_12(&VAR_4);

 VAR_9 = FUNC_3();
 if (FUNC_2(VAR_9)) {
  FUNC_10(VAR_11);
  FUNC_4(VAR_10);
  return VAR_9;
 }

 VAR_9->user_ns = FUNC_7(VAR_7);
 VAR_9->ucounts = VAR_10;
 VAR_9->root_cset = VAR_11;

 return VAR_9;
}
