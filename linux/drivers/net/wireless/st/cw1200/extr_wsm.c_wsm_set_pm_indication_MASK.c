
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct cw1200_common {int ps_mode_switch_done; scalar_t__ ps_mode_switch_in_progress; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct cw1200_common *VAR_0,
     struct wsm_buf *VAR_1)
{

 if (VAR_0->ps_mode_switch_in_progress) {
  VAR_0->ps_mode_switch_in_progress = 0;
  FUNC_0(&VAR_0->ps_mode_switch_done);
 }
 return 0;
}
