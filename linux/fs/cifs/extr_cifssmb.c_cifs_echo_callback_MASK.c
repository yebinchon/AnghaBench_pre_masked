
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {struct TCP_Server_Info* callback_data; } ;
struct cifs_credits {int value; int instance; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mid_q_entry*) ;
 int FUNC_1 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;

__attribute__((used)) static void
FUNC_2(struct mid_q_entry *VAR_1)
{
 struct TCP_Server_Info *VAR_2 = VAR_1->callback_data;
 struct cifs_credits VAR_3 = { .value = 1, .instance = 0 };

 FUNC_0(VAR_1);
 FUNC_1(VAR_2, &VAR_3, VAR_0);
}
