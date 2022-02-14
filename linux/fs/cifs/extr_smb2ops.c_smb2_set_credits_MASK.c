
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int credits; int req_lock; int reconnect_instance; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct TCP_Server_Info *VAR_1, const int VAR_2)
{
 FUNC_1(&VAR_1->req_lock);
 VAR_1->credits = VAR_2;
 if (VAR_2 == 1)
  VAR_1->reconnect_instance++;
 FUNC_2(&VAR_1->req_lock);

 if (VAR_2 == 1)
  FUNC_0(VAR_0, "set credits to 1 due to smb2 reconnect\n");
}
