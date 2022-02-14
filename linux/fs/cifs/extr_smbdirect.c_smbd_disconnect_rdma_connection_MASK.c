
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {int disconnect_work; int workqueue; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct smbd_connection *VAR_0)
{
 FUNC_0(VAR_0->workqueue, &VAR_0->disconnect_work);
}
