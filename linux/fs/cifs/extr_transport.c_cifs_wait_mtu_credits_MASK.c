
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_credits {int instance; scalar_t__ value; } ;
struct TCP_Server_Info {int reconnect_instance; } ;



int
FUNC_0(struct TCP_Server_Info *VAR_0, unsigned int VAR_1,
        unsigned int *VAR_2, struct cifs_credits *VAR_3)
{
 *VAR_2 = VAR_1;
 VAR_3->value = 0;
 VAR_3->instance = VAR_0->reconnect_instance;
 return 0;
}
