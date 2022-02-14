
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int * resp_buf; } ;
struct TCP_Server_Info {int * smallbuf; } ;


 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (struct mid_q_entry*,int) ;

__attribute__((used)) static int
FUNC_2(struct TCP_Server_Info *VAR_0, struct mid_q_entry *VAR_1,
       bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_2);
 VAR_1->resp_buf = VAR_0->smallbuf;
 VAR_0->smallbuf = ((void*)0);
 return VAR_3;
}
