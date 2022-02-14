
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {scalar_t__ db_bar_no_edpm; scalar_t__ dcbx_no_edpm; } ;



bool FUNC_0(struct qed_hwfn *VAR_0)
{
 if (VAR_0->dcbx_no_edpm || VAR_0->db_bar_no_edpm)
  return 0;

 return 1;
}
