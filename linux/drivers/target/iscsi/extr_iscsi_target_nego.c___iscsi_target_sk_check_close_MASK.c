
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(struct sock *VAR_2)
{
 if (VAR_2->sk_state == VAR_1 || VAR_2->sk_state == VAR_0) {
  FUNC_0("__iscsi_target_sk_check_close: TCP_CLOSE_WAIT|TCP_CLOSE,"
   "returning FALSE\n");
  return 1;
 }
 return 0;
}
