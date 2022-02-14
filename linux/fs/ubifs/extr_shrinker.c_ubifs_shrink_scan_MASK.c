
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {unsigned long nr_to_scan; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long,int ,int*) ;
 int VAR_3 ;

unsigned long FUNC_4(struct shrinker *VAR_4,
    struct shrink_control *VAR_5)
{
 unsigned long VAR_6 = VAR_5->nr_to_scan;
 int VAR_7 = 0;
 unsigned long VAR_8;
 long VAR_9 = FUNC_0(&VAR_3);

 if (!VAR_9) {







  FUNC_1("no clean znodes, kick a thread");
  return FUNC_2();
 }

 VAR_8 = FUNC_3(VAR_6, VAR_0, &VAR_7);
 if (VAR_8 >= VAR_6)
  goto out;

 FUNC_1("not enough old znodes, try to free young ones");
 VAR_8 += FUNC_3(VAR_6 - VAR_8, VAR_2, &VAR_7);
 if (VAR_8 >= VAR_6)
  goto out;

 FUNC_1("not enough young znodes, free all");
 VAR_8 += FUNC_3(VAR_6 - VAR_8, 0, &VAR_7);

 if (!VAR_8 && VAR_7) {
  FUNC_1("freed nothing, but contention");
  return VAR_1;
 }

out:
 FUNC_1("%lu znodes were freed, requested %lu", VAR_8, VAR_6);
 return VAR_8;
}
