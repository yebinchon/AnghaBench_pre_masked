
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mid_q_entry {int dummy; } ;
struct TCP_Server_Info {char* smallbuf; unsigned int pdu_size; int large_buf; char* bigbuf; int total_read; TYPE_1__* vals; int response_q; } ;
struct TYPE_2__ {unsigned int header_preamble_size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct TCP_Server_Info*) ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct TCP_Server_Info*) ;
 int VAR_3 ;
 int FUNC_2 (struct TCP_Server_Info*,struct mid_q_entry*) ;
 int FUNC_3 (struct TCP_Server_Info*,char*,unsigned int) ;
 int FUNC_4 (struct TCP_Server_Info*) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct TCP_Server_Info *VAR_4, struct mid_q_entry *VAR_5)
{
 int VAR_6;
 char *VAR_7 = VAR_4->smallbuf;
 unsigned int VAR_8 = VAR_4->pdu_size;


 if (VAR_8 > VAR_0 + FUNC_1(VAR_4) -
  VAR_4->vals->header_preamble_size) {
  FUNC_5(VAR_3, "SMB response too long (%u bytes)\n", VAR_8);
  FUNC_4(VAR_4);
  FUNC_8(&VAR_4->response_q);
  return -VAR_1;
 }


 if (VAR_8 > VAR_2 - 4) {
  VAR_4->large_buf = 1;
  FUNC_7(VAR_4->bigbuf, VAR_7, VAR_4->total_read);
  VAR_7 = VAR_4->bigbuf;
 }


 VAR_6 = FUNC_3(VAR_4, VAR_7 + FUNC_0(VAR_4) - 1,
           VAR_8 - FUNC_0(VAR_4) + 1
           + VAR_4->vals->header_preamble_size);

 if (VAR_6 < 0)
  return VAR_6;
 VAR_4->total_read += VAR_6;

 FUNC_6(VAR_7, VAR_4->total_read);

 return FUNC_2(VAR_4, VAR_5);
}
