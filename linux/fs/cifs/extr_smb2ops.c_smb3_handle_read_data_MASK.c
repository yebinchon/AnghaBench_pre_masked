
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int dummy; } ;
struct TCP_Server_Info {char* bigbuf; char* smallbuf; int pdu_size; scalar_t__ large_buf; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct mid_q_entry*,char*,int ,int *,int ,int ) ;

int
FUNC_1(struct TCP_Server_Info *VAR_0, struct mid_q_entry *VAR_1)
{
 char *VAR_2 = VAR_0->large_buf ? VAR_0->bigbuf : VAR_0->smallbuf;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->pdu_size,
    ((void*)0), 0, 0);
}
