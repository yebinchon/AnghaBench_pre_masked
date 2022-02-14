
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int connection_recovery; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*) ;

int FUNC_2(struct iscsi_conn *VAR_0)
{
 FUNC_0(&VAR_0->connection_recovery, 1);

 if (FUNC_1(VAR_0) < 0)
  return -1;

 return 0;
}
