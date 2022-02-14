
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int is_host_sleep_configured; scalar_t__ psstate; int host_sleep_q; scalar_t__ is_host_sleep_activated; } ;
struct cmd_header {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lbs_private *VAR_1, unsigned long VAR_2,
   struct cmd_header *VAR_3)
{
 if (VAR_1->is_host_sleep_activated) {
  VAR_1->is_host_sleep_configured = 0;
  if (VAR_1->psstate == VAR_0) {
   VAR_1->is_host_sleep_activated = 0;
   FUNC_0(&VAR_1->host_sleep_q);
  }
 } else {
  VAR_1->is_host_sleep_configured = 1;
 }

 return 0;
}
