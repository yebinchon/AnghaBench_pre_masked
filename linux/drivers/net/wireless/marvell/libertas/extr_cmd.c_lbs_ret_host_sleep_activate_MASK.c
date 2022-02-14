
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int is_host_sleep_activated; int host_sleep_q; } ;
struct cmd_header {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lbs_private *VAR_0,
  unsigned long VAR_1,
  struct cmd_header *VAR_2)
{
 VAR_0->is_host_sleep_activated = 1;
 FUNC_0(&VAR_0->host_sleep_q);

 return 0;
}
