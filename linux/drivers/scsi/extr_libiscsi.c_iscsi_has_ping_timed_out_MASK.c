
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int recv_timeout; int ping_timeout; scalar_t__ last_recv; scalar_t__ ping_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct iscsi_conn *VAR_2)
{
 if (VAR_2->ping_task &&
     FUNC_0(VAR_2->last_recv + (VAR_2->recv_timeout * VAR_0) +
      (VAR_2->ping_timeout * VAR_0), VAR_1))
  return 1;
 else
  return 0;
}
