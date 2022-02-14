
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {scalar_t__ tcpStatus; int echo_interval; int response_q; scalar_t__ lstrp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(struct TCP_Server_Info *VAR_5)
{
 if ((VAR_5->tcpStatus == VAR_0 ||
     VAR_5->tcpStatus == VAR_1) &&
     FUNC_2(VAR_4, VAR_5->lstrp + 3 * VAR_5->echo_interval)) {
  FUNC_1(VAR_3, "has not responded in %lu seconds. Reconnecting...\n",
    (3 * VAR_5->echo_interval) / VAR_2);
  FUNC_0(VAR_5);
  FUNC_3(&VAR_5->response_q);
  return 1;
 }

 return 0;
}
