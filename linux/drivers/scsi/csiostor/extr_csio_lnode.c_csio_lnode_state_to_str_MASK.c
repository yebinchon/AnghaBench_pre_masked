
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {int dummy; } ;
typedef int int8_t ;
typedef scalar_t__ csio_sm_state_t ;


 scalar_t__ FUNC_0 (struct csio_lnode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;

void
FUNC_2(struct csio_lnode *VAR_3, int8_t *VAR_4)
{
 if (FUNC_0(VAR_3) == ((csio_sm_state_t)VAR_2)) {
  FUNC_1(VAR_4, "UNINIT");
  return;
 }
 if (FUNC_0(VAR_3) == ((csio_sm_state_t)VAR_1)) {
  FUNC_1(VAR_4, "READY");
  return;
 }
 if (FUNC_0(VAR_3) == ((csio_sm_state_t)VAR_0)) {
  FUNC_1(VAR_4, "OFFLINE");
  return;
 }
 FUNC_1(VAR_4, "UNKNOWN");
}
