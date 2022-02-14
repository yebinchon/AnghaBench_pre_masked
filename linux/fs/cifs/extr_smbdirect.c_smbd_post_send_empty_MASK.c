
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {int count_send_empty; } ;


 int FUNC_0 (struct smbd_connection*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct smbd_connection *VAR_0)
{
 VAR_0->count_send_empty++;
 return FUNC_0(VAR_0, ((void*)0), 0, 0);
}
