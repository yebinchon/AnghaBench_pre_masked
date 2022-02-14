
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mid_q_entry {char* resp_buf; int multiRsp; scalar_t__ large_buf; } ;
struct TCP_Server_Info {int * smallbuf; int * bigbuf; scalar_t__ large_buf; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* check_trans2 ) (struct mid_q_entry*,struct TCP_Server_Info*,char*,int) ;} ;


 int FUNC_0 (struct mid_q_entry*,int) ;
 scalar_t__ FUNC_1 (struct mid_q_entry*,struct TCP_Server_Info*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct mid_q_entry *VAR_0, struct TCP_Server_Info *VAR_1,
    char *VAR_2, int VAR_3)
{
 if (VAR_1->ops->check_trans2 &&
     VAR_1->ops->check_trans2(VAR_0, VAR_1, VAR_2, VAR_3))
  return;
 VAR_0->resp_buf = VAR_2;
 VAR_0->large_buf = VAR_1->large_buf;

 if (!VAR_0->multiRsp) {

  if (VAR_1->large_buf)
   VAR_1->bigbuf = ((void*)0);
  else
   VAR_1->smallbuf = ((void*)0);
 }
 FUNC_0(VAR_0, VAR_3);
}
