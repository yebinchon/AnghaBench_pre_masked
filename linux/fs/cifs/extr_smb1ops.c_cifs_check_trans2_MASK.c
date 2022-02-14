
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int multiRsp; char* resp_buf; int multiEnd; int large_buf; } ;
struct TCP_Server_Info {int * bigbuf; int large_buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct mid_q_entry*,int) ;

__attribute__((used)) static bool
FUNC_4(struct mid_q_entry *VAR_1, struct TCP_Server_Info *VAR_2,
    char *VAR_3, int VAR_4)
{
 if (VAR_4)
  return 0;
 if (FUNC_0(VAR_3) <= 0)
  return 0;
 VAR_1->multiRsp = 1;
 if (VAR_1->resp_buf) {

  VAR_4 = FUNC_2(VAR_3, VAR_1->resp_buf);
  if (VAR_4 > 0)
   return 1;

  VAR_1->multiEnd = 1;
  FUNC_3(VAR_1, VAR_4);
  return 1;
 }
 if (!VAR_2->large_buf) {

  FUNC_1(VAR_0, "1st trans2 resp needs bigbuf\n");
 } else {

  VAR_1->resp_buf = VAR_3;
  VAR_1->large_buf = 1;
  VAR_2->bigbuf = ((void*)0);
 }
 return 1;
}
