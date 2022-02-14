
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_modedef {TYPE_2__* tape; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* stats; } ;
struct TYPE_3__ {int other_cnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct st_modedef* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,long long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct st_modedef *VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, "%lld",
         (long long)FUNC_0(&VAR_3->tape->stats->other_cnt));
}
