
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* single ) (unsigned int) ;} ;
struct TYPE_3__ {int (* single ) (unsigned int) ;} ;
struct cpuhp_step {char const* name; int multi_instance; int list; TYPE_2__ teardown; TYPE_1__ startup; } ;
typedef enum cpuhp_state { ____Placeholder_cpuhp_state } cpuhp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct cpuhp_step* FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(enum cpuhp_state VAR_3, const char *VAR_4,
     int (*VAR_5)(unsigned int VAR_6),
     int (*VAR_7)(unsigned int VAR_8),
     bool VAR_9)
{

 struct cpuhp_step *VAR_10;
 int VAR_11 = 0;
 if (VAR_4 && (VAR_3 == VAR_0 ||
       VAR_3 == VAR_1)) {
  VAR_11 = FUNC_2(VAR_3);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_3 = VAR_11;
 }
 VAR_10 = FUNC_1(VAR_3);
 if (VAR_4 && VAR_10->name)
  return -VAR_2;

 VAR_10->startup.single = VAR_5;
 VAR_10->teardown.single = VAR_7;
 VAR_10->name = VAR_4;
 VAR_10->multi_instance = VAR_9;
 FUNC_0(&VAR_10->list);
 return VAR_11;
}
