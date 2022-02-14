
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_transform_hdr {int dummy; } ;
struct smb2_sync_hdr {scalar_t__ NextCommand; } ;
struct mid_q_entry {int decrypted; unsigned int resp_buf_size; int (* handle ) (struct TCP_Server_Info*,struct mid_q_entry*) ;} ;
struct TCP_Server_Info {char* smallbuf; unsigned int pdu_size; int large_buf; char* bigbuf; int total_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct TCP_Server_Info*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct TCP_Server_Info*,struct mid_q_entry*) ;
 int FUNC_4 (struct TCP_Server_Info*,char*,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct TCP_Server_Info*,char*,unsigned int,int *,int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,char*,int) ;
 struct mid_q_entry* FUNC_11 (struct TCP_Server_Info*,char*) ;
 int FUNC_12 (struct TCP_Server_Info*,struct mid_q_entry*) ;

__attribute__((used)) static int
FUNC_13(struct TCP_Server_Info *VAR_6,
      struct mid_q_entry **VAR_7, char **VAR_8,
      int *VAR_9)
{
 int VAR_10, VAR_11;
 char *VAR_12 = VAR_6->smallbuf;
 struct smb2_sync_hdr *VAR_13;
 unsigned int VAR_14 = VAR_6->pdu_size;
 unsigned int VAR_15;
 struct mid_q_entry *VAR_16;
 int VAR_17;
 char *VAR_18 = ((void*)0);

 *VAR_9 = 0;


 if (VAR_14 > VAR_3) {
  VAR_6->large_buf = 1;
  FUNC_10(VAR_6->bigbuf, VAR_12, VAR_6->total_read);
  VAR_12 = VAR_6->bigbuf;
 }


 VAR_11 = FUNC_4(VAR_6, VAR_12 + FUNC_0(VAR_6) - 1,
    VAR_14 - FUNC_0(VAR_6) + 1);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_6->total_read += VAR_11;

 VAR_15 = VAR_14 - sizeof(struct smb2_transform_hdr);
 VAR_11 = FUNC_7(VAR_6, VAR_12, VAR_15, ((void*)0), 0, 0);
 if (VAR_11)
  return VAR_11;

 VAR_17 = VAR_6->large_buf;
one_more:
 VAR_13 = (struct smb2_sync_hdr *)VAR_12;
 if (VAR_13->NextCommand) {
  if (VAR_17)
   VAR_18 = (char *)FUNC_1();
  else
   VAR_18 = (char *)FUNC_6();
  FUNC_10(VAR_18,
         VAR_12 + FUNC_9(VAR_13->NextCommand),
         VAR_14 - FUNC_9(VAR_13->NextCommand));
 }

 VAR_16 = FUNC_11(VAR_6, VAR_12);
 if (VAR_16 == ((void*)0))
  FUNC_2(VAR_2, "mid not found\n");
 else {
  FUNC_2(VAR_2, "mid found\n");
  VAR_16->decrypted = 1;
  VAR_16->resp_buf_size = VAR_6->pdu_size;
 }

 if (*VAR_9 >= VAR_4) {
  FUNC_5(VAR_5, "too many PDUs in compound\n");
  return -1;
 }
 VAR_8[*VAR_9] = VAR_12;
 VAR_7[(*VAR_9)++] = VAR_16;

 if (VAR_16 && VAR_16->handle)
  VAR_10 = VAR_16->handle(VAR_6, VAR_16);
 else
  VAR_10 = FUNC_3(VAR_6, VAR_16);

 if (VAR_10 == 0 && VAR_13->NextCommand) {
  VAR_14 -= FUNC_9(VAR_13->NextCommand);
  VAR_6->large_buf = VAR_17;
  if (VAR_17)
   VAR_6->bigbuf = VAR_12 = VAR_18;
  else
   VAR_6->smallbuf = VAR_12 = VAR_18;
  goto one_more;
 } else if (VAR_10 != 0) {






  if (VAR_17)
   FUNC_8(VAR_0, VAR_18);
  else
   FUNC_8(VAR_1, VAR_18);
 }

 return VAR_10;
}
