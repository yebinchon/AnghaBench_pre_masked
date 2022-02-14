
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {struct cifs_readdata* callback_data; } ;
struct cifs_readdata {int result; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct mid_q_entry*,int ) ;

__attribute__((used)) static int
FUNC_1(struct TCP_Server_Info *VAR_0, struct mid_q_entry *VAR_1)
{
 struct cifs_readdata *VAR_2 = VAR_1->callback_data;

 return FUNC_0(VAR_0, VAR_1, VAR_2->result);
}
