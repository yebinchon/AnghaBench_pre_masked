
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbnet {int login_sent; int login_received; int login_work; int connection_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct tbnet *VAR_1)
{
 FUNC_1(&VAR_1->connection_lock);
 VAR_1->login_sent = 0;
 VAR_1->login_received = 0;
 FUNC_2(&VAR_1->connection_lock);

 FUNC_3(VAR_0, &VAR_1->login_work,
      FUNC_0(1000));
}
